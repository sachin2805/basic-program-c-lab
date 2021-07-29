#include <stdio.h>

int main() {

    double area,c,r;

    printf("\nEnter the .. radius .. of the circle whose u want to find the area nd circumferance = ");
    scanf("%lf",&r);

    area=3.14*r*r;
    c=2*3.14*r;

    printf("\nArea = %lf\nCircumfrence = %lf",area,c)


    return 0;
}
