

#include "client.h"
template <typename T>
client<T>::client() = default;

template<typename T>
client<T>::client(int id, const std::string &nume, int nrTel, int nrOre, const std::string &adresa,
               const std::string &user, const std::string &parola, int nrInchirieri, const masina &masina1) : id(id), nume(nume), nrTel(nrTel),
                                                                                                              nrOre(nrOre), adresa(adresa),
                                                                                                              user(user), parola(parola),
                                                                                                              nr_inchirieri(nrInchirieri),
                                                                                                              masina1(masina1) {}
template<typename T>
std::ostream &operator<<(std::ostream &os, const client<T> &client) {
    os << "id: " << client.id << " nume: " << client.nume << " nrTel: " << client.nrTel << " nrOre: "
       << client.nrOre << " adresa: " << client.adresa << " user: " << client.user << " parola: " << client.parola
       << " nr_inchirieri: " << client.nr_inchirieri << " masina1: " << client.masina1;
    return os;
}

template<typename T>
void client<T>::setNrOre(int nrOre) {
    client::nrOre = nrOre;
}

template<typename T>
int client<T>::set_pret_inchiriere() {//aplic o reducere celor care au inchiriat mai mult de 2 masini si celor ce sunt la prima inchiriere
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

template<typename T>
const std::string &client<T>::getUser() const {
    return user;
}

template<typename T>
const masina &client<T>::getMasina() const {
    return masina1;
}

template<typename T>
void client<T>::setMasina1(const masina &masina1) {
    client::masina1 = masina1;
}

template<typename T>
int client<T>::getNrOre() const {
    return nrOre;
}

template class client<int>;

template
std::ostream& operator<< <>(std::ostream& o, const client<int>& x);