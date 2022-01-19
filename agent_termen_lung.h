//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_AGENT_TERMEN_LUNG_H
#define APLICATIE_INCHIRIERE_MASINI_AGENT_TERMEN_LUNG_H

#include "agent.h"
class agent_termen_lung : public agent {
private:
    int nr_luni;
    tip_agent tipAgent;
public:
    agent_termen_lung(const std::string &nume, const std::string &prenume, const std::string &gen, int nrLuni, tip_agent tipAgent1);

    void print(std::ostream &ostream) const override;

    std::shared_ptr<agent> clone() const override;

    void calc_salariu() override;

    tip_agent getTipAgent() const override;
};


#endif //APLICATIE_INCHIRIERE_MASINI_AGENT_TERMEN_LUNG_H
