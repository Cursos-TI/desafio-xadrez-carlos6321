#include  <stdio.h>
int main(){

int torre = 0, bispo = 0, rainha = 0;
int movecavalo = 1;

//move a torre 5 casas a direita
printf("Movendo a Torre\n");
for (torre = 0; torre <5; torre++) {
    printf("Direita\n");
}
//movendo o bispo 5 casas diagonal á cima e á direita
printf("\n Movendo o Bispo\n");

while (bispo < 5)
{
    printf("Cima, Direita\n");
    bispo++;
}
// movendo a rainha 8 casas a esquerda

printf("Movendo a Rainha\n");
do{
printf("Esquerda\n");
rainha++;
} while (rainha < 8);
rainha++;

// movimento do cavalo
printf("\n movendo o cavalo\n");

while (movecavalo--)
{
    for(int i = 0; i < 2; i++){
        printf("Baixo\n"); //imprime paracima 2x
    }
    printf("Direita\n"); //imprime para direitra 1x
}
return 0;

}



