#include "VeterinarskaStanica.h"
#include <iostream>



void unosPsa() {
    VeterinarskaStanica pas;
    system("cls");
    std::cout<<"Unos psa: ";
    std::string ime, rasa, zemljaPorijekla;
    int godine, spol;
    double tezina;
    bool vakcinisana;

    std::cout << "Unesite ime psa: ";
    std::cin >> ime;
    std::cout << "Unesite godine: ";
    std::cin >> godine;
    std::cout << "Unesite spol (0 - Muški, 1 - Ženski): ";
    std::cin >> spol;
    std::cout << "Unesite težinu: ";
    std::cin >> tezina;
    std::cout << "Da li je vakcinisana (1 - Da, 0 - Ne): ";
    std::cin >> vakcinisana;
    std::cout << "Unesite rasu: ";
    std::cin >> rasa;
    std::cout << "Unesite zemlju porijekla: ";
    std::cin >> zemljaPorijekla;

    pas.dodajPsa(ime, godine, static_cast<Spol>(spol), tezina, vakcinisana, rasa, zemljaPorijekla);

};


void unosKonja() {

    VeterinarskaStanica konj;
    system("cls");
    std::cout<<"Unos psa: ";
    std::string ime;
    int godine, spol, svrha;
    double tezina;
    bool vakcinisana;


    std::cout << "Unesite ime psa: ";
    std::cin >> ime;
    std::cout << "Unesite godine: ";
    std::cin >> godine;
    std::cout << "Unesite spol (0 - Muški, 1 - Ženski): ";
    std::cin >> spol;
    std::cout << "Unesite težinu: ";
    std::cin >> tezina;
    std::cout << "Da li je vakcinisana (1 - Da, 0 - Ne): ";
    std::cin >> vakcinisana;
    std::cout << "Unesite svrhu (0 - Izložbe, 1 - Trke, 2 - Ostalo): ";
    std::cin >> svrha;

    konj.dodajKonja(ime, godine, static_cast<Spol>(spol), tezina, vakcinisana, static_cast<Svrha>(svrha));
};

void ispisVakcinisanihZivotinja() {
    system("cls");
    VeterinarskaStanica vakcinisaneZivotinje;
    vakcinisaneZivotinje.ispisiVakcinisane();
};

void ispisNajstarijeZivotinje() {
    system("cls");
    VeterinarskaStanica najstarijaZivorinja;
    najstarijaZivorinja.najstarijaZivotinja();
};

void pretragaPoRasi() {

};


void meni(){



    int izbor;
    do  {
        std::cout<<"-----------------------"<< std::endl;
        std::cout<<"Izaberi opciju\n";
        std::cout<< "1.Unos psa\n";
        std::cout<< "2.Unos konja\n";
        std::cout<< "3.Ispis vakcinisanih zivotinja\n";
        std::cout<< "4.Ispis najstarije zivotinje\n";
        std::cout<<"5.Pretraga psa po rasi (koristiti iznimke ako ne postoji pas)\n";
        std::cout<<"6.Pretraga konja po vrstiˇ\n";
        std::cout<<"7.KRAJˇ\n";

        std::cout<<"Unesite izbor: ";
        std::cin>>izbor;
        if(izbor==1) {
            unosPsa();
        } else if(izbor==2) {
            unosKonja();
        }else if(izbor==3){
            ispisVakcinisanihZivotinja();
        } else if( izbor==4) {
            ispisNajstarijeZivotinje();
        } else {
            break;
        }
    } while(izbor<1 || izbor >7);


};
int main(){
    VeterinarskaStanica veterinarskaStanica;
    meni();
    system("cls");

};