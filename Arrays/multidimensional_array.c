/*
Multidimensional Arrays
An array can have multiple dimensions(or indices) to represent a grid.
For example, imageine a ticketing program for a stadium that is storing
the seats, which have a row and column number.
Or a map, where wach square has 2 coordinates.

To create multidimensional arrays, place each array within its own set of
square brackets:
int ages[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}}
*/

#include <stdio.h>

int main(){
    int ages[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    printf("%d", ages[1][2]);
    
    return 0;
}