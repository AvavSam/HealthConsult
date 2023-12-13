#include <iostream>

using namespace std;

void garis();
int utama();
int obat();
int tentang_kami();
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
        return 0;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        utama();
    }
}

int tentang_kami()
{
    char pilihan;
    cout << "tentang kami" << endl;
    cout << "lorem ipsum" << endl;
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
    return 0;
}
int konsultasi()
{
    return 0;
}
int riwayat_periksa()
{
    return 0;
}

int logout()
{
    cout << "Anda telah logout, Terimakasih telah menggunakan layanan kami" << endl;
    return 0;
}

void garis()
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
