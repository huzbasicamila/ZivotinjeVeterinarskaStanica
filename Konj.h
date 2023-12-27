//
// Created by Amila Huzbasic on 12/27/2023.
//

#ifndef ZIVOTINJE_KONJ_H
#define ZIVOTINJE_KONJ_H

#include "Zivotinja.h"
enum Svrha{Izlozbe, Trke, Ostalo};
//Konj koja je Zivotinja i koja ima i atribut svrha (koji govori da li je to konj za izloZbe, trke, ...).
//Uraditi konstruktor kopije i preopterecene operatore sa unos.
class Konj : public Zivotinja {
private:
   Svrha svrha;


public:
    Konj(const std::string& ime, int godine, Spol spol, double tezina, bool vakcinisana, Svrha svrha);
    Konj(const Konj& other);

    Konj& operator=(const Konj& other);
    friend std::istream& operator>>(std::istream& is, Konj& konj);

    void vratiNaziv() const override;
    void vakcinisi()  override;
    void ispisiPodatke() const override;


};


#endif //ZIVOTINJE_KONJ_H
