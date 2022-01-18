cmake_minimum_required(VERSION 3.21)
project(Aplicatie_inchiriere_masini)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Aplicatie_inchiriere_masini main.cpp masina.cpp masina.h  angajat.cpp angajat.h client.cpp client.h aplicatie.cpp aplicatie.h agent_inchirieri.cpp agent_inchirieri.h manager.cpp manager.h muncitor.cpp muncitor.h eroare_agent_inchirieri.cpp eroare_agent_inchirieri.h erori_masina.cpp erori_masina.h)
