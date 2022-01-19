//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_AGENT_TRAVEL_H
#define APLICATIE_INCHIRIERE_MASINI_AGENT_TRAVEL_H

#include <ostream>
#include "agent.h"
class agent_travel : public agent {
private:
    int nr_sapt;
    tip_agent tipAgent1;
public:
    agent_travel()=default;
    agent_travel(const std::string &nume, const std::string &prenume, const std::string &gen, int nrSapt,const tip_agent tipAgent);
    ~agent_travel() override = default;
    std::shared_ptr<agent> clone() const override;
    void print(std::ostream &out) const override;

    tip_agent getTipAgent() const override;


    void calc_salariu() override;
};


#endif //APLICATIE_INCHIRIERE_MASINI_AGENT_TRAVEL_H
