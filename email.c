// =============================================================
// Assignment I Q1
// Name: Chetana saikia
// Scholar Id; 2012026
// =============================================================
#include<stdio.h>

int main(){

    char em[500];
    printf("Enter email: ");
    scanf("%s",em);

    int temp = 0, C = 0, in = -1, indot = -1;

    for(int i = 0;em[i]!='\0';i++){
        if((em[i] >= 'A' && em[i] <= 'Z')
           || (em[i]>='a' && em[i]<='z')
           || (em[i]>='0' && em[i]<='9')
           || (em[i]=='.' || em[i]=='-'  || em[i]=='_' || em[i]=='@')
              && (i!=0 && em[i+1]!='\0')){
            temp = 1;
        }
        else{
            temp = 0;
            break;
        }
        if(em[i]=='@'){
            C++;
            in = i;
        }
        if(em[i]=='.'){
            indot = i;
        }
    }

    (temp && (indot - in) > 3 && C == 1) ? (printf("The email is valid\n")) : (printf("The email is not valid\n"));
    return 0;

}
