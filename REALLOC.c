#include <stdio.h>
#include <stdlib.h>

//REALLOC!!!!!!!!!!!!!!!!!!!!!!!!!!!!


main() {

    int* p;
    int* ptr;
    int n = 5, i, sum = 0;
    printf("Digite o numero de elementos:  %d\n", n);
   
    p = (int*)calloc(n, sizeof(int));
    
    if(p==NULL) {
        printf("Memoria nao alocada. \n");
        exit(0);
}
    else {
        printf("Memoria alocada com sucesso com calloc.\n");
        for (i=0; i < n; i++) {
            p[i] = i + 1;
    }  
    printf("Os elementos do vetor sao: ");
    for(i=0; i < n; i++) {
        printf("%d, ", ptr[i]);    
    }  
    printf("\n\n Digite o novo tamanho do vetor: %d \n", n);
    scanf("%d", &n);
    p = realloc(p, n * sizeof(int));
    printf("Memoria realocada com sucesso usando o realloc");
    for(i=5; i < n; i++){
        p[i] = i + 1;
    }
    printf("Os Elementos do vetor sao: ");
    for(i=0; i<n; i++) {
    printf("%d, ", p[i]);    
    }
    free(p);
}
    system("pause");
    return 0;
    

}
