#include <stdio.h>

int main(){
    char name[50];
    /*
    Note, that we don't need the & symbol before the variable in scanf(),be
    cause the variable is a char array.
    */
    scanf("%s", name);
    printf("%s", name);
    return 0;
}