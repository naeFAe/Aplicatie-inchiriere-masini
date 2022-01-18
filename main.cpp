
#include <iostream>
#include <fstream>


#include "masina.h"
#include "client.h"
#include "aplicatie.h"
#include "agent_inchirieri.h"
#include "muncitor.h"
#include "manager.h"
int main() {

//    masina masina_default{"default","default","default",0,"default",0};
//    masina nr1{"Bmw","Seria 3","negru",1234,"5",40};
//    masina nr2{"Audi","A6","negru",1235,"5",42};
//    masina nr3=nr1;
//    nr3.setCuloare("verde");
//
//    nr3.setNrInmatriculare1(8765);
//    masina nr4=nr2;
//    nr4.setNrInmatriculare1(4000);
//    client andrei{2,"Andrei",04124141,6,"Str tatalui nr 45","andrei12","andrei12345",4,nr1};
//    aplicatie1 parc_auto{{1,0},{andrei},{nr1,nr2}};
//    parc_auto.adauga_masina({nr3});
//    parc_auto.adauga_status(0);
//    parc_auto.adauga_masina({nr4});
//    parc_auto.adauga_status(0);
//    std::cout<<"\n";
//
//    client dorel{1,"Dorel",02323141241,2,"Str Mamei lui nr 25","dorel95","dorelejmek",2,masina_default};
//    parc_auto.set_masina_client({andrei});
//    parc_auto.set_masina_client({dorel});

    agent_inchirieri a1 = agent_inchirieri("popa","andrei","barbat",9);
    a1.calc_salariu();
    muncitor m2 = muncitor("sava","alex","barbat",2);
    m2.calc_salariu();
    manager man3 = manager("vasile","alexandru","barbat");
    agent_inchirieri a2 =agent_inchirieri("ilile","oana","barbat",10);
    man3.adauga2(a1);
    man3.adauga2(a2);
    man3.calc_salariu();
    man3.print(std::cout);
    return 0;
}


