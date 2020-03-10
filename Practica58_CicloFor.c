#include <stdio.h>
int main(){
	int i;
	int j;
	int dimension=0;
	printf("Ingrese la dimension: ");
    scanf("%d", &dimension);
	
	for(i=0;i<dimension;i++){
		printf(" * \n",(dimension-1));
		for(j=0;j<=i;j++){
			printf(" * ");
		}
	}
	
	system("Pause");
	return 0;
}
