#include<stdio.h>
int main()
{
char c;
printf("Enter the character\n");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
printf("The value is vowel");
else
printf("The value is consonant");
}
