#include "funcs.hpp"

using namespace std;

int main () {
    system("clear");
    setlocale(LC_CTYPE, "Portuguese_Brazil");

    //Algumas variáveis
    int cont = 0, op, i, j;
    string pos = "";
    //Setando o jogo com as posições enumeradas e criando a variável de opção
    
    //JOGO
    while (1)
    {
        cout << "Seja Bem-Vindo(a) ao Jogo da velha! made by: Eduardo Veneza. Digite o número para utilizar sua respectiva função!\n\n" << "1 - Jogar\n2 - Regras\n3 - Fechar Jogo\n";
        cin >> op;
        //VERIFICA SE A OPÇÃO É VÁLIDA
        if (op > 3 || op < 1)
        {
            cout << "OPÇÃO INVÁLIDA! TENTE NOVAMENTE.";
        } else {
            break;
        }
        
    }
    do
    {
        char opc;
        int alt = 2;
        string jogo[3][3] = {{"1", "2", "3"}, 
                             {"4", "5", "6"}, 
                             {"7", "8", "9"}};
        if (cont != 0)
        {
            while (1)
                {
                    cout << "Digite o número para utilizar sua respectiva função!\n\n" << "1 - Jogar\n2 - Regras\n3 - Fechar Jogo\n";
                    cin >> op;
                    //VERIFICA SE A OPÇÃO É VÁLIDA
                    if (op > 3 || op < 1)
                    {
                        system("clear");
                        cout << "OPÇÃO INVÁLIDA! TENTE NOVAMENTE.\n\n";
                    } else {
                        break;
                    }
                }
        }

        switch (op)
        {
        case 1:
            while (1)
            {
                //VERIFICA SE EXISTE UMA COMBINAÇÃO VENCEDORA:
                if (verificadorO(jogo) == 1)
                {  
                    system("clear");
                    mostrarJogo(jogo);
                    cout << "\n\nPARABÉNS JOGADOR O! VOCÊ GANHOU A PARTIDA! \n\n";
                    break;
                } else if (verificadorX(jogo) == 1) {
                    system("clear");
                    mostrarJogo(jogo);
                    cout << "\n\nPARABÉNS JOGADOR X! VOCÊ GANHOU A PARTIDA! \n\n";
                    break;
                }

                //VERIFICA SE DEU VELHA:
                if(deuVelha(jogo) == 0){
                    system("clear");
                    mostrarJogo(jogo);
                    cout << "\n\nDEU VELHA! \n\n";
                    break;
                }
                // VEZ DO JOGADOR X
                if (alt%2 == 0)
                {
                    system("clear");
                    cout << "Jogador! Digite o número referente a posição no tabuleiro para preenchê-la com o X ou O!" << endl;
                    cout << "VEZ DO JOGADOR X!\n\n";
                    mostrarJogo(jogo);
                    cout << "\n\nSELECIONE A POSIÇÃO: ";
                    cin >> pos;
                    if(pos.length() > 1 || pos == "0"){
                        alt = alt - 1;
                    } else if (pos == "1" || pos == "2" || pos == "3" || pos == "4" || pos == "5" || pos == "6" || pos == "7" || pos == "8" || pos == "9")
                    {
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                if (jogo[i][j] == pos)
                                {
                                jogo[i][j] = "X";
                                }
                            
                            }
                        
                        }
                    } 
                    alt++;
                    continue;
                }
                //VEZ DO JOGADOR O
                if (alt%2 != 0)
                {
                    system("clear");
                    cout << "Jogador! Digite o número referente a posição no tabuleiro para preenchê-la com o X ou O!" << endl;
                    cout << "VEZ DO JOGADOR O!\n\n";
                    mostrarJogo(jogo);
                    cout << "\n\nSELECIONE A POSIÇÃO: ";
                    cin >> pos;
                    if(pos.length() > 1 || pos == "0"){
                        alt = alt - 1;
                    }
                    else if (pos == "1" || pos == "2" || pos == "3" || pos == "4" || pos == "5" || pos == "6" || pos == "7" || pos == "8" || pos == "9")
                    {
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                if (jogo[i][j] == pos)
                                {
                                jogo[i][j] = "O";
                                }
                            
                            }
                        
                        }
                    }
                    alt++;
                    continue;
                }
            }
            break;
        case 2:
            system("clear");
            cout << "Duas pessoas jogam alternadamente, preenchendo cada um dos espaços vazios.\nTradicionalmente se faz com X e O como elementos para a marcação.\nCada participante deve usar um símbolo (X ou O).\nVence o jogador que conseguir formar primeiro uma linha com três símbolos iguais, seja ela na horizontal, vertical ou diagonal.";
            cont++;
            continue;
            break;
        case 3:
            return 0;
            break;
        default:
            break;
        }
    //OPÇÃO DE REJOGAR   
    cout << "Gostaria de jogar mais uma partida?(S/N) \n";
    cin >> opc;
    if (opc == 'N' || opc == 'n') {break;}
    } while (1);
    return 0;
}