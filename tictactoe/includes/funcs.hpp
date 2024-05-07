#ifndef FUNCS_HPP_INCLUDED
#define FUNCS_HPP_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale>
#include "funcs.hpp"
using std::string;

void mostrarJogo(string jogo[3][3]);
int verificadorO(string jogo[3][3]);
int verificadorX(string jogo[3][3]);
int deuVelha(string jogo[3][3]);

#endif