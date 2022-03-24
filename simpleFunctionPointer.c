#include<stdio.h>

int add(int, int);
int substract(int,int);
int multiply(int,int);
int devide(int,int);

int add(int a,int b){

	return (a+b);
}

int substract(int a,int b){

	return (a-b);
}
int multiply(int a,int b){

	return (a*b);
}
int main()
{	
	int (*funptr[3])(int,int);
	funptr[0]=add;
	funptr[1]=substract;
	funptr[2]=multiply;

	int a=2,b=5;

	printf("Addition of a,b %d\n",funptr[0](a,b));
	printf("substration of a,b %d\n",funptr[1](a,b));
	printf("multiplication of a,b %d\n",funptr[2](a,b));

	return 0;
}
