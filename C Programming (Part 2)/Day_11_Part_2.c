// Write a Program to Find Profit or Loss Percentage Given Cost Price and Selling Price.

#include <stdio.h>

int main()
{
    float cost_price;
    float selling_price;
    float profit;
    float profit_percentage;
    float loss;
    float loss_percentage;

    printf("Please Enter The Cost Price : ");
    scanf("%f", &cost_price);

    printf("Please Enter The Selling Price : ");
    scanf("%f", &selling_price);

    if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("You Are Currently Experiencing a Loss Of %.2f, Resulting In a Loss Percentage of %.2f %%", loss, loss_percentage);
    }
    else if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("You Are Currently Experiencing a Profit Of %.2f, Resulting In a Profit Percentage of %.2f %%", profit, profit_percentage);
    }
    else
    {
        printf("You Are Neither in Profit Nor in Loss");
    }

    return 0;
}