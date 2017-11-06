//First Tutorial part_2

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
//scanf
char middleInitial;

printf("What is your middle initial? ");
scanf(" %c", &middleInitial);

printf("Middle Initial: %c\n\n", middleInitial);


return 0;

}
