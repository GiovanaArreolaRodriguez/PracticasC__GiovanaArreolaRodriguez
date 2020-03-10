#include <stdio.h>
#include<stdlib.h>

int main(){
	int a[20];
	int i=0;
	while(i<20){
		a[i]=3;
		i++;
	}
	printf("%d \n", (a[i]+a[i])/20);
	printf("%d \n", a[i]*a[i]);
	system("Pause");
		return 0;
}
