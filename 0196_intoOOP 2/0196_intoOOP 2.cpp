#include <iostream>
using namespace std;

class BangunDatar {
private:
    // akses modifier
    float panjang, lebar;

public:
    // Constructor
    BangunDatar() {}

    // Setter
    void setPanjang(float panjang) {
        this->panjang = panjang;
    }

    void setLebar(float lebar) {
        this->lebar = lebar;
    }

    // Getter
    float getPanjang() const {
        return panjang;
    }

    float getLebar() const {
        return lebar;
    }

    // Hitung luas
    float hitungLuas() const {
        return panjang * lebar;
    }

    // Tampilkan informasi
    void display() const {
        cout << "Panjang: " << panjang << endl;
        cout << "Lebar: " << lebar << endl;
        cout << "Luas: " << hitungLuas() << endl;
    }
};

int main() {
    BangunDatar bangunDatar;

    // Set nilai panjang dan lebar
    bangunDatar.setPanjang(10);
    bangunDatar.setLebar(5);

    // Tampilkan informasi
    bangunDatar.display();

    return 0;
}