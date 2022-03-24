#include<stdio.h>


#define mysizeof(type) (char *)(&type+1) -(char*)(&type)

struct node {
	int data;
	struct node *nxt;
};


int main()
{
	double a;
	int b;
	char c;
	unsigned int d;	
	float f;
	struct node n;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	printf("double size: %ld\n",mysizeof(a));
	printf("int size: %ld\n",mysizeof(b));
	printf("char size: %ld\n",mysizeof(c));
	printf("unsigned int size: %ld\n",mysizeof(d));
	printf("float size: %ld\n",mysizeof(f));
	printf("struct size: %ld\n",mysizeof(n));
	
	printf("Number of Int array elements: %ld\n",((mysizeof(arr))/(mysizeof(arr[0]))));
	
	return 0;
}

