#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(((n%400)==0) || (((n%4)==0) && ((n%100)!=0)))
	printf("%d la nam nhuan",n);
	else if( n <= 0)
	printf("n ko hop le");
	else printf("%d ko phai la nam nhuan",n);
	return 0;
	}

