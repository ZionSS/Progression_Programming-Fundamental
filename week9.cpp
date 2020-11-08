#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>


int main() {
    char text[100];
    char alphabet;
    int position[100],count=0;
    scanf("%[^\n] %c", text, &alphabet);
    int textLenght = strlen(text);
    for (int i = 0; i < textLenght; i++)
    {
        if (text[i] == alphabet||toupper(text[i])== toupper(alphabet))
        {
            position[count] = i+1;
            count++;
        }
    }
    std::cout << "The position of " << alphabet << " is here:";
    for (int i = 0 ; i < 100; i++)
    {
        if(position[i]>=1&&position[i]<=100)
        std::cout << position[i] << " ";
    }
    return 0;
}