#include<stdio.h>
#include<math.h>

int main() {
	printf("----------------------\n");
	printf("    SHOP RECEIPT   \n");
	printf("----------------------\n");
	float item1;
    float item2;
    float item3;
	printf("item 1: ");
    scanf("%f", &item1);
    printf("item 2: ");
    scanf("%f", &item2);
    printf("item 3: ");
    scanf("%f", &item3);
    printf("----------------------\n");
    float Subtotal = item1 + item2 + item3;
    printf("Subtotal: %.2f\n", Subtotal);
    float Tax = Subtotal * (17.0/100.0);
    printf("Tax(17%%): %.2f\n", Tax);
	printf("----------------------\n");
    float Grand_Total = Subtotal + Tax;
    printf("Grand Total = %.2f\n", Grand_Total);
    printf("----------------------\n");
	return 0;
}