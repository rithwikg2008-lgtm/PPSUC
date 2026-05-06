#include<stdio.h>
int main() 
{
 char ch;
 char str[50];
 char sentence[100];
 scanf("%c", &ch); // Read a character
 scanf("%s", str); // Read a string (word)
 scanf(" %[^\n]", sentence); // Read a full sentence
 printf("%c\n", ch);
 printf("%s\n", str);
 printf("%s", sentence);
 return 0;
}
