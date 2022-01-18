

#include "masina.h"
#include "erori_masina.h"
#include <string>
masina::masina(const std::string &marca, const std::string &model, const std::string &culoare, int nrInmatriculare,
               const std::string &capacitate, int tarifOra) : marca(marca), model(model), culoare(culoare),
                                                              nrInmatriculare(nrInmatriculare), capacitate(capacitate),
                                                              tarifOra(tarifOra) {
    if(tarifOra == 0)
        throw eroare_tarif();
    if(nrInmatriculare < 3)
        throw eroare_nr_inmatriculare();
}

void masina::setNrInmatriculare1(int nrInmatriculare) {
    masina::nrInmatriculare = nrInmatriculare;
}

int masina::getNrInmatriculare() const {
    return nrInmatriculare;
}

void masina::setCuloare(const std::string &culoare) {
    masina::culoare = culoare;
}
void cost_full(){

}



masina &masina::operator=(const masina &copie) {
    this->marca = copie.marca;
    this->model = copie.model;
    this->capacitate = copie.capacitate;
    this->nrInmatriculare = copie.nrInmatriculare;
    this->tarifOra = copie.tarifOra;
    return *this;
}

masina::masina(const masina &copie) {
    this->marca = copie.marca;
    this->model = copie.model;
    this->capacitate = copie.capacitate;
    this->tarifOra = copie.tarifOra;
    this->nrInmatriculare = copie.nrInmatriculare;
}

const std::string &masina::getModel() const {
    return model;
}

int masina::getTarifOra() const {
    return tarifOra;
}

const std::string &masina::getMarca() const {
    return marca;
}

const std::string &masina::getCuloare() const {
    return culoare;
}

const std::string &masina::getCapacitate() const {
    return capacitate;
}

std::ostream &operator<<(std::ostream &os, const masina &masina) {
    masina.print(os);
    return os;
}

void masina::print(std::ostream &os) const {
    os << "marca: " << marca << " model: " << model << " culoare: " << culoare
       << " nrInmatriculare: " << nrInmatriculare << " capacitate: " << capacitate << " tarifOra: "
       << tarifOra;
}





