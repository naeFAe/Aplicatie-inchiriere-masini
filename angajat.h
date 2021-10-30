

#ifndef MASINI_ANGAJAT_H
#define MASINI_ANGAJAT_H

#include <iostream>
#include <memory>

class angajat {

protected:
    std::string nume;
    std::string prenume;
    std::string gen;
    float salariu=0;

public:
    angajat()=default;
    virtual ~angajat()=default;
    angajat(std::string nume, const std::string &prenume, const std::string &gen);

    friend std::ostream &operator<<(std::ostream &os, const angajat &angajat);

    virtual void print (std::ostream&)const;

    virtual std::shared_ptr<angajat> clone() const = 0;

    virtual void calc_salariu() = 0;


};


#endif //MASINI_ANGAJAT_H
