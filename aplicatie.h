

#ifndef MASINI_APLICATIE_H
#define MASINI_APLICATIE_H

#include <iostream>
#include <vector>
#include "client.h"

class aplicatie1{
    std::vector<int>status_inchirieri;//un vector care semnaleaza cu 1 daca masina este inchiriata
    std::vector<class client<int>>clienti;
    std::vector<class masina>masini;
    aplicatie1() = default;
    aplicatie1(const std::vector<int> &statusInchirieri, const std::vector<struct client<int>> &clienti,
               const std::vector<struct masina> &masini);
    static aplicatie1* app;
public:
    aplicatie1(const aplicatie1&) = delete;
    aplicatie1 &operator=(const aplicatie1&) = delete;
    static aplicatie1* get_app();

    void set_masina_client(class client<int>& client);

    void afis_baza_de_date();

    void adauga_status(const int & status);

    void adauga_client(const class client<int> & client );

    void adauga_masina(const class masina & masina );

    void setMasini(const std::vector<struct masina> &masini);

};


#endif //MASINI_APLICATIE_H
