#include <stdio.h>

int main(){
	float a,a1,b,b1,c,c1;
	scanf("%f",&a);
	a1 = (a*95)/100;
	printf("%.2f\n",a1);
	scanf("%f",&b);
	b1 = ((a+b)*85)/100;
	printf("%.2f\n",b1);
	scanf("%f",&c);
	c1 = ((a+b+c)*70)/100;
	printf("%.2f\n",c1);
	printf("Payment price %.2f\n",c1+((c1*7)/100));
	
	return 0;
}


