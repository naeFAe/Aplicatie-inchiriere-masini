

#include "client.h"

client::client(int id, const std::string &nume, int nrTel, int nrOre, const std::string &adresa,
               const std::string &user, const std::string &parola, int nrInchirieri, const masina &masina1) : id(id), nume(nume), nrTel(nrTel),
                                                                                                              nrOre(nrOre), adresa(adresa),
                                                                                                              user(user), parola(parola),
                                                                                                              nr_inchirieri(nrInchirieri),
                                                                                                              masina1(masina1) {}

std::ostream &operator<<(std::ostream &os, const client &client) {
    os << "id: " << client.id << " nume: " << client.nume << " nrTel: " << client.nrTel << " nrOre: "
       << client.nrOre << " adresa: " << client.adresa << " user: " << client.user << " parola: " << client.parola
       << " nr_inchirieri: " << client.nr_inchirieri << " masina1: " << client.masina1;
    return os;
}

void client::setNrOre(int nrOre) {
    client::nrOre = nrOre;
}

int client::set_pret_inchiriere() {//aplic o reducere celor care au inchiriat mai mult de 2 masini si celor ce sunt la prima inchiriere
    if(nr_inchirieri>2 && nr_inchirieri<5){
        return nrOre*masina1.getTarifOra()-(nrOre*masina1.getTarifOra())*0.05;}
    else
    if(nr_inchirieri>4)
        return nrOre*masina1.getTarifOra()-(nrOre*masina1.getTarifOra())*0.10;
    else
    if(nr_inchirieri==0)
        return nrOre*masina1.getTarifOra()-(nrOre*masina1.getTarifOra())*0.03;
    else
        return nrOre*masina1.getTarifOra();
}

const std::string &client::getUser() const {
    return user;
}

const masina &client::getMasina() const {
    return masina1;
}

void client::setMasina1(const masina &masina1) {
    client::masina1 = masina1;
}

int client::getNrOre() const {
    return nrOre;
}
