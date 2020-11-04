#include <stdio.h>

// nom de fichier : puissance.c
// objectif : affiche la valeur du nombre a élevé à une puissance b
// auteurs : Pierre KHETTAL & Younes ABOUCHI

int puissance(int a, int b){
    int resultat = a;
    for(int i= 1; i <b;i++)
    {
        resultat = resultat*a; //calcul de a^b
    }
    return resultat;
}
int main() {
    int a;
    int b;
    printf("Entrer l'entier a \n");
    scanf("%d", &a);
    printf("Entrer l'entier b \n");
    scanf("%d", &b);
    printf("%d", puissance(a,b)); 
}
