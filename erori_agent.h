//
// Created by Steff on 1/19/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_ERORI_AGENT_H
#define APLICATIE_INCHIRIERE_MASINI_ERORI_AGENT_H

#include <stdexcept>

class eroare_agent : public std::runtime_error{
public:
    eroare_agent(const std::string& arg);
};

class eroare_salariu : public eroare_agent{
public:
    eroare_salariu();
};

class eroare_nume : public eroare_agent{
public:
    eroare_nume();
};

class eroare_nrSapt_travel : public eroare_agent{
public:
    eroare_nrSapt_travel();
};

class eroare_nrOre_business : public eroare_agent {
public:
    eroare_nrOre_business();
};

class eroare_manager : public eroare_agent{
public:
    eroare_manager();
};

#endif //APLICATIE_INCHIRIERE_MASINI_ERORI_AGENT_H
