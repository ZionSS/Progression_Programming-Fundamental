#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>


int main()
{
    char text[1000];
    int Alphabet=0;
    int Vowel=0;
    int Number=0;
    int Word=0;
    scanf("%[^\n]",text);
    int textLenght = strlen(text);
    for(int i = 0 ;i<textLenght;i++)
    {
        if(((text[i]>='a'&&text[i]<='z')||(text[i]>='A'&&text[i]<='Z'))&&text[i]!='A'&&text[i]!='E'&&text[i]!='I'&&text[i]!='O'&&text[i]!='U'&&text[i]!='a'&&text[i]!='e'&&text[i]!='i'&&text[i]!='o'&&text[i]!='u')
        {Alphabet++;}
        else if(text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'||text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
        {Vowel++;}
        else if(text[i]>='0'&&text[i]<='9')
        {
            Number++;
        }
        else if(text[i]==' ')
        {
            Word++;
        }
    }
    Word++;
    printf("Alphabet = %d\nVowel = %d\nNumber = %d\nWord = %d",Alphabet,Vowel,Number,Word);
}