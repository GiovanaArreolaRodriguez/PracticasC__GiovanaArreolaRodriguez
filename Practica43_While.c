#include <stdio.h>

int main(){
	 //Numeros divisibles entre 2 y 7 
	int numero =1;
		while(numero > 0 && numero <=1000){
			if(numero%2==0 & numero%7==0){
				printf("%d, ", numero);	
			}
		numero ++;
		}
	puts("Fin");
	system("Pause");
	return 0;
	
}
