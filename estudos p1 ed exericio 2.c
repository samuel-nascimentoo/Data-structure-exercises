#include <stdio.h>
#include <stdlib.h>
//recursive function to sum the pairs from 1 to x.
int sum_pairs(int x){
    
    if(x<=1){
        return 0;
    }
    else if (x%2 == 0){
    return x + sum_pairs(x-2);
    }
    else {
        return sum_pairs(x-1);
    }
}

int main(){
     int n;
     printf("Enter an integer.\n");
     scanf("%d", &n);
    
     printf("the sum of all pairs is: %d\n", sum_pairs(n));
    
    
    
    return 0;
}