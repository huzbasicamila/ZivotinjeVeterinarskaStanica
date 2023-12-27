//
// Created by Amila Huzbasic on 12/27/2023.
//

#include "Konj.h"

Konj::Konj(const std::string &ime, int godine, Spol spol, double tezina, bool vakcinisana, Svrha svrha) :
Zivotinja(ime, godine,spol, tezina, vakcinisana) , svrha(svrha){

}

Konj::Konj(const Konj &other) : Zivotinja(other), svrha(other.svrha){

}

Konj& Konj::operator=(const Konj &other) {
    if(this!=&other) {
        Zivotinja::operator=(other);
        svrha=other.svrha;
    }
}

std::istream& operator>>(std::istream& is, Konj& konj) {
    is>> konj.ime >> konj.godine;

    int spolValue;
    is>>spolValue;
    konj.spol=static_cast<Spol>(spolValue);

    is>>konj.tezina >> konj.vakcinisana;

    int svrhaValue;
    is>>svrhaValue;
    konj.svrha=static_cast<Svrha>(svrhaValue);

    return is;
}

void Konj::vratiNaziv() const {
    std::cout<<"Konj: " << ime << std::endl;
}

void Konj::vakcinisi() {
    if(!vakcinisana) {
        vakcinisana=true;
        std::cout<<"Konj " << ime << " je vakcinisan.\n";
    } else {
        std::cout<<"Konj " << ime << " je vec vakcinisan. \n";
    }
}

void Konj::ispisiPodatke() const {
    Zivotinja::ispisiPodatke();
    std::cout << "Svrha: " ;
    switch(svrha) {
        case Izlozbe:
            std::cout<<"Izlozbe.";
            break;
        case Trke:
            std::cout<<"Trke";
            break;
        case Ostalo:
            std::cout<<"Ostalo";
            break;
    }
    std::cout<<std::endl;
}