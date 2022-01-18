//
// Created by Steff on 1/13/2022.
//

#ifndef MASINI_MANAGER_H
#define MASINI_MANAGER_H


#include <vector>
#include "angajat.h"
#include "agent_inchirieri.h"
class manager : public angajat{
    int nr_angajati=0;
    std::vector<std::shared_ptr<angajat>> angajati;
    std::vector<agent_inchirieri> agenti;
public:

    manager(const std::string &nume, const std::string &prenume, const std::string &gen);

    std::shared_ptr<angajat> clone() const override;

    void adauga(const angajat& angajat1);

    manager(manager const &copie);

    manager& operator=(manager & copie);

    void swap(manager &m1, manager &m2);

    void print(std::ostream &out) const override;

    void calc_salariu() override;

    void afisare_subalterni();

    void adauga2(const agent_inchirieri& agent1);

};


#endif //MASINI_MANAGER_H
