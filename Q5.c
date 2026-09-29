#include <stdio.h>

int main(){
    //Declaring Variables
    int Confidence, UserType;

    printf("Confidence Score: ");
    scanf("%d", &Confidence);
    printf("UserType (1: Authorized  2: Unauthorized): ");
    scanf("%d", &UserType);

    if (Confidence>=80 && UserType==1){
        printf("Access Granted");
        (UserType==2)?printf("Face Recognized"):printf("Access Granted");
    }
    else if(Confidence>=50 && Confidence<80){
        printf("Manual Verification");
    }
    else if(Confidence<50 || UserType == 2){
        printf("Access Denied");
    }
}