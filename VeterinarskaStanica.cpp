//
// Created by Amila Huzbasic on 12/27/2023.
//

#include "VeterinarskaStanica.h"
#include <fstream>
#include <algorithm>

VeterinarskaStanica::VeterinarskaStanica() {
    std::fstream file("zivotinje.txt");
    if(file.is_open()) {
        std::string tip;
        while(file>>tip) {
            if(tip=="Pas") {
                std::string ime;
                int godine;
                int spolValue;
                double tezina;
                bool vakcinisana;
                std::string rasa;
                std::string zemljaPorijekla;

                file>>ime>>godine>>spolValue>>tezina>>vakcinisana>>rasa>>zemljaPorijekla;

                Spol spol=static_cast<Spol>(spolValue);
                zivotinje.push_back(new Pas(ime,godine, spol,tezina,vakcinisana,rasa,zemljaPorijekla));
            }
            else if(tip=="Konj") {
                std::string ime;
                int godine;
                int spolValue;
                double tezina;
                bool vakcinisana;
                int svrhaValue;

                file>>ime>>godine>>spolValue>>tezina>>vakcinisana>>svrhaValue;

                Spol spol=static_cast<Spol>(spolValue);
                Svrha svrha=static_cast<Svrha>(svrhaValue);
                zivotinje.push_back(new Konj(ime,godine, spol,tezina, vakcinisana, svrha));

            }
        }
        file.close();
    }
}

VeterinarskaStanica::~VeterinarskaStanica() {
    for(auto zivotinja : zivotinje) {
        delete zivotinja;
    }
}

void VeterinarskaStanica::dodajPsa(const std::string &ime, int godine, Spol spol, double tezina, bool vakcinisana,
                                   const std::string &rasa, const std::string &zemljaPorijekla) {
    zivotinje.push_back(new Pas(ime,godine, spol, tezina, vakcinisana, rasa, zemljaPorijekla));
}

void VeterinarskaStanica::dodajKonja(const std::string &ime, int godine, Spol spol, double tezina, bool vakcinisana,
                                     Svrha svrha) {
    zivotinje.push_back(new Konj(ime,godine, spol, tezina, vakcinisana, svrha));
}

Zivotinja& VeterinarskaStanica::najstarijaZivotinja() {
    if(zivotinje.empty()) {
        throw std::runtime_error("Nema zivotinja za prikaz!");
    }

    auto najstarija=std::max_element(zivotinje.begin(), zivotinje.end(),
    [](const Zivotinja* a, const Zivotinja* b) {
        return a->getGodine() < b->getGodine();
    });
    return **najstarija;
}

void VeterinarskaStanica::ispisiVakcinisane() const {
    std::cout<<"Vakcinisane zivotinje: " << std::endl;
    for(const auto& zivotinja:zivotinje) {
        if(zivotinja->isVakcinisana()) {
            zivotinja->ispisiPodatke();
        }
    }
}