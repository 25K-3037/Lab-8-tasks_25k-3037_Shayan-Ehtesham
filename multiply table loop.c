#include <stdio.h>
int main(){
	
	int num,i,j;
	printf("Enter your number");
	scanf("%d", &num);
	for (i=1; i<=num; i++){
		for (j=1 ; j<=10; j++){
		printf("%4d ", i*j);
			
		}
		printf("\n");
	}
	
	return 0;
}
