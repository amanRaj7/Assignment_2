#include <stdio.h>
#include <string.h>

int main(){
    char number[1000];
    printf("Enter the number: ");
    scanf("%s", number);
    for(int i=0; i<strlen(number); i++)
    {
        switch (number[i]){
            case '0':
                printf("Zero ");
                break;
            case '1':
                printf("One ");
                break;
            case '2':
                printf("Two ");
                break;
            case '3':
                printf("Three ");
                break;
            case '4':
                printf("Four ");
                break;
            case '5':
                printf("Five ");
                break;
            case '6':
                printf("Six ");
                break;
            case '7':
                printf("Seven ");
                break;
            case '8':
                printf("Eight ");
                break;
            case '9':
                printf("Nine ");
                break;
        }
    }
    printf("\n");
    return 0;
}