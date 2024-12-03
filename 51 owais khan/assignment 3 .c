/*
  Roll No.:51
  Student Name: Khan Owais Javed 
  Program Title: WAP To find the the following year is leap year or not. 

  Task Given By:
    - Roll No. of Assignee:56
    - Assignee Name: Arman Shaikh Ramjan Ali
*/

#include<stdio.h>


int main(){
    int year;

    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not Leap Year",year);
    }

    printf("\n\n");
    return 0;
}