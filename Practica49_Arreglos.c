#include <stdio.h>

int main(){
	int vector[100];
	int i=0;
	while(i<=100){
		vector[i]=i*2;
		printf("%d, ",vector[i]);
		i++;
	}
	system("Pause");
	return 0;
}
