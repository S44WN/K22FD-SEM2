// WAP to find total number of vowels in a given string
#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];int i,j,c=0;
	char v[]={'a','e','i','o','u','A','E','I','O','U'};
	gets(a);
	for(i=0;i<strlen(a);i++)
	{for(j=0;j<strlen(v);j++)
	{if(a[i]==v[j])
	c=c+1;
	}	
	}
	if(c==0)
	printf("No vowel");
	else
	printf("Total number of vowels = %d",c);
	
	
}
