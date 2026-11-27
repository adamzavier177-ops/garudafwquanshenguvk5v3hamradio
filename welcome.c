/* Copyright 2023 Dual Tachyon
 * https://github.com
 * Modified for GarudaFW (Quansheng UV-K5 V3 / PY32F071)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 */

#include <string.h>
#include <stdint.h>

#include "driver/eeprom.h"
#include "driver/py25q16.h"
#include "driver/st7565.h"
#include "external/printf/printf.h"
#include "font.h"
#include "fw_assets.h"
#include "helper/battery.h"
#include "settings.h"
#include "misc.h"
#include "ui/helper.h"
#include "ui/welcome.h"
#include "ui/status.h"
#include "version.h"
#include "bitmaps.h"

#ifdef ENABLE_FEAT_F4HWN_K5VIEWER
    #include "k5viewer.h"
#endif

#ifdef ENABLE_FEAT_F4HWN_LOGO
#define LOGO_FLASH_ADDR     0x011000
#define LOGO_HEADER_SIZE    8
#define LOGO_BITMAP_ADDR    (LOGO_FLASH_ADDR + LOGO_HEADER_SIZE)

static void UI_LoadLogo(void)
{
    PY25Q16_ReadBuffer(LOGO_BITMAP_ADDR, gStatusLine, sizeof(gStatusLine));
    PY25Q16_ReadBuffer(LOGO_BITMAP_ADDR + sizeof(gStatusLine), gFrameBuffer, sizeof(gFrameBuffer));
}

void UI_DisplayLogo(void)
{
    UI_LoadLogo();
    ST7565_BlitStatusLine();
    ST7565_BlitFullScreen();
}
#endif
void UI_DisplayReleaseKeys(void)
{
    memset(gStatusLine,  0, sizeof(gStatusLine));
    memset(gFrameBuffer, 0, sizeof(gFrameBuffer));

    UI_PrintStringSmallBold("GARUDA FW", 0, 127, 2);
    UI_PrintStringSmallNormal("RELEASE KEYS", 0, 127, 4);

    ST7565_BlitStatusLine();
    ST7565_BlitFullScreen();
}

void UI_DisplayWelcome(void)
{
    char WelcomeString0 = {0};
    char WelcomeString1 = {0};
    char WelcomeString2 = {0};

    memset(gStatusLine,  0, sizeof(gStatusLine));
    memset(gFrameBuffer, 0, sizeof(gFrameBuffer));

    EEPROM_ReadBuffer(0x0EB0, WelcomeString0, 16);
    EEPROM_ReadBuffer(0x0EC0, WelcomeString1, 16);

    if (WelcomeString0 == 0 || WelcomeString0 == (char)0xFF) {
        strcpy(WelcomeString0, "GARUDA FW");
    }
    if (WelcomeString1 == 0 || WelcomeString1 == (char)0xFF) {
        strcpy(WelcomeString1, "UV-K5 V3 DX");
    }

    sprintf(WelcomeString2, "v1.0.0 PY32F071");

    UI_PrintStringSmallBold(WelcomeString0, 0, 127, 1);
    UI_PrintStringSmallNormal(WelcomeString1, 0, 127, 3);
    UI_PrintStringSmallNormal(WelcomeString2, 0, 127, 5);

    ST7565_BlitStatusLine();
    ST7565_BlitFullScreen();
}
