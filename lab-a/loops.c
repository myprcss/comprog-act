#include <stdio.h>
#include <stdlib.h>

//VALLE, PRECIOUS KARYL Q. DIT 1-2

 int main(){
printf("Using while loop to print numbers from 1 to 10\n");
    int a = 1;
    while (a <= 15){
        printf(" %d ", a);
     a++;}
printf("\n");
printf("\n");
printf("Using for loop to print even numbers from 2 to 20\n");
    int b;
    for(b = 20; b >= 2; b -=2){
        printf(" %d ", b);
    }
printf("\n");
printf("\n");
printf("Using do-loop to print numbers from 1 to 5\n");
    int c = 1;
    do{
        printf(" %d ", c);
        c++;
    }
    while (c<=10);
printf("\n");
printf("\n");
    return 0;
}


