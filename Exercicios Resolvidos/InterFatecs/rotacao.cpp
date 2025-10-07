#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
    int N, teta, i, x, y;
    double x_linha, y_linha;
    double M[2][2], teta_rad;
    
    scanf("%i %i", &N, &teta);
    
    teta_rad = (teta * PI) / 180.00;
    M[0][0] = cos(teta_rad);
    M[1][0] = sin(teta_rad);
    M[0][1] = (-1) * sin(teta_rad);
    M[1][1] = cos(teta_rad);
    
    for (i = 0; i < N; i++) {
        scanf("%i %i", &x, &y);
        x_linha = M[0][0] * x + M[0][1] * y;
        y_linha = M[1][0] * x + M[1][1] * y;
        printf("%.2f %.2f\n", x_linha, y_linha);
    }
    
    return 0;
}