#include <stdio.h>

int main() {
    int num = 42;
    int num2 = 40;
    char c = 'R';
    
    printf("Valor de num2: %d \n", num2);
    printf("Endereco de num2: %d  \n\n", &num2);  
    
    printf("Valor de num: %d \n", num);
    printf("Endereco de num: %d  \n\n", &num);  
    
    printf("Valor de c: %c \n", c);
    printf("Endereco de c: %d  \n\n", &c);
    
    system("pause");   
    return(0);
}
