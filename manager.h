//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_MANAGER_H
#define APLICATIE_INCHIRIERE_MASINI_MANAGER_H

#include "agent.h"
#include <vector>
class manager : public agent{
private:
    std::vector<std::shared_ptr<agent>> agenti;
    int nr_tel;
public:
    manager(const std::string &nume, const std::string &prenume, const std::string &gen, int nrTel, const std::vector<std::shared_ptr<agent>> agenti);

    void adauga (const agent & agent1);

    manager(manager const &copie);

    manager& operator = (manager & copie);

    void swap(manager &m1, manager &m2);

    void print(std::ostream &out) const override;

    void calc_salariu() override;

    std::shared_ptr<agent> clone() const override;

    tip_agent getTipAgent() const override;
};


#endif //APLICATIE_INCHIRIERE_MASINI_MANAGER_H
