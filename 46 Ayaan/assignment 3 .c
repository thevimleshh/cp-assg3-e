/* 
 ROLL NO.:- 46
 STUDENT NAME:- SAYYED AYAAN ZUBAIR
 PROGRAM TITLE:- FIND THE LARGEST NUMBER AMONG THREE OF THEM AND CAMPARE IT WITH THE SUM OF THERE NUMBER

 TASK GIVEN BY: 
                -ROLL NO. OF ASSIGNEE:- 54
                -ASSIGNEE NAME:- AHMED RAZA
*/

#include<stdio.h>
 int main()
 {
     int num1,num2,num3,sum,largest;
     printf("Enter any number:\n");
     scanf("%d %d %d", &num1, &num2, &num3);
     
     if(num1>=num2)
     {
       if(num1>=num3)
       {
           largest = num1;
       }
     else{
         largest = num3;
     }}
     else{
         if(num2>=num3)
         {
             largest = num2;
         }else
         { 
             largest = num3;
         }
     }
     printf("%d is the  largest \n\n", largest);
     
     sum = num1 + num2 + num3;
     printf("the sum of the number is %d\n", sum);
     if(sum>largest)
     {
         printf("the sum of the number is greater than the largest number.");
     }else 
     if(sum<largest){
         printf("the sum of the number is less than largest number.");
     }
         return 0;
     }