cmake_minimum_required(VERSION 3.19)
project(Quicksort_personas)

set(CMAKE_CXX_STANDARD 17)

add_executable(Quicksort_personas main.cpp Persona.cpp Persona.h BurbujaManager.cpp BurbujaManager.h BurbujaSocial.cpp BurbujaSocial.h QuickSort.cpp QuickSort.h)