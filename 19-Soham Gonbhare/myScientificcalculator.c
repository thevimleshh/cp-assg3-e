/*
  Roll No.: 19
  Student Name:Soham Gonbhare
  Program Title:Scientific calculator with basic opertions and trigonometric functions and simultaneous equations.

  Task Given By:
    - Roll No. of Assignee:18
    - Assignee Name:Aditya Waykole
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    float num1, num2, result;
    int mod_result;
    char operators;double tangent,cosine,sine;
    char function;double angle;
    char choice;char ang;
     float a1, b1, c1, a2, b2, c2;
    float x, y;

    printf("\t\t\t*CALCULATOR*\n\n");
    printf("\t Operations : \n");
    printf("\t\t + : Addition\n");
    printf("\t\t - : Subtraction\n");
    printf("\t\t * : Multiplication\n");
    printf("\t\t / : Division\n");
    printf("\t\t %%: Modulus\n\n");
     printf("\t\t: trignometric function\n\n");
repeat:
    printf("Enter First Operand: ");
    scanf("%f", &num1);
    printf("Enter Second Operand: ");
    scanf("%f", &num2);
    printf("enter the what you want to perform:-\n\n");
    scanf("%s",choice);
    if(choice=="operation")
    {
        printf("enter which operation you want to perform:-\n\n\n");
        scanf("%c",&operators);

    switch (operators){
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by Zero\n");
            } else {
                result = num1 / num2;
                printf("%.1f / %.1f = %.1f\n", num1, num2, result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Cannot perform modulus by Zero\n");
            } else {
                mod_result = (int)num1 % (int)num2;
                printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);
            }
            break;
        default:
            printf("Invalid Operator. Try Again.\n");
            break;
    }
    }
else if(choice=="function")
    {
        printf("enter the value for which you want degree");
        scanf("%.lf",angle);
        printf("enter the value for which you want degree");
        scanf("%c",ang);

    switch (function){
    case 's':
        sine=sin(angle);
        printf("angle value:- ",sine);
     printf("angle value for inverse:-",pow(sine,-1));
        break;
     case 'c':
     cosine=cos(angle);
        printf("angle value:- ",cosine);
        printf("angle value for inverse:-",pow(cosine,-1));
        break;
       case 't':
  tangent=tan(angle);
        printf("angle value:- ",tangent);
         printf("angle value for inverse:-",pow(tangent,-1));
        break;
       default:
        printf("no angle to be printed");
        break;
        return 0;
    }
    }
    else{
    printf("Enter the coefficients of the first equation (a1 b1 c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Enter the coefficients of the second equation (a2 b2 c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Solve for x and y using the substitution method
    if (b1 != 0) {
        y = (c1 - a1 * x) / b1;
        x = (c2 - b2 * y) / a2;
    } else if (b2 != 0) {
        y = (c2 - a2 * x) / b2;
        x = (c1 - b1 * y) / a1;
    } else {
        printf("System cannot be solved by substitution.\n");
        return 1;
    }

    printf("Solution: x = %f, y = %f\n", x, y);
    return 0;
}

    printf("Continue? (Y/N): ");
    scanf(" %c", &operators);
    if (operators=='N'||operators=='n'){
        printf("Thank you for using Calculator\n");
        return 0;
    }
    printf("\n\n");
    goto repeat;

    return 0;
}
