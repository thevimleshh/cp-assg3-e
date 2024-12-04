/*
roll no. 7
student name: danish shaikh
program title: wap to find greater number

task given by:
- roll no.of assignee: 8
- assignee name: vimlesh yadav
*/
#include<stdio.h>
int main(){
    int first_nu,second_nu;
    printf("\nEnter a first number   : ");
    scanf("%d",&first_nu);
    printf("Enter a second number: ");
    scanf("%d",&second_nu);
    if(first_nu>second_nu){
        printf("%d is greater ",first_nu);
    }
    else{
        printf("%d is greater",second_nu);
    }
    
    return 0;
}