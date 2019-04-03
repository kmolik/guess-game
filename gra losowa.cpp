#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand( time( NULL));
    int a, b= (rand()% 1000) + 1;
    int licznik = 0;
    cout << "Zgadnij liczbe wylosowana przez komputer \n" <<
    "Liczba ta jest z przedzialu od 1 do 1000" << endl;
    //cout << b << endl;//Do usuniecia
    //cin >> a;
    do{
    cin >> a;
    if(a<b){
        cout << "Liczba jest za mala. \n" <<
        "Zgaduj dalej :( " << endl;
    }
    if (a>b){
        cout << "Liczba jest za duza. \n" <<
         "Zgaduj dalej" << endl;
    }
    licznik++;
    }while (a!=b);

    cout << "Prawidlowa liczba! Brawo! :) \n" <<
    "Wylosowana liczba to: " << b << endl;
    cout << "Liczba prob wynosi: " << licznik << endl;

    return 0;
}



