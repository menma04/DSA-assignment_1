// =============================================================
// Assignment I Q1
// Name: Chetana saikia
// Scholar Id; 2012026
// =============================================================

#include<stdio.h>
#include<string.h>

int main(){

    char NO[50];
    int temp = 0;
    int floatingPoint = 0;

    printf("Enter a number: ");
    scanf("%s",NO);

    for(int i = 0;NO[i] != '\0';i++ ){
        if(!temp && NO[i] == '.'){
            temp = 1;
        }
        else {
            (temp && (NO[i]>='0' && NO[i]<='9'))?(floatingPoint = 1):(floatingPoint = 0);
        }
    }

    if(floatingPoint){
        printf(" valid floating point.\n");
    }
    else{
        printf("not a valid floating point.\n");
    }

    return 0;

}
