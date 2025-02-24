#include <stdio.h>

void moverBispo (int casas) {
    if (casas > 0) {
        moverBispo(casas -1);
        printf("bispo diagonal superior direita\n");
    }
    }
    
    int main(){
        moverBispo (5);
        return 0;
    }
    