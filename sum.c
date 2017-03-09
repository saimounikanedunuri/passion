/*read numbers x1,y1 ,display sum with no.s , o/p : x1=67.345,x2=45.213,x3=114.558*/
/*sum.c*/
#include<stdio.h>
main()
{
	float x1,y1,z;
	printf("enter x1 and y1");
	/*read variables by scanf*/
	scanf("%f%f",&x1,&y1);
	printf("x1=%10.3f\n",x1);
	printf("y1=%10.3f\n",y1);
	
	printf("sum=%10.3f\n",x1+y1);
}
