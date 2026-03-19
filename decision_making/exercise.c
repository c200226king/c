#include <stdio.h>

int main(){
    float bmi;
    scanf("%f", &bmi);

    if(bmi>25){
        printf("Overweight");
    }
    else if(bmi < 18.5){
        printf("Underweight");
    }
    else{
        printf("Normal");
    }
    
    return 0;
}