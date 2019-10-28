/*EX FUNCAO FIBONACCI*/
#include <stdio.h>

int funcao(int n) {
	if(n == 0 || n == 1)
		return n;
	else
	   if(n>=2)
	       return funcao(n - 1) + funcao(n - 2);
}

int main() {
	
int n = 6;

printf("Sequencia da funcao: %d \n", funcao(n));

	
	
	return 0;
}
