#include <stdio.h>
#include <stdlib.h>

void swap(int *A, int *B){

    int temp=0;
    temp = *A;
    *A = *B;
    *B = temp;
}

int main() {
    
    int A, B;
    
    printf("Enter the value of A\n");
    scanf("%d", &A);
    printf("Enter the value of B\n");
    scanf("%d", &B);

    swap(&A, &B);
    printf("The swapped values is: A: %d B: %d\n", A, B);

    return 0;
}