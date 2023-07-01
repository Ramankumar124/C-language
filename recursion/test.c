#include <stdio.h>

void convertWeight(double kg, double *grams, double *tons, double *pounds) {
    *grams = kg * 1000;
    *tons = kg / 1000;
    *pounds = kg * 2.20462;
}

int main() {
    double kg, grams, tons, pounds;

    printf("Enter the weight in kilograms: ");
    scanf("%lf", &kg);

    convertWeight(kg, &grams, &tons, &pounds);

    printf("Weight in grams: %.2lf\n", grams);
    printf("Weight in tons: %.2lf\n", tons);
    printf("Weight in pounds: %.2lf\n", pounds);

    return 0;
}
