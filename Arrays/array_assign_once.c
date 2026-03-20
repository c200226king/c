#include <stdio.h>
// If you already know what values to store in the array, insted of 
// assigning them one by one, you can use the flllowing syntax:

/*
Place the values in a comma-separated list, enclosed in curly braces.
The code below automatically creates an array containing 5
items, and stores the provided values.
*/
int main(){
    int ages[] = {31, 18, 24, 55, 29};

    printf("%d", ages[2]);

    return 0;
}