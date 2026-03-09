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

// Fungsi menentukan status BMI
string StatusBMI(float bmi)
{
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    float berat, tinggi, bmi;

    InputData(berat, tinggi);

    bmi = HitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << StatusBMI(bmi) << endl;

    return 0;
}