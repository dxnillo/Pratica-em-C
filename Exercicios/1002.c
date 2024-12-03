#include <stdio.h>
 
int main() {
 
    double area, n, raio;

    scanf("%lf",&raio);

    n = 3.14159;
    area = raio * raio * n;

    printf("A=%.4lf\n",area);

    return 0;
}