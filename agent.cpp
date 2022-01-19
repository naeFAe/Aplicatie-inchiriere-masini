//
// Created by Steff on 1/18/2022.
//

#include "agent.h"

agent::agent(const std::string &nume, const std::string &prenume, const std::string &gen) : nume(nume),
                                                                                            prenume(prenume),
                                                                                            gen(gen) {
    if(salariu < 2000)
        throw eroare_salariu();
    if(nume.size() < 4)
        throw eroare_nume();
}

std::ostream &operator<<(std::ostream &out, const agent &agent) {
    agent.print(out);
    return out;
}

void agent::print(std::ostream &out) const {
    const auto &agent=*this;
    out << "nume: " << nume << " prenume: " << prenume << " gen: " << gen << " salariu: "
       << salariu << " procent: " << procent;
}

float agent::getProcent() const {
    return procent;
}



void agent::setTipAgent(tip_agent tipAgent) {
    agent::tipAgent = tipAgent;
}
