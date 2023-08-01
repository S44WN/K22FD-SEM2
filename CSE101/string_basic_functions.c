// Basic functions in string header file
#include <string.h>
#include <stdio.h>
void main()
{
	char a[50], b[50];
	int h;
	printf("Input : ");
	gets(a);
	printf("\nNumber of elements : %d", strlen(a));
	printf("\nUpper case         : %s", strupr(a));
	printf("\nLower case         : %s", strlwr(a));
	printf("\nReverse string     : %s", strrev(a));
	strcpy(b, a);
	printf("\nB                  : %s", b);
	// strcpy(destination_var,source_var);
	strncpy(c, a, 6);
	// strncpy(destination_var,source_var,n);
	// printf("\nC                  : %s",c);

	// strcat(b,a);
	// strcat( destination_var,source_var);
	// printf("\nB                  : %s",b);
	// strncat(c,a,4);
	// strncat(destination_var,source_var,n);
	printf("\nC                  : %s", c);
	* /

		/*char f_name[50],l_name[50],c[]=" ";
		printf("First Name :");
		gets(f_name);
		printf("Last Name :");
		gets(l_name);
	   strcat(f_name,c);
		printf("\nStudent Name : %s",strcat(f_name,l_name));
		*/
		gets(a);	  // Cse101
	gets(b);		  // CSE101
	h = strcmp(a, b); // s>S
	printf("%d\n", h);
	h = strcmp(b, a); // S<s
	printf("%d\n", h);
	strcpy(b, a); // a=CSE101 b=CSE101
	h = strcmp(b, a);
	printf("%d", h);
}
/*
positive: first value>second value
negative: first value<second value
zero    : strings are identical

a=b
if(a==b)
*/
