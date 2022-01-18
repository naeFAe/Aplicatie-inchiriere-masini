//
// Created by Steff on 1/18/2022.
//

#include "eroare_agent_inchirieri.h"

eroare_agent_inchirieri::eroare_agent_inchirieri(const std::string &arg) : runtime_error("Eroare agent inchirieri:" + arg){}

eroare_nr_contracte::eroare_nr_contracte() : eroare_agent_inchirieri("Numarul de contracte este prea mic"){}