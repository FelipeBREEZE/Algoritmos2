#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int listaencad(No *inicio, int x){
    for(i=0; i<
//PONTEIRO AUXILIAR!!!!!!!
    return &No;
    }

struct TipoNo {
    int conteudo;
    struct TipoNo* prox;    
};

typedef struct TipoNo No;

void imprime (No *inicio) {
    No *p;
    for(p = inicio; p != NULL; p = p->prox)
        printf("%d\n", p->conteudo);   
}

No* insere (No* inicio, int i)
{
    No* novo = (No*)malloc(sizeof(No));
    novo->conteudo = i;
    novo->prox= inicio;
    return novo;
}

int main() {
    No *n0, *n1, *n2;
    n0 = (No*) malloc(sizeof(No));
    n1 = (No*) malloc(sizeof(No));
    n2 = (No*) malloc(sizeof(No));

    
    n0->conteudo = 3;
    n0->prox = n1;
    n1->conteudo = 5;
    n1->prox = n2;
    n2->conteudo = 9;
    n2->prox = NULL;
    
    
    n0 = insere(n0, 10000000000000000000000);
    
    imprime(n0);
    
    free(n0);
        free(n1);
            free(n2);
    
    system("pause");
}


