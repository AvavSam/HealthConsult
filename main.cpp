#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct RekamMedis
{
    string nama;
    string penyakit;
    string tanggal;
};
struct Reservasi
{
    string dokter;
    string waktukonsul;
    string metodebayar;
    string hargakonsul;
};

const int MAX_RESERVATIONS = 10;

string daftardokter[] = {"dr. Anisa putri \t\t(Dokter Umum)", "dr. Novi dwiyanti \t\t(Dokter Umum)", "dr. Kelvin yuwanda \t\t(Dokter Umum)", "dr. Raisya, Sp.A \t\t(Dokter Anak)", "dr. Dean, Sp.KG \t\t(Dokter Konservasi Gigi)", "dr. Vector, Sp.PM \t\t(Dokter Penyakit Mulut)"};
string daftarwaktukonsul[] = {"Senin \t09:00", "Senin \t17:25", "Selasa \t08:00", "Kamis \t09:00", "Kamis \t12:50", "Jumat \t15:00"};

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

int login()
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
        if ((strcmp(idlogin, uid) == 0 && strcmp(pwlogin, pass) == 0))
        {
            system("CLS");
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
        system("CLS");
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

int utama()
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
        return 0;
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
    return 0;
}

int tentang_kami()
{
    char pilihan;
    cout << "Tentang Kami" << endl;
    garis();
    cout << "Kelompok 10: Tema Kesehatan\nAvav Abdillah Sam\nMuhammad Alfaraby Moidady\nFransisca Aprilia Tarabu\nNatasya Labaso\nAmirul Maulana" << endl;
    garis();
    cout << "HealthConsult++ merupakan program kesehatan sederhana menggunakan Bahasa pemrograman C++. Program ini dibuat agar mempermudah pasien untuk mendapatkan dan juga mencari saran medis dengan cepat dan juga mudah. Terdapat banyak fitur dalam program ini, mulai dari pendaftaran akun, pencarian dan informasi tentang obat-obatan, pencarian dokter spesialis, dan juga terdapat fitur pemesanan untuk konsultasi kepada dokter, dan tagihan pengguna juga langsung dapat terlihat." << endl;
    garis();
    cout << "Fitur Fitur Aplikasi:" << endl;
    cout << "Menu Cek Obat" << endl;
    cout << "Berfungsi untuk menampilkan daftar obat. Setelah memilih obat, akan diarahkan pada deskripsi obat yang berisi jumlah obat, penjelasan obat, dosis, dan harga." << endl;
    cout << "Menu Konsultasi Dokter" << endl;
    cout << "Berfungsi untuk melihat dan melakukan reservasi dokter. Anda dapat memilih dokter, waktu konsultasi, dan jenis pembayaran yang anda inginkan." << endl;
    cout << "Menu Riwayat Pemeriksaan" << endl;
    cout << "Berfungsi untuk menambah, mencari, merubah, menghapus, dan juga menampilkan riwayat yang ada." << endl;
    garis();
    cout << "Daftar Menu :" << endl;
    cout << "[1] Kembali" << endl;
    cout << "Pilih Menu yang anda ingin tuju : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
        system("CLS");
        utama();
        break;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        tentang_kami();
    }
    return 0;
}

int obat()
{
    char pilihan;
    int harga1 = 0, harga2 = 0, harga3 = 0, harga4 = 0, harga5 = 0;
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
        cout << "Amoxillin adalah salah satu merek obat yang digunakan untuk mengatasi infeksi bakteri. Sperti infeksi saluran kemih atau infeksi saluran pernapasan." << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp45000" << endl;
        harga2 = 45000;
        break;
    case '3':
        cout << "Cataflam 2 Blister" << endl;
        cout << "Mengatasi nyeri secara umum atau yang disebabkan oleh radang sendi, missal sakit gigi atau nyeri otot." << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp10000" << endl;
        harga3 = 10000;
        break;
    case '4':
        cout << "Aspirin 3 Blister" << endl;
        cout << "Aspirin adalah obat untuk meredakan nyeri, demam, dan peradangan." << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp25000" << endl;
        harga4 = 25000;
        break;
    case '5':
        cout << "Antasida 10 Strip" << endl;
        cout << "Antasida adalah obat untuk meredakan gejala akibat asam lambung berlebih, seperti nyeri ulu hati, kembung, mual, atau rasa panas di dada." << endl;
        cout << "Dosis \t= 3x1" << endl;
        cout << "Harga \t= Rp14000" << endl;
        harga5 = 14000;
        break;
    case '6':
        system("CLS");
        utama();
        return 0;
    default:
        cout << "Maaf, Input tidak Valid!" << endl;
        garis();
        obat();
    }

    char beli;
    cout << "Apakah Anda ingin membeli obat ini? (y/n): ";
    cin >> beli;
    if ((beli == 'Y') || (beli == 'y'))
    {
        int jumlah;
        cout << "Jumlah obat yang ingin dibeli: ";
        cin >> jumlah;
        int totalHarga = 0;

        switch (pilihan)
        {
        case '1':
            totalHarga = harga1 * jumlah;
            break;
        case '2':
            totalHarga = harga2 * jumlah;
            break;
        case '3':
            totalHarga = harga3 * jumlah;
            break;
        case '4':
            totalHarga = harga4 * jumlah;
            break;
        case '5':
            totalHarga = harga5 * jumlah;
            break;
        default:
            break;
        }
        cout << "Total harga: Rp" << totalHarga << endl;

        char konfirmasi;
        cout << "Apakah Anda ingin konfirmasi pembelian? (y/n): ";
        cin >> konfirmasi;

        if (konfirmasi == 'y' || konfirmasi == 'Y')
        {
            cout << "Terima kasih telah melakukan pembelian. Pesanan Anda akan segera diproses." << endl;
        }
        else
        {
            cout << "Pesanan dibatalkan." << endl;
        }
        garis();
        obat();
    }
    else
    {
        garis();
        obat();
    }
    return 0;
}

int konsultasi()
{
    char pilihan;
    Reservasi reservasi[MAX_RESERVATIONS];
    int banyakreservasi = 0;
    while (true)
    {
        cout << "Konsultasi Dokter" << endl;
        garis();
        cout << "Daftar Menu :" << endl;
        cout << "[1] Reservasi Konsultasi Dokter\n";
        cout << "[2] Riwayat Reservasi\n";
        cout << "[3] Kembali" << endl;
        cout << "Pilih Menu yang anda ingin tuju : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case '1':
        {
            garis();
            cout << "Daftar Dokter" << endl;
            for (int i = 0; i < sizeof(daftardokter) / sizeof(daftardokter[0]); ++i)
            {
                cout << "[" << i + 1 << "] " << daftardokter[i] << "\n";
            }

            int pilihdokter;
            cout << "Pilih Dokter : ";
            cin >> pilihdokter;
            if (pilihdokter < 1 || pilihdokter > sizeof(daftardokter) / sizeof(daftardokter[0]))
            {
                cout << "Pilihan dokter tidak valid." << endl;
                continue;
            }

            garis();
            cout << "Waktu yang tersedia:" << endl;
            for (int i = 0; i < sizeof(daftarwaktukonsul) / sizeof(daftarwaktukonsul[0]); i++)
            {
                cout << "[" << i + 1 << "] " << daftarwaktukonsul[i] << "\n";
            }

            int pilihwaktu;
            cout << "Pilih Waktu Konsultasi: ";
            cin >> pilihwaktu;
            if (pilihwaktu < 1 || pilihwaktu > sizeof(daftarwaktukonsul) / sizeof(daftarwaktukonsul[0]))
            {
                cout << "Pilihan waktu konsultasi tidak valid." << endl;
                continue;
            }

            int pilihbayar;
            garis();
            cout << "Pilih jenis pembayaran:\n";
            cout << "1. QRIS\n";
            cout << "2. Transfer Bank\n";
            cout << "3. Tunai\n";
            cout << "Pilihan (1-3): ";
            cin >> pilihbayar;

            string carabayar;
            switch (pilihbayar)
            {
            case 1:
                carabayar = "QRIS";
                break;
            case 2:
                carabayar = "Transfer Bank";
                break;
            case 3:
                carabayar = "Tunai";
                break;
            default:
                cout << "Pilihan cara pembayaran tidak valid" << endl;
                continue;
            }

            string hargakonsul;
            if (pilihdokter == 1)
            {
                hargakonsul = "Rp. 50.000";
            }
            else if (pilihdokter == 2)
            {
                hargakonsul = "Rp. 50.000";
            }
            else if (pilihdokter == 3)
            {
                hargakonsul = "Rp. 50.000";
            }
            else if (pilihdokter == 4)
            {
                hargakonsul = "Rp. 200.000";
            }
            else if (pilihdokter == 5)
            {
                hargakonsul = "Rp. 200.000";
            }
            else if (pilihdokter == 6)
            {
                hargakonsul = "Rp. 200.000";
            }

            garis();
            cout << "Ringkasan Reservasi" << endl;
            cout << "Dokter \t\t\t: " << daftardokter[pilihdokter - 1] << endl;
            cout << "Waktu Konsultasi \t: " << daftarwaktukonsul[pilihwaktu - 1] << endl;
            cout << "Cara Pembayaran \t: " << carabayar << endl;
            cout << "Harga Konsultasi \t: " << hargakonsul << endl;

            reservasi[banyakreservasi].dokter = daftardokter[pilihdokter - 1];
            reservasi[banyakreservasi].waktukonsul = daftarwaktukonsul[pilihwaktu - 1];
            reservasi[banyakreservasi].metodebayar = carabayar;
            reservasi[banyakreservasi].hargakonsul = hargakonsul;
            banyakreservasi++;
            garis();
        }
        break;
        case '2':
            garis();
            cout << "Riwayat Reservasi" << endl;
            garis();
            if (banyakreservasi == 0)
            {
                cout << "Anda belum pernah membuat reservasi." << endl;
                garis();
            }
            else
            {
                for (int i = 0; i < banyakreservasi; ++i)
                {
                    cout << "Dokter \t\t\t: " << reservasi[i].dokter << endl;
                    cout << "Waktu Konsultasi \t: " << reservasi[i].waktukonsul << endl;
                    cout << "Metode Bayar \t\t: " << reservasi[i].metodebayar << endl;
                    cout << "Harga Konsultasi \t: " << reservasi[i].hargakonsul << endl;
                    garis();
                }
            }
            break;
        case '3':
            system("CLS");
            utama();
            return 0;
        default:
            cout << "Maaf, Input tidak Valid!" << endl;
            garis();
            continue;
        }
    }
    return 0;
}

int riwayat_periksa()
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
            system("CLS");
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
        garis();
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
        garis();
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
        cout << "[1] Ubah Nama Pasien\n";
        cout << "[2] Ubah Penyakit\n";
        cout << "[3] Ubah Tanggal Pemeriksaan\n";
        cout << "Pilih Opsi: ";
        int pilihan;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Nama Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.nama);
            garis();
            break;
        case 2:
            cout << "Penyakit Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.penyakit);
            garis();
            break;
        case 3:
            cout << "Tanggal Pemeriksaan Baru: ";
            cin.ignore();
            getline(cin, rekamMedis.tanggal);
            garis();
            break;
        default:
            cout << "Pilihan tidak valid. Riwayat tetap tidak diubah.\n";
            garis();
        }
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
        garis();
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
        garis();
    }
    else
    {
        cout << "Pasien dengan nama '" << namaCari << "' tidak ditemukan.\n";
        garis();
    }
}

void menuTampilkanRiwayat(RekamMedis rekamMedis)
{
    garis();
    if (rekamMedis.nama == "")
    {
        cout << "Riwayat kosong.\n";
        garis();
    }
    else
    {
        cout << "Nama Pasien \t\t: " << rekamMedis.nama << endl;
        cout << "Penyakit \t\t: " << rekamMedis.penyakit << endl;
        cout << "Tanggal Pemeriksaan \t: " << rekamMedis.tanggal << endl;
        garis();
    }
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
