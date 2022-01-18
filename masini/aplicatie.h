//
// Created by Steff on 1/12/2022.
//

#ifndef MASINI_APLICATIE_H
#define MASINI_APLICATIE_H

#include <iostream>
#include <vector>
#include "client.h"

class aplicatie1{
    std::vector<int>status_inchirieri;//un vector care semnaleaza cu 1 daca masina este inchiriata
    std::vector<class client>clienti;
    std::vector<class masina>masini;
public:
    aplicatie1(const std::vector<int> &statusInchirieri, const std::vector<struct client> &clienti,
               const std::vector<struct masina> &masini);



    void set_masina_client(class client& client);

    void afis_baza_de_date();

    void adauga_status(const int & status);

    void adauga_client(const class client & client );

    void adauga_masina(const class masina & masina );

    void setMasini(const std::vector<struct masina> &masini);

};


#endif //MASINI_APLICATIE_H
