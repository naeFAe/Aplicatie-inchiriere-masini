//
// Created by Steff on 1/18/2022.
//

#include "manager.h"

manager::manager(const std::string &nume, const std::string &prenume, const std::string &gen, int nrTel, const std::vector<std::shared_ptr<agent>> agenti) : agent(nume,
                                                                                                                 prenume,
                                                                                                                 gen),
                                                                                                           nr_tel(nrTel), agenti(agenti) {
    if(agenti.size() < 1)
        throw eroare_manager();
}


void manager::adauga(const agent &agent1) {
    agenti.push_back(agent1.clone());
}

manager::manager(const manager &copie) :nr_tel(copie.nr_tel){
    for(const auto &j : copie.agenti)
        agenti.push_back(j->clone());
}

void manager::swap(manager &m1, manager &m2) {
    using std::swap;
    swap(m1.nr_tel,m2.nr_tel);
    swap(m1.agenti,m2.agenti);
}

manager &manager::operator=(manager &copie) {
    swap(*this, copie);
    return *this;
}

void manager::print(std::ostream &out) const {
    agent::print(out);
    out<<" nr telefon: "<<nr_tel;
    for(const auto &agent : agenti)
        out << " " << agent->getTipAgent() << " ";
}

std::shared_ptr<agent> manager::clone() const {
    return std::make_shared<manager>(*this);
}

void manager::calc_salariu() {
    salariu = 8000;
    salariu += int((2*agenti.size())*8000/100);
}

tip_agent manager::getTipAgent() const {
    return TERMEN_LUNG;
}


