#include<stdio.h>

void swap(int*,int*);

void swap(int *num1,int *num2){

	int temp=*num1;
	*num1=*num2;
	*num2=temp;

}

int main()
{
	int a=2,b=5;
	printf("before swap: a=%d b=%d \n",a,b);
	swap(&a,&b);
	printf("after swap: a=%d b=%d \n",a,b);
	return 0;
}
