//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    printf("Name: Souvik Saha\nCourse:BCA\nSap id:590026567\n");
    printf("-----------------------------------------------\n");
    float costPrice, sellingPrice, profit, loss, percentage;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
