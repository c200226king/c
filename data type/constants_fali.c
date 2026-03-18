#include <stdio.h>

int main(){
    // Trying to declare it and then assign a value using a separated 
    // statement will result in an error.
    const int num;
    num = 42;
    printf("%d", num);
    return 0;
}