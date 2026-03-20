#include <stdio.h>
/*
Now that we have our function defined, we can use it in our 
program by "calling" it.
To call a function, type its name followed by a set of 
parentheses.
For example, let's call our greeting() function in main().
*/
void greeting(){
    printf("Hello! \n");
    printf("I am an example function.");

}

int main(){
    greeting();
    return 0;
}