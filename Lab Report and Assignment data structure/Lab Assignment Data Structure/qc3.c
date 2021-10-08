/*  write a program which will take a string as input and will count the number of special character
& Digits in that string. Output them separately. Example: Special Charterers: 10, Digits: 5 Mark: (10)  */



#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i,alphabets=0,digits=0,specialcharacters=0;

    printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
       // if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
         // alphabets++;
         if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         specialcharacters++;

 	}


    //printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);


    return 0;
}
