#include<stdio.h>
int main(){
    char str[50];
    
    // Taking input
    printf("Enter a string: ");
    gets(str); // Reads a line of text from stdin and stores it in str

    // Printing output
    printf("You entered: ");
    puts(str); // Outputs a string to stdout followed by a newline

    return 0;
}