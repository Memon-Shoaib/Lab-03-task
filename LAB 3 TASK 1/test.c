#include<stdio.h>
#include<string.h>

int main() {
	printf("-----------------------\n");
	printf("    ELECTRICITY BILL   \n");
	printf("-----------------------\n");
	char Name[50];
	int units;
	float price;
	printf(" Customer : ");
	fgets(Name, sizeof(Name), stdin);
	fflush(stdout);
	printf(" units consumed: ");
	scanf("%d", &units);
	printf(" price per unit: ");
	scanf("%f", &price);
	printf("----------------------\n");
	printf(" Total bill = %.3f PKR\n", units * price);
	printf("----------------------\n");
	return 0;
}