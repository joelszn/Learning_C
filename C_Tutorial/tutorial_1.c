//First Tutorial part_1

/* Multline
Comment */

// Single line comment

#include  <stdio.h>
#include <stdio.h>

#define MYNAME "Derek Banas"

//Global variables are defined outside of main
//gonna be accesible to every function
int globalVar = 100;

int main(){
//local variable only accesible to this fxn

char firstLetter = 'J';


int age = 38;

long int superBigNum = -327670000;

//up to 38 decimal pts
float pivalue = 3.14159;

double reallyBigPi = 3.1234432344532223;

//forces a line return
printf("\n");

printf("this will print to screen\n\n");

//conversion characters
//unlike java to include an integer in a print statement you must use
// '%d' and include the variable name separated by a comma like below
printf("I am %d years old\n\n", age);

//example of another conversion characters *long int
printf("Big number %ld\n\n", superBigNum);

//*float
//for float values after the % sign we the number of decimals we want to showup
printf("Pi = %.5f\n\n", pivalue);

//double
printf("Pi = %.15f\n\n", reallyBigPi);

//character
printf("The first letter in my name is %c\n\n", firstLetter);

//couple ways to print a string
printf("My Name is %s\n\n", "Joel");

//to create a string you have to create a character array
char myName[] = "Joel Duran";

//printf("My Name is %s\n\n", myName);

//you cannot just set another value to a character arry so
strcpy(myName, "Yovanny Duran");

printf("My Name is %s\n\n", myName);



return 0;

}
