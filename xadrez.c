#include<stdio.h>

void movertorre(int casas){
if(casas > 0){
    
    printf("Direita\n");
    movertorre(casas -1);
}
}

void movebispo(int casas){
    if (casas > 0){
        
        printf("Cima, Direita\n");
        movebispo(casas-1);
    }
}
void moverainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverainha(casas-1);
    }
}
void movercavalo(int casas){
    if (casas > 0){
        printf("Cima\n");
        movercavalo(casas-1);
    }
}

int main(){
    printf("******Bem vindo ao Xadrex******\n");
    printf("\n****Bom Jogo****\n");

    printf("\nMovimento da Torre\n");
movertorre (5);

    printf("\nMovimento do Bispo\n");
movebispo (5);

printf("\nMovimento da Rainha\n");
moverainha (8);

printf("\nMovimento do cavalo\n");
movercavalo (2);
printf("Direita\n");

return 0;

}