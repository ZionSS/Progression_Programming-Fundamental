#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char letterCheck(char letter, char* text, int lenght)
{
    int count = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (text[i] == letter)
            {
                count++;
            }
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = toupper(text[i]);
            if (text[i] == letter)
            {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int sharpCount;
    char Text[100];
    char letter = 'A';
    int strLenght = 0;
    int lenghtCount = 0;
    scanf("%[^\n]", Text);
    for (int i = 0; i < 100; i++)
    {
        if (Text[i] != '\0')
        {
            strLenght++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i <= 25; i++)
    {
        sharpCount = letterCheck(letter, Text, strLenght);
        if (sharpCount == 0)
        {
            letter++;
            continue;
        }
        else
        {
            printf("%c: ", letter);
            for (int j = 0; j < sharpCount; j++)
            {
                printf("#");
            }
            printf("\n");
            letter++;
        }

    }
}
