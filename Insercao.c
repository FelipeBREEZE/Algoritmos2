#include <stdio.h>
#include <stdlib.h>
/*INSERCAO*/

void insertion(int *A, int n) {
    int i, x, j;
for(i=1; j < n; j++){
    x = A[j];
    i = j-1;

while(i>=0 && A[i] > x){
    A[i+1] = A[i];
    i = i - 1;
    }
        A[i+1] = x;
}
}


int main(){   
    int A[]={4,7,2,3,1};
    int i;
    int n = 5;

insertion(A, n);
    for(i=0 ; i < n; i++){
       printf("> %d <\n", A[i]);
    }
    system("pause");   
}
