//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_EROARE_AGENT_INCHIRIERI_H
#define APLICATIE_INCHIRIERE_MASINI_EROARE_AGENT_INCHIRIERI_H

#include <stdexcept>

class eroare_agent_inchirieri : std::runtime_error{
public:
    eroare_agent_inchirieri(const std::string &arg);

};

class eroare_nr_contracte : public eroare_agent_inchirieri{
public:
    eroare_nr_contracte();
};


#endif //APLICATIE_INCHIRIERE_MASINI_EROARE_AGENT_INCHIRIERI_H
