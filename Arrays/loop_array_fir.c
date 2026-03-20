#include <stdio.h>
/*
We can use a loop to iterate over the items of an array.
For example, let's simply output all the items using a for loop:
*/
int main(){
    int ages[] = {31, 18, 24, 55, 29};

    for(int i = 0; i < 5; i++){
        printf("%d \n", ages[i]);
    }
    return 0;
}