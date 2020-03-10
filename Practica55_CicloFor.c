#include <stdio.h>

int main(){
	int i=0, n;
	int num, suma;
	
	scanf("Dime un numero %d", &n);
	for(i=0;i<n;i++){
		printf("%d, ", &num);
		suma=suma+num;
	}
	printf("La suma vale: %d, ", suma);
	system("Pause");
	return 0;
}
