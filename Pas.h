//
// Created by Amila Huzbasic on 12/27/2023.
//

#ifndef ZIVOTINJE_PAS_H
#define ZIVOTINJE_PAS_H

#include "Zivotinja.h"

class Pas : public Zivotinja {
private:
    std::string rasa;
    std::string zemljaPorijekla;

public:
    Pas(const std::string& ime, int godine, Spol spol, double tezina, bool vakcinisana,
        const std::string& rasa, const std::string& zemljaPorijekla );

    const std::string& getRasa() const;
    const std::string& getZemljaPorijekla() const;

    void setRasa(const std::string& rasa);
    void setZemljaPorijekla(const std::string& zemljaPorijekla);

    virtual void vratiNaziv() const override;
    virtual void vakcinisi()  override;

    void ispisiPodatke() const override;




};


#endif //ZIVOTINJE_PAS_H
