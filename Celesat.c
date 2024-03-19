
#include "stdio.h"

int portaA(int A_numriTopave);
int portaB(int B_numriTopave);

int main(){

    int A_numriTopave;
    int B_numriTopave;

    printf("Hidh topat ne A: ");
    scanf("%d",  &A_numriTopave);
    printf("Hidh topat ne B: ");
    scanf("%d", &B_numriTopave);

    int C_topa = portaA(A_numriTopave) + portaB(B_numriTopave);

    printf("Kane rene ne porten C %d topa. Fitove po aq here.", C_topa);
}

int portaA(int A_numriTopave){

    if (A_numriTopave % 2 == 1){
        int x2_numri = (A_numriTopave / 2) + 1;

        if((x2_numri/2) % 2 == 1){
            int A_per_C = (x2_numri / 2) + 1;
            return A_per_C;

        } else{
            int A_per_C = x2_numri / 2;
            return A_per_C;
        }


    } else {
        int x2_numri = A_numriTopave / 2;

        if((x2_numri/2) % 2 == 1){
            int A_per_C = (x2_numri / 2) + 1;
            return A_per_C;

        } else{
            int A_per_C = x2_numri / 2;
            return A_per_C;
        }
    }
}

int portaB(int B_numriTopave){
        if (B_numriTopave % 2 == 0) {
            int x2_numri = (B_numriTopave / 2);

            if ((x2_numri / 2) % 2 == 0) {
                int B_per_C = (x2_numri / 2) + 1;
                return B_per_C;

            } else {
                int B_per_C = x2_numri / 2;
                return B_per_C;
            }

        } else {
            int x2_numri = B_numriTopave / 2;

            if ((x2_numri / 2) % 2 == 0) {
                int B_per_C = (x2_numri / 2) + 1;
                return B_per_C;

            } else {
                int B_per_C = x2_numri / 2;
                return B_per_C;
            }


        }
    }
