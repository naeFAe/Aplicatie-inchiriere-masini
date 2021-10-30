
#include "aplicatie.h"

aplicatie1::aplicatie1(const std::vector<int> &statusInchirieri, const std::vector<struct client> &clienti,
                       const std::vector<struct masina> &masini) : status_inchirieri(statusInchirieri), clienti(clienti),
                                                                   masini(masini) {}

void aplicatie1::set_masina_client(class client& client) {//inlocuieste masina introdusa initial cu o masina introdusa de client la tstatura
    int x=1;//o vaaribila care primeste valoarea 1 si verifica daca clientul vrea sa inchirieze mai multe masini
    while(x==1){
        std::cout << client.getUser() << "\n\n";

        for(int i=0;i<masini.size();i++)
            if(status_inchirieri[i]==0)
                std::cout<<masini[i].getMarca()<<" "<<masini[i].getModel()<<" "<<masini[i].getNrInmatriculare()<<" capacitate"<<masini[i].getCapacitate()<<" tarif/ora: "<<masini[i].getTarifOra()<<"\n";
        std::cout<<"\nAlege numarul de inmatriculare pentru masina pe care vrei sa o inchiriezi:";
        int nr_inmatriculare;
        int k=1;//semnaleaza faptul ca a fost gasit nr de inmatriculare care introdus
        std::cin>>nr_inmatriculare;
        for(int i=0;i<masini.size();i++)
            if(masini[i].getNrInmatriculare()==nr_inmatriculare)
            {client.setMasina1(masini[i]);
                k=0;
                status_inchirieri[i]=1;
                break;
            }
        if(k==1)
            std::cout<<"Nu a fost gasiit numarul de inmatriculare introdus\n";
        else
            std::cout<<"Pretul inchirerii masinii "<<client.getMasina().getMarca()<<" "<<client.getMasina().getModel()<<" "<<client.getMasina().getNrInmatriculare()<<" este de "<<client.set_pret_inchiriere()<<" pe durata de "<<client.getNrOre()<<" ore\n";
        std::cout<<"Apasa tasta 1 pentru as selecta inca o masina: ";
        std::cin>>x;
    }

}

void aplicatie1::afis_baza_de_date() {
    std::cout<<"clienti: ";
    for(const auto &client : clienti)
        std::cout << client << " ";
    std::cout<<"masini: ";
    for(const auto &masina : masini)
        std::cout<<masina<<" ";
}

void aplicatie1::adauga_status(const int &status) {
    status_inchirieri.push_back(status);
}

void aplicatie1::adauga_client(const class client& client) {
    clienti.push_back(client);
}

void aplicatie1::adauga_masina(const class masina& masina) {
    masini.push_back(masina);
}

void aplicatie1::setMasini(const std::vector<struct masina> &masini) {
    aplicatie1::masini = masini;
}
