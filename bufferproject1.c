#include <stdio.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

int input;
int inputcell;
int buffer[];//this is all filled with zeros at first
//the user is meant to input the size but for now, it will be set.

int inputpro1;
int inputpro2;
int inputcon1;
int inputcon2;

//counters for the amount of items produced and consumed collectively. Increments each time a process is done.

int counter = 0;
int fullorempty = 0; //goes 0, empty, 1 neither, 2 full
//Later on in the program, there will be a for loop that goes through all of the array. That for loop will add to this counter
//all of the cell amounts. If it is zero, the buffer is empty. If it is not zero, then it is neither full or empty. If it is

void *pro(void *param);
void *con(void *param);

int *p;
/*POINTER for producer's location in the array
fills the slots in increasing order. when the end of the buffer is reached, go back to the start (0)
*/

int *c;
/*POINTER for consumer's location in the array.
empties the slots following the producer. when the end of the buffer is reached, jump to start (0)
*/

//a test producer. fills the first slot in the buffer and prints it.
int produce1(){
    //ask where to start
    if(inputcell == input){ // if the end of the buffer is reached, bring it to the front.
        inputcell = 0;
    }

     p = buffer[inputcell];

    if(buffer[inputcell] <= 0){  //if the cell contains zero, make a one.
    buffer[inputcell] = 1;
    }

    printf("%d\n", p);
    *p++;               //move the pointer up 1.

}

//A CONSUMER. having the consumer going through the array. This will sleep when the buffer is empty.
/*
while ()){  //the current pointer/space in the array is NOT empty (greater than 1)
    c += 1; //the SPACE in the array is empty.
    //itemsConsumed += 1; // cannot exceed itemsProduced.
    buffer[*c]++ ; // moves the consumer's pointer forward
}
*/

int main(int args, char *argv[]){
//asking for array size
printf ("What is the size?: ");
    fscanf(stdin, "%d\n", input);
//making all the slots equal to 0
int buffer[input];//this is all filled with zeros at first
//the user is meant to input the size but for now, it will be set.

for(int j = 0; j < input; j++){
    counter = 0;
    if (buffer[j] > 0){         //if the cell is not zero, add 1 to the counter
     counter++;
    }
}
   if (counter = 0){               //if the counter is zero, fullorempty is 0, meaning the buffer is empty.
        produce1()
    }
    else if (counter >= input){      //if the counter is 100(this should be the length of the array) or more, fullorempty is 0, meaning the buffer is full.
    }
    else if (counter > 0 && counter < input){
        produce1();
    }

//this is NOT counting the amount in the array. It only adds 1 for each cell that has something in it. What this does is make a process that
//allows variables to act as a check for whether the buffer is full or empty.

//use pointers to access the array.

//make a while the buffer is NOT full, repeat this producer
//void *pro(void *param){
produce1();                  //alone, this prints the address as all zeros...but does not print here
//}

}
