#include <stdio.h>
#include <stdlib.h>


int fat (int n){
    if(n==0){
             return 1;
             }
    else {
             return n * fat(n-1);
             }
}

int main(){
    
    int n;
    
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    
    printf("O valor de n eh: %d \n", fat(n));
    
    system("pause");   



}
