

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
    friend class masina_builder;
public:
    masina() = default;
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

class masina_builder{
private:
    masina masina1;
public:
    masina_builder() = default;
    masina_builder& marca(const std::string& marca){
        masina1.marca = marca;
        return *this;
    }
    masina_builder& model(const std::string& model){
        masina1.model = model;
        return *this;
    }
    masina_builder& culoare(const std::string& culoare){
        masina1.culoare = culoare;
        return *this;
    }
    masina_builder& nrInmatriculare(int nrInmatriculare){
        masina1.nrInmatriculare = nrInmatriculare;
        return *this;
    }
    masina_builder& capacitate(const std::string& capacitate){
        masina1.capacitate = capacitate;
        return *this;
    }
    masina_builder& tarifOra(int tarifOra){
        masina1.tarifOra = tarifOra;
        return *this;
    }
    masina_builder& capacitateRezervor(int capacitateRezervor){
        masina1.capacitate_rezervor = capacitateRezervor;
        return *this;
    }
    masina_builder& rezervor(int rezervor){
        masina1.rezervor = rezervor;
        return *this;
    }
    masina build(){
        return masina1;
    }

};
#endif //MASINI_MASINA_H

