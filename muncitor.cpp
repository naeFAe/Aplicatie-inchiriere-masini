#include "muncitor.h"

muncitor::muncitor(const std::string &nume, const std::string &prenume, const std::string &gen,
                   int nrOreSuplimentare) : angajat(nume, prenume, gen),
                                            nr_ore_suplimentare(nrOreSuplimentare) {}

void muncitor::print(std::ostream &out) const {
    angajat::print(out);
    out << "numar ore suplimentare: " << nr_ore_suplimentare << "\n";
}



std::shared_ptr<angajat> muncitor::clone() const {
    return std::make_shared<muncitor>(*this);
}

void muncitor::calc_salariu() {
    salariu = float (2000 + 10*nr_ore_suplimentare);
}
