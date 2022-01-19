//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_AGENT_BUSINESS_H
#define APLICATIE_INCHIRIERE_MASINI_AGENT_BUSINESS_H

#include "agent.h"
#include <vector>
#include <memory>
class agent_business : public agent {
private:
    int nr_ore;
    tip_agent tipAgent;
public:
    agent_business()=default;

    ~agent_business() override=default;

    agent_business(const std::string &nume, const std::string &prenume, const std::string &gen, int nrOre, const tip_agent tipAgent1);

    void print(std::ostream &out) const override;

    std::shared_ptr<agent> clone() const override;

    tip_agent getTipAgent() const override;

    void calc_salariu() override;
};


#endif //APLICATIE_INCHIRIERE_MASINI_AGENT_BUSINESS_H
