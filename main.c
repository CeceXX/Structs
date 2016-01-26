//
//  main.c
//  Structs
//
//  Created by Cesare de Cal on 26/01/16.
//  Copyright © 2016 Cesare Gianfilippo Astianatte. All rights reserved.
//

#include <stdio.h>

struct Medico {
    char nome[80];
    char cognome[80];
    char luogoNascita[80];
    int codice;
    int numeroPazienti;
    int numeroMassimoPazienti;
};

void inserireNuovoMedico() {
}

void mostraMenu(struct Medico medici[]) {
    char opzioni[][80] = {
        "Inserisci nuovo medico",
        "Modifica dati medico",
        "Elimina medico",
        "Visualizza medici",
    };
    
    int numeroOpzioni = 4, i = 0, sceltaMenu;
    
    puts("------------------------------------");
    for (i = 0; i < numeroOpzioni; i++) {
        printf("| %d | %s\n", i+1, opzioni[i]);
    }
    puts("------------------------------------");

    printf("Seleziona un'opzione del menu: ");
    scanf("%d", &sceltaMenu);
}

int main() {
    struct Medico medici[80];
    
    while (1) {
        mostraMenu(medici);
    }
    return 0;
}