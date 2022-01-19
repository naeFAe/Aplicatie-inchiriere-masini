//
// Created by Steff on 1/18/2022.
//

#include "agent_business.h"

agent_business::agent_business(const std::string &nume, const std::string &prenume, const std::string &gen, int nrOre, const tip_agent tipAgent1)
        : agent(nume, prenume, gen), nr_ore(nrOre), tipAgent(tipAgent1) {
    if(nrOre < 1)
        throw eroare_nrOre_business();
}

void agent_business::print(std::ostream &out) const {
    agent::print(out);
    out<<" "<<"numar ore: "<<nr_ore;
}

std::shared_ptr<agent> agent_business::clone() const {
    return std::make_shared<agent_business>(*this);
}

void agent_business::calc_salariu() {
    salariu=int(4000+nr_ore*10);
    procent=float(nr_ore*2);
}

tip_agent agent_business::getTipAgent() const {
    return BUSINESS;
}
