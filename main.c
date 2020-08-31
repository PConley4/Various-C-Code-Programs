#include <stdio.h>
#include <stdlib.h>

int main()
{
int input;
printf ("What is the input file?: ");
        fscanf(stdin, "%d", input);
printf ("What is the input file?: ");
        fscanf(stdin, "%d", input);
int arr[input];
int *ptr = arr;

printf("%p\n", ptr);
return 0;
}
