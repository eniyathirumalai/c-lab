#include <stdio.h>
#include <stdbool.h>
int main()
{
	float m[5]={78,94,58,75,63};
	float tot,avg;
    bool result;
	printf ("\t \t \t BCA-A \n");
	printf ("---------------------------------------------");
	printf ("Name: GOWRI \t \t \t Reg no: 13579\n");
	printf ("---------------------------------------------");
	printf ("Tamil= \t \t \t \t \t   %5.2f \n",m[0]);
	printf ("English=\t \t \t \t \t %5.2f \n",m[1]);
	printf ("Maths= \t \t \t \t \t %5.2f \n",m[2]);
	printf ("Science=\t \t \t \t \t  %5.2f\n",m[3]);
	printf ("Social=\t \t \t \t \t  %5.2f \n",m[4]);
	tot=m[0]+m[1]+m[2]+m[3]+m[4];
	avg=tot/5;
	if (avg>50)
	result=true;
	printf ("---------------------------------------------");
	printf ("tot=%5.2f \t \t \t \t \t  avg=%5.2f \t \t result=5.2f",tot,avg,result);
	if (result==true)
	printf("Pass");
	else
	printf("Fail");	
}
