#include <stdio.h>
#include <stdio.h>

void reversearray(int array[], int size){
    int first = 0;
    int last = size - 1;
    while(first<last){
        
        int temp = array[first];
        array[first] =  array[last];
        array[last] = temp;
        
        first++;
        last--;
    }
}

int main() {
    
    int N;
    scanf("%d", &N);
    
    int array[N];
    
    for(int i = 0; i<N; i++){
        scanf("%d", &array[i]);
    }
    
    reversearray(array, N);
    
    printf("array = [");
    for(int i = 0; i<N; i++){
        if(i == (N-1)){
        printf("%d]", array[i]);
        }
        else{
        printf("%d,", array[i]);
        }
    }

    return 0;
}          
