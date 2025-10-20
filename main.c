#include <stdio.h>
#include <stdlib.h>
#define STANDING_CHARGE 150
#define PRICE_PER_UNIT 15
#define UNITS_TO_LITRES 1000
int main()
{
    //const int STANDING_CHARGE = 150;
    int id;
    float previous_meter_reading, current_meter_reading, units, litres_consumed, amount, total_amount_paid;

    printf("Enter your identification number: ");
    scanf("%d", &id);
    printf("Enter your previous meter reading: ");
    scanf("%f", &previous_meter_reading);
    printf("Enter your current meter reading: ");
    scanf("%f", &current_meter_reading);

    units = current_meter_reading - previous_meter_reading;
    amount = units * PRICE_PER_UNIT;
    total_amount_paid = amount + STANDING_CHARGE;
    litres_consumed = UNITS_TO_LITRES * units;

    printf("\n \n");
    printf("Identification Number: %d \n",id);
    printf("Previous Meter Reading: %.2f \n",previous_meter_reading);
    printf("Current Meter Reading: %f \n", current_meter_reading);
    printf("Units consumed this month: %f \n", units);
    printf("Number of litres consumed: %f  \n", litres_consumed);
    printf("Standing Charges: %d \n", STANDING_CHARGE);
    printf("Total amount to be paid: %f \n", total_amount_paid);
    return 0;
}
