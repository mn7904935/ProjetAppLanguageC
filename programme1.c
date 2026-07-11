#include <stdio.h>
#include "programme1.h" 
#include "menu.h" 
int confirmer_sortie(void);

void programme1() {
    int i, nombre;
    float tabNotes[5];
    

    printf("Menu\n");
    printf("programme_1\n");
    printf("Entrez les notes de toutes les filles\n");
    
    printf("Entrez le nombre n de moyenne à saisir\n");
    scanf("%d",&nombre);
    for(i = 0; i < nombre; i++) {
        printf("les moyennes des eleves sont %d\n", i + 1); 
        scanf("%f", &tabNotes[i]);
		 
    }
    for  (i = 0; i < nombre; i++)  { 
    
    printf("Les notes saisies sont : %.2f\n", 
          &tabNotes[i]);}
 afficherMenu1();
 int choix;
 scanf("%d",&choix);
 if(choix==6){
 confirmer_sortie();
 }
	
void afficher_reussi(float notes[], int nombre)
{
    int i;

    printf("\nMoyennes des filles ayant reussi (>= 6.0) :\n");

    for (i = 0; i < nombre; i++)
    {
        if (notes[i] >= 6.0)
        {
            printf("  Eleve %d : %.2f\n", i + 1, notes[i]);
        }
    }
}

// Demande "es-tu sur ?" avant de quitter le programme
int confirmer_sortie(void)
{
    int reponse;
    printf("\nVoulez-vous vraiment quitter ? (1 = OUI, autre = NON) : ");
    scanf("%d", &reponse);

    if (reponse == 1)
    {
    	printf("\nMerci d'avoir utiliser mon application !");
        return 1; // oui, on quitte
    }
    else
    {
        return 0; // non, on reste
    }
}
}
