#include<stdio.h>
#include<math.h>

int main() {
    float loan, interest;
    int duration;
    printf("Enter Loan Amount: ");
    scanf("%f", &loan);
    printf("Enter Annual Interest Rate (%%):");
    scanf("%f", &interest);
    printf("Enter Duration (years):");
    scanf("%d", &duration);
    int months = duration * 12;
    printf("\n\n-------------------\n");
    printf("LOAN CALCULATION");
    printf("\n-------------------\n");
    printf("Loan Amount: %.2f\n", loan);
    printf("Duration: %d years (%d months)\n", duration, months);
    printf("Interest Rate: %.2f%% per year\n", interest);
    float r = interest / (12 * 100);
    int n = duration * 12;
    float EMI = ((loan * r * pow((1+r), n)) / (pow((1 + r), n) - 1));
    printf("Monthly EMI: %.2f\n", EMI);
    return 0;
} 