// Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include <stdio.h>
#include<string.h>

int main()
{
    char *str = "Abhishekjadhav";
    char *str1 = "AEIOUaeiou";
    int count_vowel = 0, count_cons = 0,j;

    for (int i = 0; *(str + i); i++)
    {
        for (j = 0; *(str1 + j); j++)
        {
            if (*(str + i) == *(str1 + j))
                {
                    count_vowel++;
                    break;
                }
        }

        if(j==strlen(str1)){
           count_cons++;
        }
    }

    printf("number of vowel letters  is %d\n",count_vowel);
    printf("number of consonant letters  is %d",count_cons);

    return 1;
}