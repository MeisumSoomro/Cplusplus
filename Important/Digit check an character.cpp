#include <stdio.h>
int main()
{
   char characters;

    /* Input a character from user */
    printf("Please Enter the character: ");
    scanf("%c", &characters);
    if(characters >= 48 && characters <= 57)
    {
        printf("'%c' is digit.", characters);
    }
    else if((characters >= 97 && characters <= 122) || (characters >= 65 && characters <= 90))
    {
	printf("'%c' is alphabet.", characters);
        
    }
    else
    {
        printf("'%c' is special characters.", characters);
    }
    return 0;
}
