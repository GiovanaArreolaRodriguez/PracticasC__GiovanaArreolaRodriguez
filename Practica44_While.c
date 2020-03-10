#include <stdio.h>

int main(){
	 //imprimir numeros positivos menores a 100 excepto numeros divisibles entre 7 
	int numero =1;
		while(numero > 0 && numero <=100){
			if(numero%7!=0){
				printf("%d, ", numero);	
			}
		numero ++;
		}
	puts("Fin");
	system("Pause");
	return 0;
	
}
