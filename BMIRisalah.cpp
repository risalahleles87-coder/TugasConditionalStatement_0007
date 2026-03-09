#include <iostream>
using namespace std;

// Prosedur input data
void InputData(float &berat, float &tinggi)
{
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi menghitung BMI
float HitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

