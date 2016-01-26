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

int acquisisciNumeroCompresoTraValori(int inserimentoMinimoConsentito, int inserimentoMassimoConsentito) {
    int inserimento;
    scanf("%d", &inserimento);
    while ((inserimento < inserimentoMinimoConsentito) || (inserimento > inserimentoMassimoConsentito)) {
        printf("'%d' non e' un inserimento valido. Inserisci un valore compreso tra %d e %d: ", inserimento, inserimentoMinimoConsentito, inserimentoMassimoConsentito);
        scanf("%d", &inserimento);
    }
    return inserimento;
}

void inserireNuovoMedico(struct Medico medici[]) {
    printf("Inserisci nome: ");
}

void mostraMenu(struct Medico medici[]) {
    char opzioni[][80] = {
        "Inserisci nuovo medico",
        "Modifica dati medico",
        "Elimina medico",
        "Visualizza medici",
    };
    
    int numeroOpzioni = 4, i = 0;
    
    puts("------------------------------------");
    for (i = 0; i < numeroOpzioni; i++) {
        printf("| %d | %s\n", i+1, opzioni[i]);
    }
    puts("------------------------------------");
    
    
    printf("Seleziona un'opzione del menu: ");
    int sceltaMenu = acquisisciNumeroCompresoTraValori(1, numeroOpzioni);
    
    switch (sceltaMenu) {
        case 1:
            inserireNuovoMedico(medici);
            break;
        default:
            break;
    }
}

int main() {
    struct Medico medici[80];
    
    while (1) {
        mostraMenu(medici);
    }
    return 0;
}