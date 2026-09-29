#include <stdio.h>

int main(){
    //Declaring variables
    int Image_Category, Image_SubCategory;

    //Prompting user to input the category and subcategory of the image via numbers as we are not using Strings
    printf("Enter Image Category 1:Animal 2:Vehicle 3:Food 4:Human\n");
    scanf("%d", &Image_Category);
    switch (Image_Category){
        case 1:
        printf("Enter the subcategory 1:Dog 2:Cat 3:Bird\n");
        scanf("%d", &Image_SubCategory);
        switch (Image_SubCategory){ //Nested Switch for animal subcategories
            case 1:
            printf("Your Image is a Dog\n");
            break;

            case 2:
            printf("Your Image is a Cat\n");
            break;
            
            case 3:
            printf("Your Image is a Bird\n");
            break;

            default:
            printf("Invalid Subcategory\n");
        }break;

        case 2:
        printf("Enter the subcategory 1:Car 2:Bus 3:Bike\n");
        scanf("%d", &Image_SubCategory);
        switch (Image_SubCategory){ //Nested Switch for vehicle subcategories
            case 1:
            printf("Your Image is a Car\n");
            break;

            case 2:
            printf("Your Image is a Bus\n");
            break;

            case 3:
            printf("Your Image is a Bike\n");
            break;

            default:
            printf("Invalid Subcategory\n");
        }break;

        case 3:
        printf("Enter the subcategory 1:Pizza 2:Burger 3:Biryani\n");
        scanf("%d", &Image_SubCategory);
        switch (Image_SubCategory){ //Nested Switch for food subcategories
            case 1:
            printf("Your Image is a Pizza\n");
            break;

            case 2:
            printf("Your Image is a Burger\n");
            break;

            case 3:
            printf("Your Image is a Biryani\n");
            break;

            default:
            printf("Invalid Subcategory\n");
        }break;

        case 4:
        printf("Enter the subcategory 1:Male 2:Female 3:Child\n");
        scanf("%d", &Image_SubCategory);
        switch (Image_SubCategory){ //Nested Switch for human subcategories
            case 1:
            printf("Your Image is a Male\n");
            break;

            case 2:
            printf("Your Image is a Female\n");
            break;

            case 3:
            printf("Your Image is a Child\n");
            break;

            default:
            printf("Invalid Subcategory\n");
        }break;


    }
    return 0;
}