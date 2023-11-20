#include <iostream>
using namespace std;

int main() {
    // Input jumlah motor, jumlah mobil, jam masuk, dan jam keluar
    int jumlahMotor, jumlahMobil;
    float jamMasuk, jamKeluar;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;

    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;

    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;

    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Hitung total pendapatan
    float tarifMotor = 2000;  // Tarif parkir motor per jam
    float tarifMobil = 5000;  // Tarif parkir mobil per jam
    float totalPendapatan;

    // Menghitung durasi parkir
    float durasiParkir = (jamKeluar - jamMasuk + 24) /1;

    // Menghitung total pendapatan
    totalPendapatan = (jumlahMotor * tarifMotor + jumlahMobil * tarifMobil) * durasiParkir;

    // Menampilkan total pendapatan
    cout << "Total pendapatan penjaga portal parkir UNISBA: Rp " << totalPendapatan << endl;

    return 0;
}