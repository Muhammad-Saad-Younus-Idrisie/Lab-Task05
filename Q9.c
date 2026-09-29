#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    float num;

    printf("Choose your operation\n1:Square Root\n2:Power\n3:Absolute Value\n4:Floor\n5:Ceiling\n");
    scanf("%d", &choice);
    switch (choice){
        case 1:{
        printf("Enter the number: ");
        scanf("%f", &num);
        if (num>=0){
            printf("%.1f", sqrt(num));
        }
        else{
            printf("Square root of negative number is invalid");
        }}break;

        case 2:{
        float power;
        printf("Enter the base: ");
        scanf("%f", &num);
        printf("Enter the power: ");
        scanf("%f", &power);
        printf("%.1f", pow(num,power));
        }break;

        case 3:{
        printf("Enter the number: ");
        scanf("%f", &num);
        printf("%.1f", fabs(num));
        }break;

        case 4:{
        printf("Enter the number: ");
        scanf("%f", &num);
        printf("%.1f", floor(num));
        }break;

        case 5:{
        printf("Enter the number: ");
        scanf("%f", &num);
        printf("%.1f", ceil(num));
        }break;

        default:{
        printf("Invalid Choice");
        }break;

    }
    return 0;
}