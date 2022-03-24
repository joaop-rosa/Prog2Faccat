#include <stdio.h>
#include <math.h>

int main() {
    float raiz;
    for(int i = 1; i<=1000;i++){
        raiz = sqrtf(i);

        if(fmodf(raiz,2) == 1){
            printf("%d\n", i);
        }
    }

    return 0;
}
