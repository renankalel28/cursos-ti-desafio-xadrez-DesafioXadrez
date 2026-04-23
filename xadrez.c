#include <stdio.h>
int main(){
//inserindo as peças do jogo:
int Torre, Rainha, Bispo;

//para a Torre será usado a estrutura de repetição For
// onde a torre repetirá o movimento 5 vezes para a direita.
for(Torre = 1; Torre <= 5 ; Torre++) // inicialização valendo 1, condição para repetição, e incremento.
{printf ("DIREITA\n");} //imprime no programa o movimento de acordo com a condição.

//para a Rainha será usado a estrutura de repetição While
//onde ela movimentará 8 vezes para a ESquerda.
Rainha = 1;  // atribuindo valor a Rainha
while (Rainha <= 8) //condição para a repetição do movimento
{Rainha++; // incremento.
 printf("ESQUERDA\n"); // imprime no programa a direção do movimento de acordo com a condição.
}

//para o bispo será usado a estrutura de repetição DoWhile
//onde o Bispo movimentará em diagonal para cima e para a direita  5 vezes. 
Bispo = 1; // atribuindo valor ao Bispo.
do {printf("CIMA, DIREITA\n"); //imprime o movimento do bispo
    Bispo++; //incremento 
}
while (Bispo <=5); //repete o codigo enquanto estiver dentro da condição.

return 0;

}
