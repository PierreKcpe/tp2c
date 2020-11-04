#include <stdio.h>

// nom de fichier : fibonacci.c
// objectif :  affiche les n termes de la suite de Fibonacci
// auteurs : Pierre KHETTAL & Younes ABOUCHI

void fibo(int n){
    int prochainTerme;
    int terme1 = 1;
    int terme2 = 1;
    printf("U0= %d\n",terme1);
    printf("U1= %d\n",terme2);
    for(int i=0; i <= n ;i++){
        prochainTerme = terme1 + terme2; //calcul du prochain terme
        printf("U%d = %d \n",i,prochainTerme);
        terme1=terme2; //echange des variables anticipés pour le calcul futur du prochain terme
        terme2=prochainTerme;
    }
}
int main() {
    int n = 0;
    printf("Entrer l'entier n\n");
    scanf("%d", &n);
    fibo(n);
    return 0;
}
