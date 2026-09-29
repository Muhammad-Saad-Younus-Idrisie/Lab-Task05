#include <stdio.h>

int main(){
    //Declaring variables
    int Convo_Category, Response;

    //We use numbers to represent the different categories of conversation as we are not using strings
    printf("What do you want to talk about? \n 1:Greeting\n 2:Study\n 3:Weather\n 4:Help");
    scanf("%d", &Convo_Category);

    switch (Convo_Category){
        case 1:
        printf("1:Hello 2:How are you 3:Goodbye\n");
        scanf("%d", &Response);
        switch (Response){
            case 1:
            printf("Hello!");
            break;

            case 2:
            printf("I am fine, Thank you!");
            break;

            case 3:
            printf("Goodbye!");
            break;

            default:
            printf("Invalid response!");
        }break;

        case 2:
        printf("1:Programming 2:Mathematics 3:AI\n");
        scanf("%d", &Response);
        switch (Response){
            case 1:
            printf("Programming is fun!");
            break;

            case 2:
            printf("Mathematics is the mother of all sciences!");
            break;

            case 3:
            printf("AI is the future!");
            break;

            default:
            printf("Invalid response!");
        }break;

        case 3:
        printf("1:Today 2:Tomorrow 3:Forecast\n");
        scanf("%d", &Response);
        switch (Response){
            case 1:
            printf("Today is sunny!");
            break;

            case 2:
            printf("Tomorrow will be rainy!");
            break;

            case 3:
            printf("The forecast predicts snow!");
            break;

            default:
            printf("Invalid response!");
        }break;

        case 4:
        printf("1:About Chatbot 2:Commands 3:Exit\n");
        scanf("%d", &Response);
        switch (Response){
            case 1:
            printf("This is Chatbot version 1.12.0");
            break;

            case 2:
            printf("1./run\n2.debug\n3.calculate");
            break;

            case 3:
            printf("Exiting Help Section......");
            break;

            default:
            printf("Invalid response!");
        }break;

        default:
        printf("Invalid Conversation");
        
    }
}