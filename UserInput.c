#include <stdio.h>

int main (){

    int age;    //declaration parameter
    printf("\n How old are you?"); //print out text to require user input data
    scanf("%d", &age);     //receive data for keyboard and keep to parameter age

    printf("You are %d years old",age); //print out data from user input
    return 0;
}