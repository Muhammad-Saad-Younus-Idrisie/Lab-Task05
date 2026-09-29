#include <stdio.h>

int main(){
    //Declareing variables
    int Age, Income, Credit_Score, Existing_Loan;

    printf("Enter your Age: ");
    scanf("%d", &Age);
    printf("Enter your Income: ");
    scanf("%d", &Income);
    printf("Enter your Credit Score: ");
    scanf("%d", &Credit_Score);
    printf("Enter your Existing Loan status (1 for yes, 0 for no): ");
    scanf("%d", &Existing_Loan);

    if (Age >= 21 && Income >= 100000 && Credit_Score >= 750 && Existing_Loan == 0){
        printf("High Approval Chance\n");
        if (Income >= 75000 && Credit_Score >= 650 && Existing_Loan == 1){
            printf("Manual Review\n");
            if (Income >= 50000 && Credit_Score >= 600){
                printf("Possibly Eligible\n");
            }
        }
    }
    else{
        printf("Rejected\n");
    }

    return 0;
}