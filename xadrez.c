#include  <stdio.h>
int main(){

int torre = 0, bispo = 0, rainha = 0;

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
return 0;


}

