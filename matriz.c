#include <stdio.h>

void main(){

int matriz3x3 [3] [3]= {{1, 6, 9},
                        {5 , 2, 4},
                        {7 ,0 ,1}};

for(int i = 0; i < 3;i++){
    for(int j = 0; j < 3; j++){
        printf(" %i ", matriz3x3[i] [j]);
        
    }
    printf("\n");

    
}
}