#include <stdio.h>

int main() {
    int age = 19;
    float height = 5.1;
    double pi = 3.1415926535;
    char grade = 'S';

    printf("Integer (Age): %d\n", age);
    printf("Float (Height): %.1f\n", height);
    printf("Double (Pi): %.10lf\n", pi);
    printf("Character (Grade): %c\n", grade);

    return 0;
}
