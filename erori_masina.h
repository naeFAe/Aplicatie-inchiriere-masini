//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_ERORI_MASINA_H
#define APLICATIE_INCHIRIERE_MASINI_ERORI_MASINA_H


#include <stdexcept>

class eroare_masina : std::runtime_error{
public:
    eroare_masina(const std::string &arg);

};

class eroare_nr_inmatriculare : public eroare_masina{
public:
    eroare_nr_inmatriculare();
};

class eroare_tarif : public eroare_masina{
public:
    eroare_tarif();
};

#endif //APLICATIE_INCHIRIERE_MASINI_ERORI_MASINA_H
