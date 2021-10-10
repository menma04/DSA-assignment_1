// =============================================================
// Assignment I Q3
// Name: Chetana saikia
// Scholar Id; 2012026
// =============================================================



#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, *ar;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    ar = (int*)malloc(n*sizeof(int));

    printf("elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    int a, b;
    printf("No. of rows and columns: ");
    scanf("%d %d", &a, &b);

    if(a*b != n){
        printf("conversion is not possible!!!!!");
    }
    else{
        int k = 0;
        int arr2[a][b];
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                arr2[i][j] = ar[k];
                k++;
            }
        }

        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }

    }

    return 0;

}
