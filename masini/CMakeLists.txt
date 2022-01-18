cmake_minimum_required(VERSION 3.21)
project(masini)

set(CMAKE_CXX_STANDARD 14)

add_executable(masini main.cpp masina.cpp masina.h masina_electrica.cpp masina_electrica.h angajat.cpp angajat.h client.cpp client.h aplicatie.cpp aplicatie.h agent_inchirieri.cpp agent_inchirieri.h manager.cpp manager.h muncitor.cpp muncitor.h)
