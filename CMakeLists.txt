cmake_minimum_required(VERSION 3.21)
project(Aplicatie_inchiriere_masini)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Aplicatie_inchiriere_masini main.cpp masina.cpp masina.h client.cpp client.h aplicatie.cpp aplicatie.h eroare_agent_inchirieri.cpp eroare_agent_inchirieri.h erori_masina.cpp erori_masina.h agent.cpp agent.h agent_business.cpp agent_business.h agent_travel.cpp agent_travel.h agent_termen_lung.cpp agent_termen_lung.h manager.cpp manager.h erori_agent.cpp erori_agent.h)
