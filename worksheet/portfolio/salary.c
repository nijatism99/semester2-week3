
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Nijat Ismayilov
 * ID: 201995965
 */
int main(void) {

    // values
    double salary   = 36250.0;  // £
    double ni_rate  = 8.0;      // %
    double tax_rate = 15.0;     // %

    // NI deducted from total salary
    double ni_contribution = salary * (ni_rate / 100.0);
    double after_ni = salary - ni_contribution;

    // Tax applies only to amount over £12500 (after NI)
    // Given the stated ranges, (after_ni - 12500) is always positive.
    double taxable_amount = after_ni - 12500.0;
    double tax_contribution = taxable_amount * (tax_rate / 100.0);

    // Take-home salary
    double take_home = after_ni - tax_contribution;

    // Use only these print statements
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
}
