#include<stdio.h>
int main()
{

	float eng,hin,mat,sci,sst,sum;
	char a;
	a='%';
	printf("enter the marks \n In english ");
	scanf("%f",&eng);
	printf("In Hindi ");
	scanf("%f",&hin);
	printf("In Maths ");
	scanf("%f",&mat);
	printf("In Science ");
	scanf("%f",&sci);	
	printf("In sst ");
	scanf("%f",&sst);
	sum=eng+hin+mat+sci+sst;
	printf("Your over all percentage is =%f%c ",sum/5,a);
	getch();
	
	return 0;

}
