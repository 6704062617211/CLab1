#include<stdio.h>
int main() {
	int n1;
	int n2;
	printf("Type a n1: \n");
	scanf("%d" , &n1);
	
	printf("Type a n2: \n");
	scanf("%d" , &n2);
	
	if(n1>n2){
		printf("n1 is greater than n2");
		printf("\n%d",(n1-n2));
	} else {
		printf("n2 is greater than n1");
		printf("\n%d",(n2-n1));
	}
}