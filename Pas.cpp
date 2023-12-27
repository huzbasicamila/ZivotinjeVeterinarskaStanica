//
// Created by Amila Huzbasic on 12/27/2023.
//

#include "Pas.h"

Pas::Pas(const std::string &ime, int godine, Spol spol, double tezina, bool vakcinisana, const std::string &rasa,
         const std::string &zemljaPorijekla) : Zivotinja(ime, godine, spol, tezina,vakcinisana),
         rasa(rasa), zemljaPorijekla(zemljaPorijekla){

}

const std::string& Pas::getRasa() const {
    return rasa;
}

const std::string& Pas::getZemljaPorijekla() const {
    return zemljaPorijekla;
}

void Pas::setRasa(const std::string &rasa) {
    this->rasa=rasa;
}

void Pas::setZemljaPorijekla(const std::string &zemljaPorijekla) {
    this->zemljaPorijekla=zemljaPorijekla;
}

void Pas::vratiNaziv() const {
    std::cout<<"Pas " << ime << " Rasa: " << rasa << " Zemlja porijekla: " << zemljaPorijekla;
}

void Pas::vakcinisi()  {
    if(!vakcinisana) {
        vakcinisana=true;
        std::cout<<"Pas " << ime << " je vakinisan.\n";
    } else {
        std::cout<< "Pas " << ime << " je vec vakcinisan.\n";
    }
}

void Pas::ispisiPodatke() const {
    Zivotinja::ispisiPodatke();
    std::cout<<" Rasa: " << rasa << ", Zemlja porijekla: " << zemljaPorijekla << std::endl;
}