//
// Created by Steff on 1/18/2022.
//

#ifndef APLICATIE_INCHIRIERE_MASINI_AGENT_H
#define APLICATIE_INCHIRIERE_MASINI_AGENT_H

#include <iostream>
#include <memory>
#include "erori_agent.h"
enum tip_agent{
    STANDARD, BUSINESS, TRAVEL, TERMEN_LUNG
};

class agent {
protected:
    tip_agent tipAgent;
    std::string nume;
    std::string prenume;
    std::string gen;
    float salariu = 2000;
    float procent;
public:
    agent()=default;
    virtual ~agent()=default;

    agent(const std::string &nume, const std::string &prenume, const std::string &gen);

    friend std::ostream &operator<<(std::ostream &os, const agent &agent);

    virtual void print (std::ostream&)const;

    virtual tip_agent getTipAgent() const = 0;

    void setTipAgent(tip_agent tipAgent);

    virtual std::shared_ptr<agent> clone() const =0;

    virtual void calc_salariu() = 0;

    float getProcent() const;
};


#endif //APLICATIE_INCHIRIERE_MASINI_AGENT_H
