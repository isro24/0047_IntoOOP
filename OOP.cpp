#include <iostream>
using namespace std;

class bangunDatar{
     private:
        float panjang, lebar;
     public:
        float luas;

        void input(){
            cout << "Masukkan Panjang = ";
            cin >> panjang;
            cout << "Masukkan Lebar = ";
            cin >> lebar;
        }

        float hitungluas(){
            return panjang * lebar;
        }

        void display(){
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungluas() << endl;
        }
};

int main(){
    bangunDatar pp;
    pp.input();
    pp.display();
}
