/*RAFII RAHMADIANSYAH
  23104410052
  TI-B
  UTS PEMROGRAMAN DASAR*/


#include <iostream>
using namespace std;

int calculate_parking_fee(int motor, int mobil, int jam_masuk, int jam_keluar) {
    int jam_parkir = (jam_keluar - jam_masuk + 24) % 24;

    int motor_fee = motor * jam_parkir * 2000;
    int mobil_fee = mobil * jam_parkir * 5000;

    return motor_fee + mobil_fee;
}

int main() {
    int motor, mobil, jam_masuk, jam_keluar;

    cout << "Masukkan jumlah motor : ";
    cin >> motor;

    cout << "Masukkan jumlah mobil : ";
    cin >> mobil;

    cout << "Input jam masuk (format 24 jam) : ";
    cin >> jam_masuk;

    cout << "Input jam keluar (format 24 jam) : ";
    cin >> jam_keluar;

    int total_biaya_parkir = calculate_parking_fee(motor, mobil, jam_masuk, jam_keluar);

    cout << "Total biaya parkir : Rp " << total_biaya_parkir << " (" << (jam_keluar - jam_masuk + 24) % 24 << " jam)" << endl;

    return 0;
}