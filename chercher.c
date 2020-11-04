#include <stdio.h>
// nom de fichier : chercher.c
// objectif : créer un tableau de 10 phrases puis, cherchez si une phrase est dans le tableau ou pas
// auteurs : Pierre KHETTAL & Younes ABOUCHI

void contientPhrase(char* tab[], char* phrase){
    int j=0;
    int res=0;
    for(int i=0; i<10; i++) //boucle qui parcourt le tableau de phrase
    {      
        while (phrase[j] != '\0' || tab[i][j]!= '\0') // boucle qui parcourt les phrases
        {
            if(tab[i][j]!=phrase[j]) //Si il y a une difference on sort de la boucle
            {
                break;
            }
            j++;
        }
        if(phrase[j] != '\0' == tab[i][j]!= '\0'){ // quand les deux phrases sont identiques
            res =1;
            break;
        }
        j=0;
    }
    if(res){ //affiche le resultat
        printf("phrase comprise dans le tableau \n");
    }
    else {
        printf("phrase absente \n");
    }
}
int main() {
    char* tab[10] = {"une premiere phrase",
    "une deuxieme phrase",
    "une troisieme phrase",
    "une quatrieme phrase",
    "une cinquieme phrase",
    "une sixieme phrase",
    "une septieme phrase",
    "une huitieme phrase",
    "une neuvieme phrase",
    "une dixieme phrase",};
    char * phrase1 = "une deuxieme phrase";
    char * phrase2 = "une autre phrase";

    contientPhrase(tab,phrase1);
    contientPhrase(tab,phrase2);
    return 0;
}
