#include <stdio.h>
#include <stdlib.h>

void intercala(int p, int q, int r, int *v) {

	int i, j, k, *w;
	w = malloc((r - p) * sizeof(int));
    i=p; j=q; k=0;

	while (i < q && j < r) {

		if (v[i] <= v[j])
			w[k++] = v[i++];
			
		else
			w[k++] = v[j++];
	}

	while (i < q)
		w[k++] = v[i++];
		
	while (j < r)
		w[k++] = v[j++];

	for (i = p; i < r; i++)
		v[i] = w[i - p];

	free(w);
}

    
void MergeSort(int p, int r, int v)
{
    if (p < r-1) {
        int q = (p+r)/2;
        MergeSort(p, q, v);
        MergeSort(q, r, v);
        intercala(p, q, r, v);    
    }
}
    

main() {

int v[] = {556,25254,78545,32135,54425357,875542,41,1,28,47,25};
int p = 0, q = 6, r=11;

MergeSort(p, r, v);
    
    for(p=0; p < r; p++){ 
        if(p == r-1){
            printf("%d. \t", v[p]);
        }
        else{
            printf("%d, ", v[p]);            
        }
    }
    


	system("pause");
	return 0;


}
