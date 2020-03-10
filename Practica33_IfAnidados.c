#include <stdio.h>
#include <stdlib.h>

int main(){
	int antiguedad, sueldo;
	int x;
	puts("Ingresa los años de antigüedad");
	scanf("%d", &antiguedad);
	puts("Ingresa tu sueldo");
	scanf("%d", &sueldo);
	x=(sueldo * 100)/10;
	if(antiguedad>=5){
		if(x>1000){
		printf("¡Felicidades sujeto a un credito! \n");
		}	
	}
	printf("Lo sentimos... no sujeto a un credito \n");
	system("Pause");
	return 0;
	
}
