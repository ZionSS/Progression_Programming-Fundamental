#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void numPrint(char *text,int i) // <-------- Pointer is here
{   
    char num = *text;
    if(i==1)
    {
        if(num=='0')
        {
            printf(" _ ");
        }
        else if(num=='1')
        {
            printf("   ");
        }
        else if(num=='2')
        {
            printf(" _ ");
        }
        else if(num=='3')
        {
            printf(" _ ");
        }
        else if(num=='4')
        {
            printf("   ");
        }
        else if(num=='5')
        {
            printf(" _ ");
        }
        else if(num=='6')
        {
            printf(" _ ");
        }
        else if(num=='7')
        {
            printf(" _ ");
        }
        else if(num=='8')
        {
            printf(" _ ");
        }
        else if(num=='9')
        {
            printf(" _ ");
        }
    }
    else if(i==2)
    {
        if(num=='0')
        {
            printf("| |");
        }
        else if(num=='1')
        {
            printf("  |");
        }
        else if(num=='2')
        {
            printf(" _|");
        }
        else if(num=='2')
        {
            printf(" _|");
        }
        else if(num=='3')
        {
            printf(" _|");
        }
        else if(num=='4')
        {
            printf("|_|");
        }
        else if(num=='5')
        {
            printf("|_ ");
        }
        else if(num=='6')
        {
            printf("|_ ");
        }
        else if(num=='7')
        {
            printf("  |");
        }
        else if(num=='8')
        {
            printf("|_|");
        }
        else if(num=='9')
        {
            printf("|_|");
        }
    }
    else if(i==3)
    {
        if(num=='0')
        {
            printf("|_|");
        }
        else if(num=='1')
        {
            printf("  |");
        }
        else if(num=='2')
        {
            printf("|_ ");
        }
        else if(num=='3')
        {
            printf(" _|");
        }
        else if(num=='4')
        {
            printf("  |");
        }
        else if(num=='5')
        {
            printf(" _|");
        }
         else if(num=='6')
        {
            printf("|_|");
        }
        else if(num=='7')
        {
            printf("  |");
        }
        else if(num=='8')
        {
            printf("|_|");
        }
        else if(num=='9')
        {
            printf("  |");
        }
    }
}


int main() {
    char num[11];
    int len;
    scanf("%[0-9]",num);
    len=strlen(num);
    for(int i = 1;i<=3;i++)
    {
        for(int j = 0;j<len;j++)
        {
            numPrint(&num[j],i);
        }
        printf("\n");
    }
    
   return 0; 
}
