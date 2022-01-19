//
// Created by Steff on 1/19/2022.
//

#include "erori_agent.h"

eroare_agent::eroare_agent(const std::string &arg) : runtime_error("Eroare agent: " + arg) {}

eroare_salariu::eroare_salariu() : eroare_agent("Salariul nu exista") {}

eroare_nume::eroare_nume() : eroare_agent("Numele este prea scurt") {}

eroare_nrSapt_travel::eroare_nrSapt_travel() : eroare_agent("Prea putine saptamani - travel") {}

eroare_nrOre_business::eroare_nrOre_business() : eroare_agent("Prea putine ore - business") {}

eroare_manager::eroare_manager() : eroare_agent("Managerul trebuie sa aiba cel putin un agent in subordine"){}