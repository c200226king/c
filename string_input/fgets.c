/*
In case we need to take ultiple words as input, we 
can use the fgets() function.
Here is the syntax:

*/
#include <stdio.h>
/*
It has 3 parts: the variable to store the input, the maximum size,
and the stdin keywaord, which tells to take the input from the 
user.
*/
int main(){
    char name[50];
    fgets(name, 50, stdin);

    printf("Hi %s.", name);

    char desc[100];
    fgets(desc, 100, stdin);

    return 0;
}