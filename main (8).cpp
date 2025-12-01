#include<iostream>
#include<string>
using namespace std;

class Drone {
private:
int yuk;
int hiz;
int yukseklik;

public:
Drone(int y, int h, int yu) : yuk(y), hiz(h), yukseklik(yu) {}

string ucusGuvenligiKontrol() {
    int pil_seviyesi =  (hiz / 10) * 5;
    cout << "[Pil Seviyesi Hesaplandı]: %" << pil_seviyesi << endl;

    if (yuk >500) return "Ağır yük, uçamaz!";
    if (pil_seviyesi <= 20) return "Pil seviyesi düşük, uçuş güvensiz!";
    if (yukseklik > 100 || hiz > 80) return "Radar dışı, uçuş güvensiz!";
    return "Uçuş güvenli!";
}

};

int main() {
const int drone_sayisi = 7;

Drone dronelar[drone_sayisi] = {
    Drone(10, 50, 60),
    Drone(20, 70, 90),
    Drone(35, 60, 50),
    Drone(15, 85, 40),
    Drone(5, 40, 110),
     Drone(50, 40, 50),
      Drone(45, 90, 800)
};

cout << "TÜM DRONE'LARIN UÇUŞ GÜVENLİK DURUMU" << endl;
for (int i = 0; i < drone_sayisi; ++i) {
    cout << "DRONE " << i + 1 << " UÇUŞ DURUMU: " 
         << dronelar[i].ucusGuvenligiKontrol() << endl;
}

return 0;

}