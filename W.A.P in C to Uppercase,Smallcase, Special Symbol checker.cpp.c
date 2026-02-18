#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character from keyboard:\n");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
          printf("This character is in 'UPPERCASE'");
    if(ch>=97 && ch<=122) 
          printf("This character is in 'smallcase'");
    if(ch>=48 && ch<=57) 
          printf("This character is in 'DIGIT'");
    if(ch>=0 & ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127 || ch>122)  
          printf("This character is in 'Special Symbol' "); 
} 