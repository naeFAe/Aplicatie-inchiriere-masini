
#include <iostream>
#include <fstream>
#include "agent.h"
#include "agent_business.h"
#include "agent_termen_lung.h"
#include "agent_travel.h"
#include "masina.h"
#include "client.h"
#include "aplicatie.h"
#include "manager.h"
int main() {

    masina_builder masina_build;
//    masina masina_default{"default","default","default",13456,"default",30};
    masina masina_default = masina_build.marca("default").model("default").culoare("default").nrInmatriculare(1345).capacitate("default").tarifOra(30).capacitate("default").rezervor(48).build();
//    masina nr1{"Bmw","Seria 3","negru",1234,"5",40};
    masina nr1 = masina_build.marca("BMW").model("Seria 3").culoare("negre").nrInmatriculare(1234).capacitate("5").tarifOra(40).build();
//    masina nr2{"Audi","A6","negru",1235,"5",42};
    masina nr2 = masina_build.marca("Audi").model("A6").culoare("negru").nrInmatriculare(1235).capacitate("5").tarifOra(42).build();
    masina nr3=nr1;
    nr3.setCuloare("verde");

    nr3.setNrInmatriculare1(8765);
    masina nr4=nr2;
    nr4.setNrInmatriculare1(4000);
//    client andrei{2,"Andrei",04124141,6,"Str tatalui nr 45","andrei12","andrei12345",4,nr1};
//    auto parc_auto = aplicatie1::get_app();
//    parc_auto->adauga_status(1);
//    parc_auto->adauga_status(0);
//    parc_auto->adauga_client(andrei);
//    parc_auto->adauga_masina(nr1);
//    parc_auto->adauga_masina(nr2);
//    parc_auto->adauga_masina({nr3});
//    parc_auto->adauga_status(0);
//    parc_auto->adauga_masina({nr4});
//    parc_auto->adauga_status(0);
//    std::cout<<"\n";
//
//    client dorel{1,"Dorel",02323141241,2,"Str Mamei lui nr 25","dorel95","dorelejmek",2,masina_default};
//    parc_auto->set_masina_client({andrei});
//    parc_auto->set_masina_client({dorel});
//
//    agent_business b2 = agent_business("adrian","andrei","barbat",15,BUSINESS);
//    manager m1 = manager("radu","andrei","barbat",7345521,{b2.clone()});
//    m1.adauga(b2);
//    m1.calc_salariu();
//    try{
//        manager mTest("Mihai","Andrei","barbat",723332420,{});
//    }catch (eroare_agent& error)
//    {
//        std::cout << error.what() << " ";
//    }
//    m1.print(std::cout);
    return 0;
}


