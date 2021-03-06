

#ifndef MASINI_CLIENT_H
#define MASINI_CLIENT_H

#include <iostream>
#include "masina.h"

template <typename T>
class client;

template <typename T>
std::ostream& operator<<(std::ostream& o, const client<T>& client);

template<typename T>
class client{
    T id;
    std::string nume;
    int nrTel;
    int nrOre;
    std::string adresa;
    std::string user;
    std::string parola;
    int nr_inchirieri;
    masina masina1;
public:
    client();
    client(int id, const std::string &nume, int nrTel, int nrOre, const std::string &adresa, const std::string &user,
           const std::string &parola, int nrInchirieri, const masina &masina1);

    friend std::ostream &operator<< <>(std::ostream &os, const client<int> &client);

    void setNrOre(int nrOre);

    int set_pret_inchiriere();

    const std::string &getUser() const;

    const std::string &getParola() const {
        return parola;
    }

    const masina &getMasina() const;

    void setMasina1(const masina &masina1);

    int getNrOre() const;
};



#endif //MASINI_CLIENT_H
