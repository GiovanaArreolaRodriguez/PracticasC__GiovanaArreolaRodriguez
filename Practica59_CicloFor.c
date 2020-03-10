#include <stdio.h>

int main(){
	int x,y,z;
	for(x=1;x<11;x++){
		printf("%d \t", x);
		for(y=2;y<11;y++){
			z=y*x;
			printf("%d \t", z);
		}
		printf("\n\n");
	}
	system("Pause");
	return 0;
}
