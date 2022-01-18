//
// Created by Steff on 1/13/2022.
//

#include "manager.h"
#include "agent_inchirieri.h"



manager::manager(const std::string &nume, const std::string &prenume, const std::string &gen) : angajat(nume, prenume, gen) {}

void manager::print(std::ostream &out) const {
    angajat::print(out);
    out<<" "<<"nr angajati:" <<nr_angajati<<" ";
}

std::shared_ptr<angajat> manager::clone() const {
    return std::shared_ptr<angajat>();
}


void manager::adauga2(const agent_inchirieri &agent1) {
    nr_angajati=nr_angajati+1;
    agenti.push_back(agent1);
}

manager::manager(const manager &copie) : nr_angajati(copie.nr_angajati){
    for(const auto &j : copie.angajati)
        angajati.push_back(j->clone());
}

void manager::adauga(const angajat &angajat1) {
    nr_angajati=nr_angajati+1;
    angajati.push_back(angajat1.clone());
}

manager &manager::operator=(manager &copie) {
    swap(*this, copie);
    return *this;
}

void manager::swap(manager &m1, manager &m2) {
    using std::swap;
    swap(m1.nr_angajati,m2.nr_angajati);
    swap(m1.angajati,m2.angajati);
}

void manager::calc_salariu() {
    salariu=5000;
    for (auto &agent : agenti)
        salariu = salariu + agent.getNrContracte()*20;
}

void manager::afisare_subalterni() {
    for(auto &agent : agenti){
        agent.print(std::cout);
    }
}


