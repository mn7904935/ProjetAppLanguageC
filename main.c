#include <stdio.h>
#include "menu.h"         
#include "programme1.h"  
#include "programme2.h"

int main() {
    int choix;
    
    afficherMenu(); 
    scanf("%d", &choix);
    if (choix == 1){
        programme1();
    }
    else if (choix == 2){
        programme2();
    
    }
    
    else {
        
    }
    
    return 0;
}
