
#include <stdio.h>
#include <stdlib.h>

void selection(int *vet, int n, int i){
	int menor, j, aux;
	for(i = 0; i <= n; i++){
		menor = i;
		for(j = i+1; j < n; j++){
			if(vet[j] < vet[menor])
				menor = j;
		}
		aux = vet[i];
    	vet[i] = vet[menor];
    	vet[menor] = aux;
	}
}


int main() {
	int vet[] = {4, 7, 2, 3, 1}, n = 5, i;

	selection(vet, n, i);

	for(i = 0; i < n; i++){
		printf("%d, ", vet[i]);
	}
    system("pause");
  	return 0;
}
