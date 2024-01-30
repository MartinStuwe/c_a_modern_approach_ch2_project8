#include <stdio.h>

int main(void){
    printf("Enter amount of loan: ");
    float loan;
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    float interest;
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    float payment;
    scanf("%f", &payment);

    float monthly_interest = interest / 100 / 12;
    
    float first_month_interest = loan * monthly_interest;
    float first_month_principal = payment - first_month_interest;
    float first_month_balance = loan - first_month_principal;

    printf("Balance remaining after first payment: $%.2f\n", first_month_balance);

    float second_month_interest = first_month_balance * monthly_interest;
    float second_month_principal = payment - second_month_interest;
    float second_month_balance = first_month_balance - second_month_principal;

    printf("Balance remaining after second payment: $%.2f\n", second_month_balance);

    float third_month_interest = second_month_balance * monthly_interest;
    float third_month_principal = payment - third_month_interest;
    float third_month_balance = second_month_balance - third_month_principal;

    printf("Balance remaining after third payment: $%.2f\n", third_month_balance);
    
    return 0;
}