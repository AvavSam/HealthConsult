#include <iostream>

using namespace std;

void garis();
int utama();
int tentang_kami();
int obat();
int konsultasi();
int riwayat_periksa();
int logout();

int login()
{
    int uid, pass;
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
        if (uid == 1234 && pass == 1234)
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
        garis();
        utama();
    }
    else
    {
        cout << "Input tidak valid. Silahkan input lagi dengan benar." << endl;
        login();
    }
}

int utama()
{
    char pilihan;
    garis();
    cout << "Selamat Datang ADMIN di HealthConsult++ by Kelompok X" << endl;
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
}

int tentang_kami() //Done
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
}

int obat()
{
    char pilihan;
    int harga1, harga2, harga3, harga4, harga5;
    cout << "Daftar Obat" << endl;
    garis();
    cout << "[1] Paracetamol \t\tRp8000" << endl;
    cout << "[2] Amoxicillin \t\tRp7000" << endl;
    cout << "[3] vitamin C \t\tRp5000" << endl;
    cout << "[4] Antibiotik \t\tRp30000" << endl;
    cout << "[5] Cefila \t\tRp42000" << endl;
    cout << "[6] Kembali" << endl;
    garis();
    cout << "Daftar Menu :" << endl;
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
        cout << "Anda membeli obat paracetamol" << endl;
        harga1 = 8000;
        break;
    case '2':
        cout << "Anda membeli obat Amoxicillin" << endl;
        harga2 = 7000;
        break;
    case '3':
        cout << "Anda membeli obat vitamin c" << endl;
        harga3 = 5000;
        break;
    case '4':
        cout << "Anda membeli obat Antibiotik" << endl;
        harga4 = 30000;
        break;
    case '5':
        cout << "Anda membeli obat cafila" << endl;
        harga5 = 42000;
        break;
    case '6':
        utama();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        obat();
    }
}

int konsultasi()
{
    char pilihan;
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
}

int riwayat_periksa()
{
    char pilihan;
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
        riwayat_periksa();
    }
}

int logout() // Done
{
    cout << "Anda telah logout, Terimakasih telah menggunakan layanan kami" << endl;
    return 0;
}

void garis() // Done
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
