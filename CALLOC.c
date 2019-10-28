#include <stdio.h>
#include <stdlib.h>

//CALLOC!!!!!!!!!!!!!!!!!!!!!!!!!!!!


main() {

    int* p;
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
        printf("%d, ", p[i]);    
    }  
}
    system("pause");
    return 0;
    

}
