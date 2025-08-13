# Buahahaha Group17 Final Project - Nuvoton NUC140 Game

Proyek ini adalah implementasi **game interaktif berbasis mikrokontroler Nuvoton NUC140** menggunakan bahasa C.  
Game menampilkan berbagai gambar (apel, strawberry, pisang, semangka, dan labu halloween) pada panel LED/LCD, lalu pemain harus menekan tombol yang sesuai dengan arah/pola yang ditampilkan sebelum waktu habis.

---

## 📋 Fitur

- Menampilkan gambar objek dengan bentuk panah/arahan menggunakan fungsi grafis `SetPACA` dan `WriteData`.
- Input menggunakan keypad yang di-scan dengan `Scankey()`.
- Tampilan skor dan jumlah nyawa pada **seven segment display**.
- Efek suara buzzer untuk jawaban benar dan salah.
- Mekanisme nyawa (life system) dan pengurangan waktu secara dinamis.
- Tampilan pesan dan petunjuk pada **LCD display**.

---

## 🎮 Mekanisme Permainan

1. Pemain akan melihat tampilan pembuka yang memperkenalkan tiap objek beserta nomor keypad yang sesuai.
2. Game akan secara acak menampilkan salah satu objek.
3. Pemain harus menekan tombol keypad yang sesuai sebelum waktu habis.
4. Jawaban benar menambah skor, jawaban salah mengurangi nyawa.
5. Permainan berakhir saat nyawa = 0.

---

## ⚙️ Hardware yang Digunakan

- **Board Nuvoton NUC140** (NU-LB-NUC140)
- LCD panel bawaan board
- Seven segment display bawaan board
- Keypad bawaan board
- Buzzer bawaan board

---

## 🚀 Cara Menjalankan

1. Siapkan board **Nuvoton NUC140** dan hubungkan ke PC.
2. Kompilasi kode menggunakan **Keil uVision** atau toolchain Nuvoton.
3. Upload program ke board.
4. Jalankan board, ikuti instruksi di LCD, dan mainkan game.

---

## 📂 Struktur Kode

- **main.c** → Mengatur seluruh logika game, input keypad, output ke display, dan kontrol buzzer.
- **pembuka()** → Menampilkan pengenalan objek.
- **random()** → Menentukan objek acak dan mengatur level kecepatan.
- **score() & nyawa()** → Menampilkan skor dan nyawa.
- **kanan/kiri/atas/bawah/tengah()** → Menampilkan gambar spesifik dan memeriksa input.
- **buzzer_benar() & buzzer_salah()** → Efek suara untuk hasil input.

---

## 📚 Referensi
- [Nuvoton NUC140 Series Datasheet](https://www.nuvoton.com/products/microcontrollers/arm-cortex-m0-mcus/nuc140/)
- Dokumentasi library `DrvSYS`, `DrvGPIO`, `LCD_Driver`, `ScanKey`, `Seven_Segment`.

---

## 📝 Lisensi
Proyek ini dibuat untuk keperluan akademik dan pembelajaran.
