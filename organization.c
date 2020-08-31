#include<stdio.h>
#include<malloc.h>
#include <string.h>

int main (int argc, char *arg[])
{

int cost = 0;
int count = 0;
int sum = 0;
char *book[100];
char *thing = malloc (sizeof(char)*100);
for(int k = 0; k<10; k++){
book[k] = malloc (sizeof(char)*100);
}
int price[10];
for (int i = 0; i<10; i++){
printf ("Enter the price for the books.");
fscanf(stdin, "%d", &cost);
price[count] = cost;
count = count + 1;
printf ("You entered %d\n", cost);
}

count = 0;
printf("10 values have been entered.");

for (int x = 0; x<10; x++){
printf ("Enter the title of the books.");
fscanf(stdin, "%c", thing);
strcpy (book[x], thing );
printf ("You entered %s\n", book[x]);
}

printf("The prices of the books;");
for(int y = 0; y<10;y++){
printf("%d ", price[y]);
}

printf("The titles of the books;");
for(int z = 0; z<10; z++){
printf("%s", book[z]);
}

for(int e = 0; e < 10; e++){
sum = sum + price[e];
}

printf("The Inventory Total is %d\n", sum);
return 0;
}

