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

   