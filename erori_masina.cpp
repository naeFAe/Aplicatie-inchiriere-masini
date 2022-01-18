//
// Created by Steff on 1/18/2022.
//

#include "erori_masina.h"
eroare_masina::eroare_masina(const std::string &arg) : std::runtime_error("Eroare masina " + arg) {}

eroare_nr_inmatriculare::eroare_nr_inmatriculare(): eroare_masina("numarul de inmatriculare este prea scurt") {}

eroare_tarif::eroare_tarif(): eroare_masina("valoarea tarifului trebuie sa fie diferita de 0") {}