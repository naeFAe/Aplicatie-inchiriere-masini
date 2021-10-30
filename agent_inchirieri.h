

#ifndef MASINI_AGENT_INCHIRIERI_H
#define MASINI_AGENT_INCHIRIERI_H


#include "angajat.h"
#include <memory>
#include <ostream>

class agent_inchirieri: public angajat{
protected:
    int nr_contracte{};

public:
    agent_inchirieri()=default;
    ~agent_inchirieri() override=default;
    agent_inchirieri(const std::string &nume, const std::string &prenume, const std::string &gen,int nrContracte);

    void print (std::ostream&)const override;
    std::shared_ptr <angajat> clone()const override;
    void calc_salariu()override;

    int getNrContracte() const;

};


#endif //MASINI_AGENT_INCHIRIERI_H
