#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    printf("Enter a value for the length of array[]: ");
    scanf("%d", &x);

    int array[x];
    int product_array[x];
    int totalprod = 1;
    int i;

    for(i = 0; i < x; i++){
        printf("Enter a value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < x; i++){
        totalprod = totalprod * array[i];
    }

    for(i = 0; i < x; i++){
        product_array[i] = totalprod / array[i];
    }

    printf("Initial Array: [ ");
    for(i = 0; i < x-1; i++){
        printf("%d, ", array[i]);
    }
    printf("%d ]\n", array[i]);

    printf("New Array: [ ");
    for(i = 0; i < x-1; i++){
        printf("%d, ", product_array[i]);
    }
    printf("%d ]\n", product_array[i]);
    
    return 0;
}