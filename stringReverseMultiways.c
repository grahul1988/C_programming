#include<stdio.h>
#include<string.h>


#define MAX_SIZE 100

void reverseStringUsingPtr(char *, int);

void reverseStringUsingPtr(char *str,int len)
{
	int start=0,end=len-1;
	char tempch;

	while(start <= end)
	{	
		tempch=*(str + start);
		*(str + start)=*(str + end);
		*(str + end)=tempch;

		end--;
		start++;

	}
}

void stringReverseUsingRecursion(char *str,int start, int end)
{
	char tempch;

	if(start >= end)
		return;
	
	tempch=*(str + start);
	*(str + start)=*(str + end);
	*(str + end)=tempch;

	stringReverseUsingRecursion(str,++start,--end);

}

void reverseWordsofString(char *start,char *end){

	char tempch;

	if(start >= end)
	return;

	tempch=*(str + start);
       	*(str + start)=*(str + end);
        *(str + end)=tempch;

	stringReverseUsingRecursion(str,++start,--end);

}

int main()
{
	char actualString[MAX_SIZE] , reverseString[MAX_SIZE];	
	int len=0;

	printf("Enter the string to reverse\n");
	fgets(actualString,MAX_SIZE,stdin);

	// one more way of reading string using scanf. here [] is the scanset character. ^\n tells to take input until newline is encounter
	// Then , with this %*c , it reads the newline character and here * indicates that this newline charecter is discarded.
	// scanf("%[^\n]%*c",actualString);
	// scanf("%[^\n]s",actualString);

	len=strlen(actualString);

	printf("string len in main: %d\n",len);
	
	printf("Actual String:%s \n",actualString);

	reverseStringUsingPtr(actualString,len);

	printf("Reverse string Using pointer:%s \n",actualString);
	
	stringReverseUsingRecursion(actualString,0,len-1);

	printf("Reverse string recursion:%s \n",actualString);
	
	
	int i=0;
	int start=0;
	int end=0;
	while(str[end] != '\0')
	{
		start=end;
 		while(str[end] != ' ')
		{	
			printf("inner while start:%d end%d\n",start,end);
			end++;
		}
		

	}
	

	return 0;
}
