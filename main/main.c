#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arvoreB.h"


int main(void){
    int i, quantidade, valor;
    NodeB *arvore = criar();
    
    scanf("%d", &quantidade);
    
    for(i=0; i < quantidade; i++){
        scanf("%d", &valor);
        arvore = inserir(arvore, valor);
    }
    
    printf("%d", media_paginas_folhas(arvore));
    
    return 0;
}