#include <stdio.h>

int main(int argc, char *argv[])
{

int i;
double bill;
double one = 24.90;
double two = 17.32;
double three = 75.78;
double four = 5412.50;
	while (i != 0){
	printf ( "Enter a order 1-4 and 0 to finalize purchase: ");
	fscanf (stdin, "%d", &i);
	printf ("Your ordered number %d\n", i);

	if(i == 1){
	bill = bill + one;
	}

	if (i == 2){
	bill = bill + two;
	}

	if (i == 3){
	bill = bill + three;
	}

	if (i == 4){
	bill = bill + four;
	}

	printf ("Your current bill is %f\n including tax", bill);
	}
	bill = bill + bill*0.20;
	printf ("Your final bill is %f\n with tip and tax included", bill);
	}
