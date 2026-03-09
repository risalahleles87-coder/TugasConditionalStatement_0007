#include <iostream>
using namespace std;

// Prosedur input data
void InputData(float &berat, float &tinggi)
{
    cout << "===== PROGRAM MENGHITUNG BMI =====" << endl;
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m) : ";
    cin >> tinggi;
}

// Fungsi menghitung BMI
float HitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

// Fungsi menentukan kondisi berat badan
string KondisiBMI(float bmi)
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
    cout << "===== HASIL PERHITUNGAN BMI =====" << endl;
    cout << "Nilai BMI : " << bmi << endl;
    cout << "Kondisi   : " << KondisiBMI(bmi) << endl;

    return 0;
}