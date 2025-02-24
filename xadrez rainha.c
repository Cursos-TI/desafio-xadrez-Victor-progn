#include <stdio.h>

void moverRainha (int casas) {
    if (casas > 0) {
        moverRainha(casas -1);
        printf("rainha para esquerda\n");
    }
    }
    
    int main(){
        moverRainha (8);
        return 0;
    }
    