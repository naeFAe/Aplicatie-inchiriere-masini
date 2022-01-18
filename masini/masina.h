//
// Created by Steff on 1/11/2022.
//

#ifndef MASINI_MASINA_H
#define MASINI_MASINA_H

#include <iostream>
class masina{
    std::string marca;
    std::string model;
    std::string culoare;
    int nrInmatriculare;
    std::string capacitate;
    int tarifOra;
    int capacitate_rezervor;
    int rezervor;

public:
    masina(const std::string &marca, const std::string &model, const std::string &culoare, int nrInmatriculare,
           const std::string &capacitate, int tarifOra);

    friend std::ostream &operator<<(std::ostream &os, const masina &masina);

    virtual void print(std::ostream &os)const;

    void setNrInmatriculare1(int nrInmatriculare);

    int getNrInmatriculare() const;


    void setCuloare(const std::string &culoare);

    masina& operator=(const masina& copie);
    masina(const masina& copie);



    const std::string &getModel() const;

    int getTarifOra() const;

    const std::string &getMarca() const;

    const std::string &getCuloare() const;

    const std::string &getCapacitate() const;

};

#endif //MASINI_MASINA_H
