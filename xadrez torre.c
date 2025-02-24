#include <stdio.h>

void moverTorre (int casas) {
    if (casas > 0) {
        moverTorre(casas -1);
        printf("torre direita\n");
    }
    }
    
    int main(){
        moverTorre (5);
        return 0;
    }
    