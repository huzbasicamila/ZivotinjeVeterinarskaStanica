//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "Zivotinja.h"

int Zivotinja::brojZivotinja=0;

Zivotinja::Zivotinja(const std::string &ime, int godine, Spol spol, double tezina, bool vakcinisana)
: ime(ime), godine(godine), spol(spol), tezina(tezina), vakcinisana(vakcinisana){
    brojZivotinja++;
}

void Zivotinja::ispisiPodatke() const {
    std::cout<<"Ime: " << ime << ", Godine: " << godine << ", Spol: ";
    switch(spol) {
        case Muski:
            std::cout<<"Muski";
            break;
        case Zenski:
            std::cout<<"Zenski";
            break;
        case Nepoznato:
            std::cout<<"Nepoznato";
            break;

    }
    std::cout<<", Tezina: " << tezina << "Vakcinisana: " << (vakcinisana ? "Da" : "Ne") << std::endl;
}

Zivotinja::~Zivotinja() {
    brojZivotinja--;
}

void Zivotinja::setGodine(int godine) {
    this->godine=godine;
}

int Zivotinja::getGodine() const{
    return godine;
}

bool Zivotinja::isVakcinisana() {
    return vakcinisana;
}