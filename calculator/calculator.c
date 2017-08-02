#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	char operator, buffer;
    double firstNumber,secondNumber;
    bool finished = false;

    printf("\nWelcome!\n\n  Calculator done by Ricardo Riveron\n  With basic functionality\n  Usage:\n");
    printf("\n  Follow prompted instructions, type 'x' when finished.\n\tThank you for downloading!\n\n");
    while(!finished)
    {
        printf("Enter an operator (+, -, *,): ");
        scanf(" %c", &operator);

        if (operator=='x'){
            printf("Goodbye!\n\n");
            return 0;           
        }

        printf("Enter two operands: ");
        scanf(" %lf %lf",&firstNumber, &secondNumber);

        switch(operator)
        {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber + secondNumber);
                break;

            case '-':
                printf("%.1lf - %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber - secondNumber);
                break;

            case '*':
                printf("%.1lf * %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber * secondNumber);
                break;

            case '/':
                printf("%.1lf / %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber / firstNumber);
                break;

            /* operator doesn't match any case constant (+, -, *, /) */
            default:
                printf("Error! operator is not correct\n");
                scanf("%c", &operator);
                break;
        }
    }
    
    return 0;
}