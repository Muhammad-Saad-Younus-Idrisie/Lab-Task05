#include <stdio.h>

int main(){
    //Declaring variables
    int Category, SubCategory;
    printf("Enter Category\n1:Classification\n2:Regression\n3:Clustering\n4:Computer Vision\n");
    scanf("%d", &Category);

    switch (Category){
        case 1:
        printf("Enter the Algorithm\n1:Logistic Regression\n2:Decision Tree\n3:KNN\n");
        scanf("%d", &SubCategory);
        switch (SubCategory){
            case 1:
            printf("You chose Logistic Regression");
            break;

            case 2:
            printf("You chose Decision Tree");
            break;

            case 3:
            printf("You chose KNN");
            break;

            default:
            printf("Invalid Choice");
            break;
        }break;

        case 2:
        printf("Enter the Algorithm\n1:Linear Regression\n2:Polynomial Regression\n3:SVR");
        scanf("%d", &SubCategory);
        switch (SubCategory){
            case 1:
            printf("You chose Linear Regression");
            break;

            case 2:
            printf("You chose Polynomial Regression");
            break;

            case 3:
            printf("You chose SVR");
            break;

            default:
            printf("Invalid Choice");
            break;
        }break;

        case 3:
        printf("Enter the Algorithm\n1:K-Means\n2:Hierarchical Clustering\n3:DBSCAN");
        scanf("%d",&SubCategory);
        switch(SubCategory){
            case 1:
            printf("You chose K-Means");
            break;

            case 2:
            printf("You chose Hierarchiacal Clustering");
            break;

            case 3:
            printf("You chose DBSCAN");
            break;

            default:
            printf("Invalid Choice");
            break;
        }break;

        case 4:
        printf("Enter the Algorithm\n1:CNN\n2:YOLO\n3:R-CNN");
        scanf("%d",&SubCategory);
        switch(SubCategory){
            case 1:
            printf("You chose CNN");
            break;

            case 2:
            printf("You chose YOLO");
            break;

            case 3:
            printf("You chose");
            break;

            default:
            printf("Invalid Choice");
            break;
        }break;
    }
}