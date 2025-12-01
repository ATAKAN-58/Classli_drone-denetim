#include <iostream>
#include <string>
using namespace std;

string ucusGuvenligiKontrol(string droneIsmi, int yuk, int hiz, int yukseklik) {
    int consumed = (hiz / 10) * 5;
    int pil = 100 - consumed;
    if (pil < 0) pil = 0;

    cout << droneIsmi << endl;
    cout << "Pil Seviyesi: " << pil << endl;
    cout << "Yük: " << yuk << endl;
    cout << "Hız: " << hiz << endl;
    cout << "Yükseklik: " << yukseklik << endl;
    if (hiz > 10) {
        cout << "Uyarı: Hız sınırı aşıldı!" << endl;
    }

    if (yuk > 500) {
        return "Ağır yük";
    }
    if (pil < 30) {
        return "Pil seviyesi düşük";
    }
    if (yukseklik < 100) {
        return "Radar dışı";
    }
    if (hiz > 80) {
        return "Hız sınırı aşılmış";
    }
    return "Uçuş güvenli!";
}

int main() {
    for (int i = 1; i <= 7; ++i) {
        string isim;
        int yuk;
        int hiz;
        int yukseklik;

        if (i == 1) {
            isim = "drone1"; yuk = 350; hiz = 40; yukseklik = 50;
        } else if (i == 2) {
            isim = "drone2"; yuk = 600; hiz = 30; yukseklik = 70;
        } else if (i == 3) {
            isim = "drone3"; yuk = 200; hiz = 80; yukseklik = 150;
        } else if (i == 4) {
            isim = "drone4"; yuk = 450; hiz = 20; yukseklik = 10;
        } else if (i == 5) {
            isim = "drone5"; yuk = 500; hiz = 50; yukseklik = 210;
        } else if (i == 6) {
            isim = "drone6"; yuk = 100; hiz = 60; yukseklik = 180;
        } else if (i == 7) {
            isim = "drone7"; yuk = 400; hiz = 155; yukseklik = 90;
        }

        cout << ucusGuvenligiKontrol(isim, yuk, hiz, yukseklik) << endl << endl;
    }

    return 0;
}
