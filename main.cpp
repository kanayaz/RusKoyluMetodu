#include <iostream>

using namespace std;


int bolCarp(int sayi1,int sayi2, int sonuc){
    if (sayi1<=1){
        return sonuc+sayi2;
    }
    else{
        if (sayi1%2==1){
            sonuc = sonuc+sayi2;
            sayi1=sayi1/2;
            sayi2=sayi2*2;

        }
        else{
            sayi1=sayi1/2;
            sayi2=sayi2*2;
        }
        return bolCarp(sayi1,sayi2,sonuc);
    }
}

int main() {
    int sayi1,sayi2;
    cout << "carpilmasi icin 2 sayi giriniz"<<endl;
    cin >> sayi1 >> sayi2;
    cout<<bolCarp(sayi1,sayi2,0)<<endl;
    return 0;
}