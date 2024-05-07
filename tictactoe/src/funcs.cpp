#include "funcs.hpp"

void mostrarJogo(string jogo[3][3]){

std::cout << jogo[0][0] << " " << jogo[0][1] << " " << jogo[0][2];
std::cout << "\n";
std::cout << jogo[1][0] << " " << jogo[1][1] << " " << jogo[1][2];
std::cout << "\n";
std::cout << jogo[2][0] << " " << jogo[2][1] << " " << jogo[2][2];
std::cout << "\n";

}

int verificadorX(string jogo[3][3]){
//VERIFICA AS LINHAS
if (jogo[0][0] == "X" && jogo[0][1] == "X" && jogo[0][2] == "X"){
    return 1;
} else if (jogo[1][0] == "X" && jogo[1][1] == "X" && jogo[1][2] == "X"){
    return 1;
} else if (jogo [2][0] == "X" && jogo[2][1] == "X" && jogo[2][2] == "X"){
    return 1;
}


//VERIFICA AS COLUNAS
if (jogo[0][0] == "X" && jogo[1][0] == "X" && jogo[2][0] == "X"){
    return 1;
} else if (jogo [0][1] == "X" && jogo[1][1] == "X" && jogo[2][1] == "X"){
    return 1;
} else if (jogo [0][2] == "X" && jogo[1][2] == "X" && jogo[2][2] == "X"){
    return 1;
}

//VERIFICA DIAGONAIS
if ((jogo[0][0] == "X" && jogo [1][1] == "X" && jogo[2][2] == "X") || (jogo[2][0] == "X" && jogo[1][1] == "X" && jogo[0][2] == "X")){
    return 1;
}
return 0;
}

int verificadorO(string jogo[3][3]){

//VERIFICA LINHAS
if (jogo[0][0] == "O" && jogo[0][1] == "O" && jogo[0][2] == "O"){
    return 1;
} else if (jogo[1][0] == "O" && jogo[1][1] == "O" && jogo[1][2] == "O"){
    return 1;
} else if (jogo [2][0] == "O" && jogo[2][1] == "O" && jogo[2][2] == "O"){
    return 1;
}

//VERIFICA AS COLUNAS
if (jogo[0][0] == "O" && jogo[1][0] == "O" && jogo[2][0] == "O"){
    return 1;
} else if (jogo [0][1] == "O" && jogo[1][1] == "O" && jogo[2][1] == "O"){
    return 1;
} else if (jogo [0][2] == "O" && jogo[1][2] == "O" && jogo[2][2] == "O"){
    return 1;
}

//VERIFICA DIAGONAIS
if ((jogo[0][0] == "O" && jogo[1][1] == "O" && jogo[2][2] == "O") || (jogo[2][0] == "O" && jogo[1][1] == "O" && jogo[0][2] == "O")){
    return 1;
}
return 0;
}

int deuVelha(string jogo[3][3]){
    int k, l, conta = 0;

    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            if (jogo[k][l] == "X" || jogo[k][l] == "O")
            {
                conta++;
            }
            
        }
    }
    if (conta == 9)
    {
       return 0;
    } else {
        return 1;
    }
    
}