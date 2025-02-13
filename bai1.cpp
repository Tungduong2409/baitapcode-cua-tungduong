#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("Gia tri cua a lon hon b");
	}
	else if(a==b){
		printf("Gia tri cua a bang b");
	}
	else printf("Gia tri cua b lon hon a");
	return 0;
}

