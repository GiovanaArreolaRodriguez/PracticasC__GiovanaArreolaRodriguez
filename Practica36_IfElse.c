#include <stdio.h>

int main(){
    int hst;
	int ph;
	int salSema, salSema1;
	printf("Ingrese horas trabajadas \n ");
	scanf("%d", &hst);
    printf("Ingrese el sueldo por hora \n");
    scanf("%d", &ph);
	if(hst<=40){
		salSema=(hst*ph);
		printf("Salario: %d \n", salSema);
	}
	else{
		salSema1=(40*ph+(ph*1.5*(hst-40)));
		printf("Salario: %d \n", salSema1);
	}
	system("Pause");
	return 0;

}
