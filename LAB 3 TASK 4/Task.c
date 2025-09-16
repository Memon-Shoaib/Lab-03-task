#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, d, e;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("\n\n-------------------\n");
    printf("STUDENT RESULT\n");
    printf("-------------------\n");
    printf("Marks:  %.1f, %.1f, %.1f, %.1f, %.1f\n", a, b, c, d, e);
    float Total = a + b + c + d + e;
    printf("Total: %.1f\n", Total);
    float per = (Total * 100.0) / 500;
    printf("Percentage: %.1f\n", per);
    float CGPA = (per / 100) * 4;
    printf("CGPA: %.2f / 4.00\n", CGPA);
    printf("-------------------\n");
    return 0;
}