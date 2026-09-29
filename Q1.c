#include <stdio.h>

int main(){
    //Declaring variables
    int Programming, Maths, AI_Marks, Average;
    float Attendance;

    //Prompting user to enter marks and attendance
    printf("Enter you Programming marks: ");
    scanf("%d", &Programming);
    printf("Enter you Maths marks: ");
    scanf("%d", &Maths);
    printf("Enter you AI marks: ");
    scanf("%d", &AI_Marks);
    printf("Enter your Attendance percentage: ");
    scanf("%f", &Attendance);

    if (Programming >= 50 && Maths >= 50 && AI_Marks >=50 && Attendance >= 75.0){
        Average = Maths + Programming + AI_Marks / 3;
        //Using nested IF to give outputs
        if (Average >= 80){
            printf("Excellent");
        }
        else if (Average >= 70){
            printf("Very Good");
        }
        else if (Average >= 60){
            printf("Good");
        }
        else if (Average >= 50){
            printf("Satisfactory");
        }
        else{
            printf("Poor"); 
        }
    }
    else{
        printf("Student is Not Eligible");
    }

    return 0;
}