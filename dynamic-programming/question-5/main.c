#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a[2] = { 7, 14};

int k = 300;
int aux[300];


int length = (int)(sizeof(a)/sizeof(a[0]));



bool canSum(int target, int numbers[]){
    if(aux[target] == 25)
        return false;
    else if(aux[target] == 30)
        return true;

    if(target == 0)
        return true;
    if(target < 0)
        return false;

    for(int i = 0; i<length; i++){
        int remainder = target - numbers[i];
        if(canSum(remainder, a)){
            aux[target] = 30;
            return true;
        }
    }
    aux[target] = 25;
    return false;
}


int main(){
    aux[0] = 30;
    printf("for k = %d: %d \n", k,canSum(k, a));
}
