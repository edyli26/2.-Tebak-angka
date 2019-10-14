#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int key,guess,maks;//variabel
    int nyawa = 3;
    srand(time(NULL));

    do{
        cout << "Masukkan nilai (0-100) : "; cin >> maks;//untuk memasukan angka
        if(maks<0||maks>100){
            cout << "Masukkan angka antara (0-100)" << endl;
            cout << endl;
        }
    }while(maks<0||maks>100);

    cout << "Silakan tebak nilai antara 0 sampai " << maks << endl;
    key = rand() % maks+1;//fungsi untuk mengacak angka yang akan ditebak atau sebagai cheat
    cout << "(Cheat : ini adalah angka yang ditebak " << key << " )" << endl;

    do{
        cout << "Masukkan tebakan kamu "; cin >> guess;
        if(guess < key){
            cout << "Tebakan kamu terlalu kecil" << endl;
            nyawa --;
            cout << "Tebakan kamu salah, nyawa : " << nyawa << endl << endl;
        }
        else if(guess>key){
            cout << "Tebakan kamu terlalu besar" << endl;
            nyawa--;
            cout << "Tebakan kamu salah, nyawa : " << nyawa << endl << endl;
        }
        else if(key==guess){
            cout << "HORE MENANG!!!" << endl;
        }
        if(nyawa==0){
            cout << "GAME OVER!!!" << endl;
        }
    } while(key!=guess && nyawa !=0);

    return 0;
}
