#include <stdio.h>

// nom de fichier : chaine.c
// objectif : 1. copie une chaine de caractères dans une autre chaine de caractère
// 2. concatène deux chaines de caractères
// 3. calcule le nombre de caractères dans une autre chaine de caractères
// auteurs : Pierre KHETTAL & Younes ABOUCHI

void copy(char* dest, char* source){
    for(int i=0; i< 30; i++) //parcourt la chaine
    {
        dest[i]= source [i];
    }
}
void conca(char* chaine1, char* chaine2){
    int longueur;
    for(int i=0; i< 30; i++){
        if(chaine1[i]=='\0') //parcour la chaine1 jusqu'a arriver a la fin de celle ci
        {
            for(int j=0; j< 30; j++) //on rajoute a la fin de chaine1 la chaine2
            {
                chaine1[i+j]= chaine2 [j];
            }
            return;
        }
    }
}
int compte(char *source){
    int compte=0;
    for(int i=0; i<30;i++){ //parcourt la chaine et incremente a chaque fois compte
        if(source[i]!='\0'){
            compte++;
        }
        else{
            return compte;
        }
    }
}
int main() {
    char dest[] = "test";
    char source[] = "toto";
    printf("dest avant modif :%s\n",dest);
    printf("source avant modif : %s\n",source);

    copy(dest, source);
    printf("copie effectuee\n");
    printf("dest apres copie :%s\n",dest);
    printf("source  apres copie : %s\n",source);

    conca(dest,source);
    printf("conca effectuee\n");
    printf("dest apres conca :%s\n",dest);

    printf("la chaine %s contient %d caracteres\n",dest,compte(dest));
    return 0;
}
