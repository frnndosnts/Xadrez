#include <stdio.h>

//RECURSIVIDADE: Torre:
void Torre (int i){
    if (i < 5)
    {
      printf("Direita  \n");
      Torre(i + 1);
    }
}
//RECURSIVIDADE: Bispo:
void Bispo(int i) {
    if (i > 0) {
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
        printf("Cima\n");
        Bispo(i - 1);
    }
}
//RECURSIVIDADE: Rainha:
void Rainha(int i){
    if (i <= 8)
    {
      printf("Esquerda  \n");
      Rainha(i + 1);
    }
}

int main () {
//Movendo a Torre.

    int Peca1 = 0;
    printf(" Movimentação da Peça Torre: \n");
    Torre(Peca1);
    
//Movendo o Bispo.
printf("\n");

    int Peca2 = 5;
    printf(" Movimentação da Peça Bispo: \n");
    Bispo(Peca2);
    
//Movendo a Rainha.
printf("\n");

    int Peca3 = 1;
    printf(" Movimentação da Peça Rainha: \n");
    Rainha(Peca3);

//Movendo o Cavalo.

    printf("\n");
    printf(" Movimentação da peça Cavalo:  \n");

    for (int j = 1; j > 0; j--)
    {

       for(int k = 0; k < 2; k++)
       {
        printf("Cima \n");

       }
       
    printf("Direita  \n");
    printf("\n");
    }
    return 0;
}