#include <stdio.h>

int main(){
	 //Multiplos de 3 
	int numero =1;
		while(numero > 0 && numero <=1000){
			if(numero%3==0){
				printf("%d, ", numero);	
			}
		numero ++;
		}
	puts("Fin");
	system("Pause");
	return 0;
	
}
