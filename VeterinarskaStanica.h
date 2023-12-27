//
// Created by Amila Huzbasic on 12/27/2023.
//

#ifndef ZIVOTINJE_VETERINARSKASTANICA_H
#define ZIVOTINJE_VETERINARSKASTANICA_H

#include "Zivotinja.h"
#include "Pas.h"
#include "Konj.h"
#include <vector>

class VeterinarskaStanica {
private:
    std::vector<Zivotinja*> zivotinje;

public:
    VeterinarskaStanica();
    ~VeterinarskaStanica();

    void dodajPsa(const std::string& ime, int godine, Spol spol, double tezina,
                  bool vakcinisana, const std::string &rasa, const std::string& zemljaPorijekla);

    void dodajKonja(const std::string& ime, int godine, Spol spol, double tezina,
                    bool vakcinisana, Svrha svrha);

    Zivotinja& najstarijaZivotinja();

    void ispisiVakcinisane() const;


};


#endif //ZIVOTINJE_VETERINARSKASTANICA_H
