#include <stdio.h>

int main() {
    int n, i, successful = 0;
    float load, commission;
    float totalLoad = 0, totalCommission = 0;

    printf("Enter number of transactions: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nTransaction %d\n", i);
        printf("Enter load amount: ");
        scanf("%f", &load);

        if (load > 0) {
            commission = load * 0.05;
            printf("Commission: %.2f\n", commission);

            totalLoad = totalLoad + load;
            totalCommission = totalCommission + commission;
            successful++;
        } else {
            printf("Invalid amount! Please enter a positive amount.\n");
        }
    }

    printf("\nTotal Load Sold: %.2f\n", totalLoad);
    printf("Total Commission: %.2f\n", totalCommission);
    printf("Successful Transactions: %d\n", successful);

    return 0;
}