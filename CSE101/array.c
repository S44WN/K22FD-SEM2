#include <stdio.h>

int declareArray()
{
    // float n[7];
    int n[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", n[i]);
    }
}

int initializeArray()
{
    // different ways to initialize array
    int a[5] = {1, 2, 3, 4, 5}; // 1 2 3 4 5
    int b[] = {1, 2, 3, 4, 5};  // 1 2 3 4 5
    int c[5] = {1, 2, 3};       // 1 2 3 0 0
    int d[5] = {};              // 0 0 0 0 0
    int e[5];                   // 0 0 0 0 0
}

// what is garbage value in array? - random value in array element
int garbageValue()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

// output
//  0 0 0 0 0

// traversing array

int traverseArray()
{
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]); // 1 2 3 4 5
    }
}

// array as function argument

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

// what is base address of array and element address - base address is address of first element
//  array and element address is address of ith element of array

int baseAddress()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d ", a);     // 1000
    printf("%d ", &a[0]); // 1000
    printf("%d ", &a[1]); // 1004
    printf("%d ", &a[2]); // 1008
    printf("%d ", &a[3]); // 1012
    printf("%d ", &a[4]); // 1016
}

// what is size of array - size of array is size of all elements of array
// size of array is n * size of data type of array

int sizeOfArray()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d ", sizeof(a));                // 20
    printf("%d ", sizeof(a[0]));             // 4
    printf("%d ", sizeof(a) / sizeof(a[0])); // 5
}

// what is difference between array and pointer - array is collection of similar data type and pointer is collection of address of similar data type
// array is collection of similar data type and pointer is collection of address of similar data type

int differenceArrayPointer()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("%d ", a);     // 1000
    printf("%d ", &a[0]); // 1000
    printf("%d ", &a[1]); // 1004
    printf("%d ", &a[2]); // 1008
    printf("%d ", &a[3]); // 1012
    printf("%d ", &a[4]); // 1016
    printf("%d ", p);     // 1000
    printf("%d ", &p[0]); // 1000
    printf("%d ", &p[1]); // 1004
    printf("%d ", &p[2]); // 1008
    printf("%d ", &p[3]); // 1012
    printf("%d ", &p[4]); // 1016
}

// average of array
int averageOfArray()
{
    float a[10];
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("%d ", sum / 10);
}

int customArray()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    char a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%c ", a[i]);
    }

    // swap first and last element of array
    char temp = a[0];
    a[0] = a[size - 1];
    a[size - 1] = temp;

    for (int i = 0; i < size; i++)
    {
        printf("%c ", a[i]);
    }
}

// find largest element in an array

int largestElement()
{
    float a[10];
    float largest = a[0];
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("%f ", largest);
}

int smallestElement()
{
    float a[10];
    float smallest = a[0];
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("%f ", smallest);
}

// two dimensional array

int twoDimArray()
{
    float a[3][2] = {1, 2, 3, 4, 5, 6};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);  //
            printf("%d\t", &a[i][j]); // prints address
        }
        printf("\n");
    }
}

// print sum of two dimensional array

int sumOfTwoDimArray()
{
    float a[3][2] = {1, 2, 3, 4, 5, 6};
    int i, j;
    float sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }
    }
    printf("%f ", sum);
}

// find largest element in two dimensional array

int largestElementTwoDimArray()
{
    float a[3][2] = {1, 2, 3, 4, 5, 6};
    int i, j;
    float largest = a[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }
    printf("%f ", largest);
}

// find sum of two matrices

int sumOfTwoMatrices()
{
    float a[3][2] = {1, 2, 3, 4, 5, 6};
    float b[3][2] = {1, 2, 3, 4, 5, 6};
    int i, j;
    float sum[3][2];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%f ", sum[i][j]);
        }
        printf("\n");
    }
}

// insertion in array

int insertionInArray()
{
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int index, element;
    printf("Enter index and element: ");
    scanf("%d %d", &index, &element);

    for (int i = size - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = element;
    size += 1;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

// deletion in array

int deletionInArray()
{
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int index;
    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = index; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size -= 1;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

// linear search in array

int linearSearch()
{
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element;
    printf("Enter element: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            printf("Element found at index %d", i);
            break;
        }
    }
}

// linear search in character array

int linearSearchChar()
{
    char a[10] = {'a', 'b', 'c', 'd', 'e'};
    int size = 5;
    char element;
    printf("Enter element: ");
    scanf("%c", &element);

    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            printf("Element found at index %d", i);
            break;
        }
    }
}

// binary search

int binarysearch()
{
    float a[10], key;
    int i;

    printf("Enter the sorted data in an array : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }

    printf("Enter the float to search : ");
    sacnf("%f", &key);

    int low = 0, high = 9, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == a[mid])
        {
            printf("The float is found at position %d", mid + 1);
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
    }

    if (low > high)
    {
        printf("The float is not found");
    }
}

int main()
{
    // declareArray();
    // initializeArray();
    // garbageValue();
    // traverseArray();
    // printf("%d ", sum(a, 5));
    // baseAddress();
    // sizeOfArray();
    // differenceArrayPointer();
    // averageOfArray();
    // customArray();
    // largestElement();
    // smallestElement();
    // twoDimArray();
    // sumOfTwoDimArray();
    // largestElementTwoDimArray();
    // sumOfTwoMatrices();
    // insertionInArray();
    // deletionInArray();

    return 0;
}
