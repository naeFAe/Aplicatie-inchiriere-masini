//
// Created by Steff on 1/18/2022.
//

#include "agent_termen_lung.h"

agent_termen_lung::agent_termen_lung(const std::string &nume, const std::string &prenume, const std::string &gen,
                                     int nrLuni, const tip_agent tipAgent1) : agent(nume, prenume, gen), nr_luni(nrLuni), tipAgent(tipAgent1) {
}

void agent_termen_lung::print(std::ostream &out) const {
    agent::print(out);
    out<<" nr luni:"<<nr_luni;
}

std::shared_ptr<agent> agent_termen_lung::clone() const {
    return std::make_shared<agent_termen_lung>(*this);
}

void agent_termen_lung::calc_salariu() {
    salariu=int(4000 + nr_luni *1000);
    procent=float(nr_luni*10);
}

tip_agent agent_termen_lung::getTipAgent() const {
    return TERMEN_LUNG;
}

