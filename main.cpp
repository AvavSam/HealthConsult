#include <iostream>
#include <string.h>

using namespace std;

struct RekamMedis
{
    string nama;
    string penyakit;
    string tanggal;
};

void garis();
int utama();
int tentang_kami();
int obat();
int konsultasi();
int riwayat_periksa();
void menuTambahRiwayat(RekamMedis &rekamMedis);
void menuCariRiwayat(RekamMedis rekamMedis);
void menuUbahRiwayat(RekamMedis &rekamMedis);
void menuHapusRiwayat(RekamMedis &rekamMedis);
void menuTampilkanRiwayat(RekamMedis rekamMedis);
int logout();

int login() // Tampilan login, DONE
{
    char idlogin[30] = "ilovedaspro";
    char pwlogin[30] = "keren";
    char uid[30];
    char pass[30];
    char konfirmasi;
    cout << "Apakah anda telah memiliki akun? (y/n) = ";
    cin >> konfirmasi;

    if (konfirmasi == 'y' || konfirmasi == 'Y')
    {
        cout << "Masukkan Username \t: ";
        cin >> uid;
        cout << "Masukkan Password  \t: ";
        cin >> pass;
        garis();
        if ((strcmp(idlogin, uid) == 0 && strcmp(pwlogin, pass) == 0))
        {
            utama();
        }
        else
        {
            cout << "Maaf username atau password yang Anda masukan salah." << endl;
            garis();
            login();
        }
    }
    else if (konfirmasi == 'n' || konfirmasi == 'N')
    {
        garis();
        cout << "Buat Akun Baru" << endl;
        cout << "Masukkan Username \t: ";
        cin >> uid;
        cout << "Masukkan Password  \t: ";
        cin >> pass;
        garis();
        cout << "Username dan Password yang Anda daftarkan adalah : " << endl;
        cout << "User ID = " << uid << endl;
        cout << "Password = " << pass << endl;
        utama();
    }
    else
    {
        cout << "Input tidak valid. Silahkan input lagi dengan benar." << endl;
        login();
    }
    return 0;
}

int utama() // Menu utama, DONE
{
    char pilihan;
    garis();
    cout << "Selamat Datang di HealthConsult++ by Kelompok X" << endl;
    garis();
    cout << "Daftar Menu :" << endl;
    cout << "[1] Tentang Kami" << endl;
    cout << "[2] Cek Obat" << endl;
    cout << "[3] Konsultasi Dokter" << endl;
    cout << "[4] Lihat Riwayat Pemeriksaan" << endl;
    cout << "[5] Logout" << endl;
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    garis();
    switch (pilihan)
    {
    case '1':
        tentang_kami();
        break;
    case '2':
        obat();
        break;
    case '3':
        konsultasi();
        break;
    case '4':
        riwayat_periksa();
        break;
    case '5':
        logout();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        utama();
    }
    return 0;
}

int tentang_kami() // Menu tentang kami, tambah penjelasan fitur fitur
{
    char pilihan;
    cout << "Tentang Kami" << endl;
    cout << "Kelompok 10: Tema Kesehatan\nAvav Abdillah Sam\nMuhammad Alfaraby Moidady\nFransisca Aprilia Tarabu\nNatasya Labaso\nAmirul Maulana" << endl;
    garis();
    cout << "HealthConsult++ merupakan program kesehatan sederhana menggunakan Bahasa pemrograman C++. Program ini dibuat agar mempermudah pasien untuk mendapatkan dan juga mencari saran medis dengan cepat dan juga mudah. Terdapat banyak fitur dalam program ini, mulai dari pendaftaran akun, pencarian dan informasi tentang obat-obatan, pencarian dokter spesialis, dan juga terdapat fitur pemesanan untuk konsultasi kepada dokter, dan tagihan pengguna juga langsung dapat terlihat." << endl;
    garis();
    cout << "Daftar Menu :" << endl;
    cout << "[1] Kembali" << endl;
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
        utama();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        tentang_kami();
    }
    return 0;
}

int obat() // Menu pemilihan obat, kurang cara beli obat yang dipilih
{
    char pilihan;
    int harga1, harga2, harga3, harga4, harga5;
    cout << "Daftar Obat" << endl;
    garis();
    cout << "[1] Paracetamol \tRp20000" << endl;
    cout << "[2] Amoxillin \t\tRp45000" << endl;
    cout << "[3] Cataflam \t\tRp10000" << endl;
    cout << "[4] Aspirin \t\tRp25000" << endl;
    cout << "[5] Antasida \t\tRp14000" << endl;
    cout << "[6] Kembali" << endl;
    garis();
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    garis();
    switch (pilihan)
    {
    case '1':
        cout << "Paracetamol 10 strip" << endl;
        cout << "Paracetamol adalah obat untuk meredakan demam dan nyeri ringan hingga sedang, misalnya sakit kepala, nyeri haid, atau pegal-pegal" << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp20000" << endl;
        harga1 = 20000;
        break;
    case '2':
        cout << "Amoxillin 10 strip" << endl;
        cout << "" << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp45000" << endl;
        harga2 = 45000;
        break;
    case '3':
        cout << "Cataflam 2 Blister" << endl;
        cout << "" << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp10000" << endl;
        harga3 = 10000;
        break;
    case '4':
        cout << "Aspirin 3 Blister" << endl;
        cout << "" << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp25000" << endl;
        harga4 = 25000;
        break;
    case '5':
        cout << "Antasida 10 Strip" << endl;
        cout << "" << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp14000" << endl;
        harga5 = 14000;
        break;
    case '6':
        utama();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        obat();
    }
    return 0;
}

int konsultasi() // Menu konsultasi dokter, belum sama sekali
{
    char pilihan;
    cout << "Konsultasi Dokter" << endl;
    garis();
    cout << "Daftar Menu :" << endl;
    cout << "[1] Kembali" << endl;
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
        utama();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        konsultasi();
    }
    return 0;
}

int riwayat_periksa() // Menu riwayat pemeriksaan, fix error do..while
{
    char pilihanPeriksa;
    RekamMedis rekamMedis;
    while (true)
    {
        cout << "Riwayat Pemeriksaan" << endl;
        garis();
        cout << "Daftar Menu :" << endl;
        cout << "[1] Tambah Riwayat" << endl;
        cout << "[2] Cari Riwayat" << endl;
        cout << "[3] Ubah Riwayat" << endl;
        cout << "[4] Hapus Riwayat" << endl;
        cout << "[5] Tampilkan Riwayat" << endl;
        cout << "[6] Kembali" << endl;
        cout << "Pilih Menu yang anda ingin tuju : ";
        cin >> pilihanPeriksa;

        switch (pilihanPeriksa)
        {
        case '1':
            menuTambahRiwayat(rekamMedis);
            break;
        case '2':
            menuCariRiwayat(rekamMedis);
            break;
        case '3':
            menuUbahRiwayat(rekamMedis);
            break;
        case '4':
            menuHapusRiwayat(rekamMedis);
            break;
        case '5':
            menuTampilkanRiwayat(rekamMedis);
            break;
        case '6':
            utama();
            return 0;
        default:
            cout << "Maaf, Input tidak Valid!" << endl;
            garis();
        }
    }
    return 0;
}

void menuTambahRiwayat(RekamMedis &rekamMedis)
{
    garis();
    cout << "Nama Pasien \t\t: ";
    cin.ignore();
    getline(cin, rekamMedis.nama);
    cout << "Penyakit \t\t: ";
    getline(cin, rekamMedis.penyakit);
    cout << "Tanggal Pemeriksaan\t: ";
    getline(cin, rekamMedis.tanggal);
    cout << "Riwayat berhasil ditambahkan.\n";
    garis();
}

void menuCariRiwayat(RekamMedis rekamMedis)
{
    string namaCari;
    garis();
    cout << "Masukkan nama pasien yang dicari: ";
    cin.ignore();
    getline(cin, namaCari);

    if (rekamMedis.nama == namaCari)
    {
        cout << "Nama Pasien: " << rekamMedis.nama << endl;
        cout << "Penyakit: " << rekamMedis.penyakit << endl;
        cout << "Tanggal Pemeriksaan: " << rekamMedis.tanggal << endl;
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
    }
}

void menuUbahRiwayat(RekamMedis &rekamMedis)
{
    string namaCari;
    garis();
    cout << "Masukkan nama pasien yang ingin diubah: ";
    cin.ignore();
    getline(cin, namaCari);

    if (rekamMedis.nama == namaCari)
    {
        cout << "1. Ubah Nama Pasien\n";
        cout << "2. Ubah Penyakit\n";
        cout << "3. Ubah Tanggal Pemeriksaan\n";
        cout << "Pilih Opsi: ";
        int pilihan;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Nama Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.nama);
            break;
        case 2:
            cout << "Penyakit Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.penyakit);
            break;
        case 3:
            cout << "Tanggal Pemeriksaan Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.tanggal);
            break;
        default:
            cout << "Pilihan tidak valid. Riwayat tetap tidak diubah.\n";
        }
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
    }
}

void menuHapusRiwayat(RekamMedis &rekamMedis)
{
    string namaCari;
    garis();
    cout << "Masukkan nama pasien yang ingin dihapus: ";
    cin.ignore();
    getline(cin, namaCari);

    if (rekamMedis.nama == namaCari)
    {
        rekamMedis.nama = "";
        rekamMedis.penyakit = "";
        rekamMedis.tanggal = "";
        cout << "Riwayat berhasil dihapus.\n";
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
    }
}

void menuTampilkanRiwayat(RekamMedis rekamMedis)
{
    garis();
    if (rekamMedis.nama == "")
    {
        cout << "Riwayat kosong.\n";
    }
    else
    {
        cout << "Nama Pasien: " << rekamMedis.nama << endl;
        cout << "Penyakit: " << rekamMedis.penyakit << endl;
        cout << "Tanggal Pemeriksaan: " << rekamMedis.tanggal << endl;
    }
}

int logout() // Logout, DONE
{
    cout << "Anda telah logout, Terimakasih telah menggunakan layanan kami" << endl;
    return 0;
}

void garis() // Biar ada garis
{
    cout << "---------------------------------------------------" << endl;
}

int main()
{
    garis();
    cout << "-------- Selamat datang di HealthConsult++ --------" << endl;
    garis();
    login();
    return 0;
}
