#include <stdio.h>
#include <math.h>


int main(){
    double num;
    double aux1, aux2, aux3;
    scanf("%lf", &num);

    aux1 = round(num * 10) / 10.0;
    aux2 = round(num * 100) / 100.0;
    aux3 = round(num * 1000) / 1000.0;
    
    printf("%.6lf\n", aux1);
    printf("%.6lf\n", aux2);
    printf("%.6lf\n", aux3);
    return 0;
}