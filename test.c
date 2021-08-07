#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char *argv[])
{
	int	i;
	char*	string;
	char*	strarray[10];

	string = strdup("things");
	printf ("%s\n", string);

	for (i=0; i<10; i++)
	{
		// Allocate enough space for 5 digit indices
		// e.g., things(65535)
		strarray[i] = malloc(sizeof(string) + 7);
		// Copy it all in
		sprintf (strarray[i], "%s(%d)", string, i);
		//This does not print to console. What it does is take the "string" in " " and store it onto the array.
	}

	for (i=0; i<10; i++)
		printf ("%s\n", strarray[i]);
}
