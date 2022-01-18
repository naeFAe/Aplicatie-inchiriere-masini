

#include "agent_inchirieri.h"
#include <memory>
#include "eroare_agent_inchirieri.h"
void agent_inchirieri::calc_salariu() {
    salariu = float(2000 + 10*nr_contracte);

}

void agent_inchirieri::print(std::ostream &out) const {
    angajat::print(out);
    out<<"numar contracte: " << nr_contracte << "\n";
}


std::shared_ptr<angajat> agent_inchirieri::clone() const {
    return std::make_shared<agent_inchirieri>(*this);
}

agent_inchirieri::agent_inchirieri(const std::string &nume, const std::string &prenume, const std::string &gen,
                                   int nrContracte) : angajat(nume, prenume, gen),
                                                      nr_contracte(nrContracte) {

    if(nr_contracte == 0)
        throw eroare_nr_contracte();
}

int agent_inchirieri::getNrContracte() const {
    return nr_contracte;
}




