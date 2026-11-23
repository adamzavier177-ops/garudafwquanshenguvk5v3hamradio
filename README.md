# Tupelov Firmware — Quansheng UV-K5 V3 (PY32F071)

🌐 **Language:** [English](#english) | [Bahasa Indonesia](#bahasa-indonesia)

---

<a name="english"></a>
## 🇬🇧 English

Custom firmware for **Quansheng UV-K5 Hardware V3 (PY32F071 MCU)** developed in Indonesia, based on **F4HWN Fusion v7.00**.

### ⚠️ Hardware Compatibility Warning
* ✅ **Compatible:** Quansheng UV-K5 V3 / UV-K1 (powered by **PY32F071** microcontroller).
* ❌ **NOT Compatible:** Older Quansheng UV-K5 / UV-K5(8) / UV-K6 revisions (powered by **DP32G030** microcontroller).
* Flashing this firmware onto an incompatible hardware revision may brick the radio.

### 📥 Download Firmware
Download the latest `.bin` binary file from the **[Releases](https://github.com)** page.

### 🛠️ Calibration Backup & Flashing Guide (via UVTools2)
You can back up your calibration data and flash the firmware directly from your desktop browser using **[UVTools2 by F4HWN](https://github.io)**.

#### Prerequisites
1. Use a desktop browser that supports Web Serial API (**Google Chrome**, **Microsoft Edge**, **Opera**, or **Firefox 151+**).
2. Connect your radio to your computer using a **USB-C data cable** (supported natively on V3 hardware) or a standard **Quansheng K-plug programming cable**.

#### Step 1: Backup Calibration Data (Recommended)
1. Turn on the radio normally and connect the USB-C data cable (or K-plug cable) to your computer.
2. Open **[UVTools2 Web Flasher](https://github.io)**.
3. Select the **Dump Calib** tab.
4. Click **Dump Calibration Data** and select your radio's COM port.
5. Once complete, click **Download calibration.dat** and save the file safely.

#### Step 2: Enter Bootloader (DFU) Mode
1. Turn off the radio completely.
2. Press and hold the **PTT** button (on the left side), then turn on the radio while holding PTT until the screen stays blank and the flashlight LED turns on.
3. Release the PTT button and plug the USB-C data cable (or K-plug cable) into the radio.

#### Step 3: Flash `.bin` Firmware
1. Return to **[UVTools2 Web Flasher](https://github.io)** and select the **Flash Firmware** tab.
2. Under **Firmware File (.bin)**, click **Choose file** and select the downloaded `tupelov.firm.v1.0.0.bin` file.
3. Click **Flash firmware**, select your COM port, and wait until the progress reaches **100%**.
4. Unplug the cable and reboot your radio.

*(Note: If you need to restore your factory calibration later, use the **Restore Calib** tab in UVTools2 with your saved `calibration.dat` file).*

---

<a name="bahasa-indonesia"></a>
## 🇮🇩 Bahasa Indonesia

Custom firmware untuk HT **Quansheng UV-K5 Hardware V3 (MCU PY32F071)** yang dikembangkan di Indonesia, berbasis **F4HWN Fusion v7.00**.

### ⚠️ Peringatan Kompatibilitas Hardware
* ✅ **Kompatibel:** Quansheng UV-K5 V3 / UV-K1 (berbasis mikrokontroler **PY32F071**).
* ❌ **TIDAK Kompatibel:** Quansheng UV-K5 / UV-K5(8) / UV-K6 versi lama (berbasis mikrokontroler **DP32G030**).
* Memasang firmware ini pada versi hardware yang salah dapat menyebabkan perangkat tidak menyala (*brick*).

### 📥 Unduh Firmware
Unduh file binary terbaru (`.bin`) melalui halaman **[Releases](https://github.com)**.

### 🛠️ Cara Backup Kalibrasi & Flashing (via UVTools2)
Anda dapat melakukan *backup* kalibrasi sekaligus *flashing* langsung dari browser komputer menggunakan **[UVTools2 by F4HWN](https://github.io)**.

#### Persiapan
1. Gunakan browser desktop yang mendukung Web Serial API (**Google Chrome**, **Microsoft Edge**, **Opera**, atau **Firefox 151+**).
2. Hubungkan HT ke komputer menggunakan **kabel data USB-C** (didukung langsung di versi V3) atau **kabel pemrograman K-plug** standar.

#### Langkah 1: Backup Data Kalibrasi (Wajib)
1. Nyalakan HT secara normal, lalu hubungkan kabel data USB-C (atau kabel K-plug) ke komputer.
2. Buka **[UVTools2 Web Flasher](https://github.io)**.
3. Pilih tab **Dump Calib**.
4. Klik tombol **Dump Calibration Data**, lalu pilih port COM perangkat Anda.
5. Setelah selesai, klik **Download calibration.dat** dan simpan file tersebut di tempat aman.

#### Langkah 2: Masuk ke Mode Bootloader (DFU)
1. Matikan HT sepenuhnya.
2. Tahan tombol **PTT** (di samping kiri HT), lalu nyalakan HT sambil tetap menahan tombol PTT hingga layar tetap kosong dan lampu senter/LED menyala.
3. Lepaskan tombol PTT dan colokkan kabel data USB-C (atau kabel K-plug) ke HT.

#### Langkah 3: Flash Firmware `.bin`
1. Kembali ke halaman **[UVTools2 Web Flasher](https://github.io)**, lalu pilih tab **Flash Firmware**.
2. Pada bagian **Firmware File (.bin)**, klik **Choose file** dan pilih file `tupelov.firm.v1.0.0.bin` yang sudah diunduh.
3. Klik tombol **Flash firmware**, pilih port COM perangkat Anda, lalu tunggu hingga proses mencapai **100%**.
4. Cabut kabel dan hidupkan ulang HT Anda.

*(Catatan: Jika setelah flashing pengaturan frekuensi atau sinyal terasa berubah, gunakan tab **Restore Calib** di UVTools2 untuk mengembalikan file `calibration.dat` yang sudah dicadangkan).*

---

## Credits & Acknowledgments
* **Base Firmware:** [F4HWN Fusion v7.00](https://github.com) by Armel (F4HWN)
* **Web Flasher & Calibration Tool:** [UVTools2 by F4HWN](https://github.io)
