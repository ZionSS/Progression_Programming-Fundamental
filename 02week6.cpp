#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char n[200];
    scanf("%s",n);
    int len = strlen(n);
    for(int i=0,j=len-1;i<len/2;i++,j--){
        n[i] = toupper(n[i]);
        n[j] = toupper(n[j]);
        
        if(n[i] != n[j]){
            printf("No");
            return 0;
        }
    }
    for(int i=0,j=len/2-1;i<len/4;i++,j--){
        if(n[i] != n[j]){
            printf("Palindrome");
            return 0;
        }
    }
    printf("Double Palindrome");
    return 0;
}