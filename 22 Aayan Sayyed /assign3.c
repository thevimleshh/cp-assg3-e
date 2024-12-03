// Student Name  : Aayan Sayyed 
//UIN   : 241S027
//ROLL No : 22

// Assignee Name : Shadab Shaikh 
// Assignee Roll No : 24
// Task : WAP to demonstrate Printing of the first letter of each word \


#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "Rizvi College of Engineering"; 
    int i, j = 0; 
  
    // Traversing the Character array 
    for (i = 0; i < strlen(str); i++) { 
  
        // To store first character of 
        // String if it is not a 
        // whitespace. 
        if (i == 0 && str[i] != ' ') { 
            printf("%c ", str[i]); 
        } 
        // To check whether Character 
        // is first character of 
        // word and if yes store it. 
        else if (i > 0 && str[i - 1] == ' ') { 
            printf("%c ", str[i]); 
        } 
    } 
    return 0; 
}