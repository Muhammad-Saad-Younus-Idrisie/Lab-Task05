#include <stdio.h>
#include <math.h>

int main(){
    int Accuracy, ConfidenceScore, DataSize, UserRole, ModelStatus, Permission, ModelScore;
    
    printf("Enter Accuracy: ");
    scanf("%d", &Accuracy);
    printf("Enter Confidence Score: ");
    scanf("%d", &ConfidenceScore);
    printf("Enter Datasize: ");
    scanf("%d", &DataSize);
    printf("Enter User Role:\n1:Admin\n2:Developer\n3:Researcher\n");
    scanf("%d", &UserRole);
    printf("Enter Model Status:\n1:Ready\n2:Testing\n3:Training\n");
    scanf("%d", &ModelStatus);
    printf("Enter Permission:\nView =1\nTrain =2\nTest =4\nDeploy =8\n");
    scanf("%d", &Permission);

    ModelScore = round((Accuracy+ConfidenceScore)/2.0);

    switch(UserRole){
        case 1:{
        printf("Admin User");
        }break;

        case 2:{
            printf("Developer User");
        }break;

        case 3:{
            printf("Researcher User");
        }break;

        default:{
            printf("Invalid User");
        }break;
    }

    printf("%d", ModelScore);
    if (Accuracy>=80 && ConfidenceScore>=75 && DataSize>=1000 && ModelStatus == 1 && (Permission & 8)){
        printf("Model Score: %d\nModel Status: %d", ModelScore, ModelStatus); 
    }

}