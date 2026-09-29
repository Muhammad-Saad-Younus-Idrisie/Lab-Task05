#include <stdio.h>

int main() {
    int confidence, threshold;

    printf("Enter model confidence score (0-100): ");
    scanf("%d", &confidence);

    printf("Enter required confidence threshold (0-100): ");
    scanf("%d", &threshold);
     
    if (confidence >= 90) {
        printf("Very High\n");
    } 
    else if (confidence >= 75) {
        printf("High\n");
    } 
    else if (confidence >= 50) {
        printf("Moderate\n");
    } 
    else {
        printf("Low\n");
    }

    if (confidence >= threshold && confidence >= 50) {
        printf("Decision: Prediction Accepted\n");
    } 
    else {
        printf("Decision: Prediction Rejected\n");
    }

    return 0;
}