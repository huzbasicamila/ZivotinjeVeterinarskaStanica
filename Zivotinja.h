//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef ZIVOTINJE_ZIVOTINJA_H
#define ZIVOTINJE_ZIVOTINJA_H

#include <string>
#include <iostream>

enum Spol {Muski, Zenski, Nepoznato};
class Zivotinja {
protected:
    std::string ime;
    int godine;
    Spol spol;
    double tezina;
    bool vakcinisana;

public:
    Zivotinja(const std::string& ime, int godine, Spol spol, double tezina, bool vakcinisana);
    virtual ~Zivotinja();

    virtual void vratiNaziv() const=0;
    virtual void vakcinisi() =0;

    virtual void ispisiPodatke() const;




    static int brojZivotinja;

    void setGodine(int godine);
    int getGodine() const;

    bool isVakcinisana();

};


#endif //ZIVOTINJE_ZIVOTINJA_H
