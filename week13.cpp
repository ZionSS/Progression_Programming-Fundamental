#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 	
#include <string.h>  
#include <stdlib.h>  

int sum(char *num){
    int number;
    int numberSummit = 0;
    switch (*num)
    {
    case '0': number=0;
        break;
     case '1': number=1;
        break;
     case '2': number=2;
        break;
     case '3': number=3;
        break;
     case '4': number=4;
        break;
     case '5': number=5;
        break;
     case '6': number=6;
        break;
     case '7': number=7;
        break;
     case '8': number=8;
        break;
     case '9': number=9;
        break;
    default:
        break;
    }
    numberSummit+=number;
    return numberSummit;
}
int main(){
    char text[1000];
    int textLenght;
    int number=0;
    scanf("%[^\n]",text);
    textLenght = strlen(text);
    for(int i = 0;i<textLenght;i++)
    {
        if(text[i]>='0'&&text[i]<='9')
        {
           number += sum(&text[i]);
        }
    }
    printf("%d",number);

    
}