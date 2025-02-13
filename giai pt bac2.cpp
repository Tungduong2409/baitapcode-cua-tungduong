#include <stdio.h>
#include<math.h>
//giai pt bac 2 dang ax^2+bx+c=0
int main(){
	int a,b,c;
	printf("Nhap a b c :");
	scanf("%d %d %d", &a, &b, &c);
	if (a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}
			else printf("Phuong trinh vo nghiem");
		}
		printf("Phuong trinh co nghiem x = %.2f", -c/b);
	}
	float delta = b*b-4*a*c;
	if(delta>0){
		float x1 = (-b+sqrt(delta))/(2*a);
		float x2 = (-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet x1= %.2f, x2 = %.2f", x1, x2);
	}
		else if(delta==0){
			float x0 = -b/(2*a);
			printf("Phuong trinh co nghiem kep x0 = %.2f",x0);
			}
			else printf("Phuong trinh vo nghiem");
	return 0;
} 
