//
// Created by Steff on 1/18/2022.
//

#include "agent_travel.h"

agent_travel::agent_travel(const std::string &nume, const std::string &prenume, const std::string &gen, int nrSapt,const tip_agent tipAgent1)
        : agent(nume, prenume, gen), nr_sapt(nrSapt), tipAgent1(tipAgent1) {
    if(nrSapt < 1)
        throw eroare_nrSapt_travel();
}

std::shared_ptr<agent> agent_travel::clone() const {
    return std::make_shared<agent_travel>(*this);
}

void agent_travel::print(std::ostream &out) const {
    agent::print(out);
    out<<" nr saptamani: "<<nr_sapt;
}

void agent_travel::calc_salariu() {
    salariu=int(4000 + nr_sapt*100);
    procent=float(nr_sapt*5);
}


tip_agent agent_travel::getTipAgent() const {
    return TERMEN_LUNG;
}



