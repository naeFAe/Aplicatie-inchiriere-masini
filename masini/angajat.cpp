//
// Created by Steff on 1/12/2022.
//

#include "angajat.h"


angajat::angajat(std::string nume, const std::string &prenume, const std::string &gen) : nume(std::move(nume)),
                                                                                                             prenume(prenume),
                                                                                                             gen(gen) {}

std::ostream &operator<<(std::ostream &out, const angajat &angajat) {
    angajat.print(out);
    return out;
}

void angajat::print(std::ostream &out) const {
   const auto &angajat=*this;
   out<<"nume: "<<nume<<" "<<"prenume: "<<prenume <<" "<<"gen :"<<gen<<" "<<"salariu: "<< salariu;
}






