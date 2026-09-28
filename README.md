Repository untuk pengumpulan tugas Mini Project sebagai tugas asistensi praktikum 1 Dasar Pemrograman Bahasa C

**Deskripsi Program**
Program Foodie Special ID Generator merupakan program yang membuat ID unik. Program menerima beberapa input dari pengguna, antara lain nama, jenis kelamin, tanggal lahir, bulan lahir, tahun lahir, dan makanan favorit. Data tersebut kemudian diolah menggunakan beberapa operasi dan digabungkan dengan fungsi sprintf() sehingga menghasilkan sebuah ID yang terdiri dari kombinasi huruf dan angka. Kemudian, ID ditampilkan bersama dengan nama dan makanan favorit pengguna.

**Cara Kerja Program**
1. Program dimulai dengan menjalankan fungsi main().
2. Program mendeklarasikan variabel yang digunakan untuk menyimpan nama, jenis kelamin, tanggal lahir, bulan lahir, tahun lahir, makanan favorit, hasil operasi, dan ID.
3. Program meminta pengguna untuk memasukkan nama, lalu disimpan sebagai tipe data string dalam variabel "name".
4. Program meminta pengguna untuk memasukkan jenis kelamin berupa karakter "P" atau "L", lalu disimpan sebagai tipe data character dalam variabel "pl".
5. Program meminta pengguna untuk memasukkan tanggal lahir, lalu disimpan sebagai tipe data integer dalam variabel "tgl".
6. Program meminta pengguna untuk memasukkan bulan lahir, lalu disimpan sebagai tipe data integer dalam variabel "bln".
7. Program meminta pengguna untuk memasukkan tahun lahir, lalu disimpan sebagai tipe data integer dalam variabel "tahun".
8. Program meminta pengguna untuk memasukkan makanan favorit, lalu disimpan sebagai tipe data string dalam variabel "food".
9. Program melakukan operasi aritmatika dengan menambahkan variabel "tgl" dengan 10, lalu disimpan sebagai tipe data integer dalam variabel "operasi1".
10. Program melakukan operasi aritmatika dengan menghitung modulo variabel "bln" oleh 2, lalu disimpan sebagai tipe data integer dalam variabel "operasi2".
11. Program mengambil beberapa karakter dari data pengguna, yaitu 3 karakter pertama variabel "name", 1 karakter variabel "pl", dan 1 karakter pertama variabel "food".
12. Program menggabungkan semua variabel dan hasil aritmatika yang disimpan (dari langkah 7–9) dengan fungsi sprintf(), lalu disimpan sebagai tipe data string dalam variabel "id".
13. Program menampilkan ID, nama, dan makanan favorit sebagai output akhir.
14. Program selesai.

**Kombinasi ID**
ID merupakan kombinasi dengan urutan berikut:
1. Karakter pertama variabel "name"
2. Karakter kedua variabel "name"
3. Karakter ketiga variabel "name"
4. Karakter pertama variabel "pl"
5. Variabel "tgl"
6. Variabel "bln"
7. Variabel "tahun"
8. Variabel "operasi1"
9. Variabel "operasi2"
10. Karakter pertama variabel "food"

<img width="1204" height="681" alt="Tampilan Output" src="https://github.com/user-attachments/assets/b906d8d7-8bab-4059-9bfc-47a2abbbe590" /># Asistensi-DasProg-P1-Alya-Kusuma-N-5022261103
