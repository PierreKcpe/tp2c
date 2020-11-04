#include <stdio.h>

// nom de fichier : bits.c
// objectif : vérifie si les 4eme et 20eme bits de gauche sont 1 (en binaire). Si les deux bits sont 1, il affiche 1 sinon 0
// auteurs : Pierre KHETTAL & Younes ABOUCHI

int bit(int d){
    int bit20 = 524288;
    int bit4 = 32;
    if (d & bit20 && d & bit4){ // operation et logique sur le bit 20 (2^19 = 524288 )
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int d;
    printf("Entrer l'entier d \n");
    scanf("%d", &d);
    printf("%d", bit(d)); 
}
