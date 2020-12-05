#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Calculator app
    char yesNo[4] = "yes", oper;
    int firstNum, secondNum;
    float result;
    printf("Welcome to \"Calculator App\"\n");

    while(strcmp(yesNo, "yes") == 0) {
        // Input
        printf("Enter a number: ");
        scanf("%d", &firstNum);
        printf("Enter an operator: ");
        scanf(" %c", &oper);
        printf("Enter another number: ");
        scanf("%d", &secondNum);
        //Calculation
        switch (oper) {
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        case '/':
            result = firstNum / (float)secondNum;
            break;
        case '%':
            result = firstNum % secondNum;
            break;
        }
        if(oper == '/')
            printf("Final result is %d %c %d = %.2f\n", firstNum, oper, secondNum, result);
        else
            printf("Final result is %d %c %d = %.0f\n", firstNum, oper, secondNum, result);
        printf("Do you want to continue calculating (yes/no)?\n");
        scanf("%s", yesNo);
    }
}
