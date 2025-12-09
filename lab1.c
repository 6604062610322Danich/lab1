#include <stdio.h>

int main(){
	
	float mid,final,q1,q2,lab,sit;
	float mid1,final1,q11,q21,lab1,sit1;
	float  sum;
	
	scanf ("%f %f %f %f %f %f", &mid,&final,&q1,&q2,&lab,&sit);
	
	mid1 = (mid*30)/100;
	final1 = (final*35)/120;
	q11 = (q1*12)/60;
	q21 = (q2*13)/60;
	lab1 = (lab*5)/16;
	sit1 = (sit*5)/16;
	sum = (mid1+final1+q11+q21+lab1+sit1);
	
	printf ("mid 	= %.1f => %.2f\n",mid,mid1);
	printf ("final   = %.1f => %.2f\n",final,final1);
	printf ("q1 	= %.1f => %.2f\n",q1,q11);
	printf ("q2 	= %.1f => %.2f\n",q2,q21);
	printf ("lab 	= %.1f => %.2f\n",lab,lab1);
	printf ("sit 	= %.1f => %.2f\n",sit,sit1);
	printf ("sum = %.2f",sum);
	
	return 0;
}
