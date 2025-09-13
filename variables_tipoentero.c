/*
    Dadas las variables de tipo entero con valores A = 5, B = 3, C = -12
    Indicar si la evaluación de éstas expresiones como resultado, VERDADERO o FALSO

*/

/*
    a) A > 3 - (V)
    b) A > C - (V)
    c) A < C - (F)
    d) B < C - (E)
    e) B! = C - (V)
    f) A == 3 - (E)
    g) A * B == 15 - (V)
    h) A * B == -30 - (F)
    i) C / B < A - (E)
    j) C / B == -10 - (F)
    k) C / B == -4 - (V)
    l) A + B + C == 5 - (F)
    m) (A + B == 8) && (A-B == 2) - (V)
    n) (A + B == 8) || (A - B == 6) - (V)
    o) A > 3 && B > 3 && C < 3 - (F)
    p) A > 3 && B >= && C < 3 - (V)

*/

#include <stdio.h>
#include <math.h>
    int main(){
        int A, B, C, V;
            A = 5;
            B = 3;
            C = -12;

            V = (A > 3);
                printf("a) A > 3: %d\n", V);
            V = (A > C);
                printf("b) A > C: %d\n", V);
            V = (A < C);
                printf("c) A < C: %d\n", V);
            V = (B < C);
                printf("d) B < C: %d\n", V);
            V = (B != C);
                printf("e) B != C: %d\n", V);
            V = (A == 3);
                printf("f) A == 3: %d\n", V);
            V = (A * B == 15);
                printf("g) A * B == 15: %d\n", V);
            V = (A * B == -30);
                printf("h) A * B == -30: %d\n", V);
            V = (C / B < A);
                printf("i) C / B < A: %d\n", V);
            V = (C / B == -10);
                printf("j) C / B == -10: %d\n", V);
            V = (C / B == -4);
                printf("k) C / B == -4: %d\n", V);
            V = (A + B + C == 5);
                printf("l) A + B + C == 5: %d\n", V);
            V = ((A + B == 8) && (A - B == 2));
                printf("m) (A + B == 8) && (A - B == 2): %d\n", V);
            V = ((A + B == 8) || (A - B == 6));
                printf("n) (A + B == 8) || (A - B == 6): %d\n", V);
            V = (A > 3 && B > 3 && C < 3);
                printf("o) A > 3 && B > 3 && C < 3: %d\n", V);
            V = (A > 3 && B >= 3 && C < 3);
                printf("p) A > 3 && B >= 3 && C < 3: %d\n", V);

    }