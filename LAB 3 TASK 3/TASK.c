#include<stdio.h>
#include<math.h>

int main() {
    float dist, fuel_used, fuel_ppl;
    printf("Enter distance(km): ");
    scanf("%f", &dist);
    printf("Enter fuel used (liters): ");
    scanf("%f", &fuel_used);
    printf("Enter fuel price per liter:");
    scanf("%f", &fuel_ppl);
    printf("\n\n-------------------------------\n");
    printf("    FUEL REPORT    \n");
    printf("\n-------------------------------\n");
    printf("Distance: %.2f km\n", dist);
    printf("Fuel Used: %.2f L\n", fuel_used);
    float EFF = dist / fuel_used;
    printf("Efficiency:%.2f km/L\n", EFF);
    float Total = fuel_used * fuel_ppl;
    printf("Total Cost: %.2f PKR\n", Total);
    printf("-------------------------------");
    return 0;
}