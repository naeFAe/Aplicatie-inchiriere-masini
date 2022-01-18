//
// Created by Steff on 1/13/2022.
//

#ifndef MASINI_MUNCITOR_H
#define MASINI_MUNCITOR_H


#include <ostream>
#include "angajat.h"

class muncitor : public angajat{
    int nr_ore_suplimentare{};
public:
    muncitor()=default;
    ~muncitor() override=default;

    muncitor(const std::string &nume, const std::string &prenume, const std::string &gen,
             int nrOreSuplimentare);

    void print (std::ostream&)const override;
    std::shared_ptr<angajat>clone() const override;
    void calc_salariu()override;

};


#endif //MASINI_MUNCITOR_H
