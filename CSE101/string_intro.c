// String:
// 	1)character array : char
// 	2) homogeneous
// 	3) static entity
// 	4) type of array
// 	5) collection of elements/ characters(each character :1byte)
// 	6) index 0 to n-1
// character set:
// 1) A-Z
// 2) a-z
// 3) 0-9
// 4) special symbols : $%^~*():<>_+?/
// 5) space: blank space, tab space.

char a : character char a[20] : string
									c_code = "CSE101" : string
															c_code = 'CSE101' : character

																					printf("hello by welcm") : text / string

																											   // 1)string declation
																											   char a[20]
																											   // 2) scan/constant
																											   //*) constant value
																											   char c_code[20] = "CSE101"; // string initialization
																																		   //**) input:
for (i = 0; i < n; i++)
	scanf("%c", &c_code[i]);
scanf("%s", c_code);
gets(c_code)

	// 3) print/logic
	for (i = 0; i < n; i++) // string traversing
	printf("%c", c_code[i]);
printf("%s", c_code);
puts(c_code)
