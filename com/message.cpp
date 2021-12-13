#include <iostream>
#include "message.h"

using namespace std;
string nama;
int umur,i;
void message::printMessage(){
    cout << "nama: ";
    cin >> nama;
    cout << "umur ? ";
    cin >> umur;
}

void message::printMessage2(){
    cout << "hi " << nama;
    cout << "\n" ;
    if (umur > 10)
    {
        cout << "hey" << nama;
        cout << "\n";
        cout << "saya hitung dulu ya \n";
        for(i=1; i<=umur; i++)
        {
            
            cout << i;
            cout << "\t";
            message::printMessage3();
            
            
        }
    }
    else 
    {
        cout << "oh umur kamu " << umur;
    }
}

void message::printMessage3(){
    if (i > 4){
        cout << "sudah cukup \n";
        
    }
    else {
        cout << "lanjut \n";
    }
}