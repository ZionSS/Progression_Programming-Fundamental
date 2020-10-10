#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
    char pass[100];
    int len;
    int condition=0,bigLetter,smallLetter,num,specialChar;
    scanf("%s",pass);
    len=strlen(pass);
    if(len >=3&&len<=20)
    {
        for(int i =0; i<len;i++)
        {
            if(pass[i]>='A'&&pass[i]<='Z')
            {
                bigLetter+=1;   
            }
            if(pass[i]>='a'&&pass[i]<='z')
            {
                smallLetter+=1;   
            }
           if(pass[i]>='0'&&pass[i]<='9')
            {
                num+=1;   
            }
            if((pass[i]>='A'&&pass[i]<='Z')||(pass[i]>='a'&&pass[i]<='z')||(pass[i]>='0'&&pass[i]<='9')||pass[i]=='\0'||pass[i]=='\n')
            {}
            else
            {
                specialChar+=1;
            }
        }
    }
    else
    {
        printf("Invalid");
        return 0;
    }
    if(bigLetter>=1&&num>=1&&smallLetter>=1&&specialChar>=1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
  
	return 0;
}
