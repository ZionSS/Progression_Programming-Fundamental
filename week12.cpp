#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
int checkMine(char *b1, char* b2, char* b3, char* b4, char* b5, char* b6, char* b7, char* b8 )
{
    int bombCount=0;
    if (*b1 == '*' )
    {
        bombCount += 1;
    }
    if (*b2 == '*')
    {
        bombCount += 1;
    }
    if (*b3 == '*')
    {
        bombCount += 1;
    }
    if (*b4 == '*')
    {
        bombCount += 1;
    }
    if (*b5 == '*')
    {
        bombCount += 1;
    }
    if (*b6 == '*')
    {
        bombCount += 1;
    }
    if (*b7 == '*')
    {
        bombCount += 1;
    }
    if (*b8 == '*')
    {
        bombCount += 1;
    }
    return bombCount;
}
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    char mine[51][51];
    int bomb[51][51];
    for (int i = 1; i < h + 1; i++)
    {
        for (int k = 1; k < w + 1; k++)
        {
            scanf(" %c", &mine[i][k]);
        }
    }
    for (int i = 0; i < h+1; i++)
    {
        for (int k = 0; k < w+1; k++)
        {
            bomb[i][k] = 0;
        }
    }
    for (int i = 1; i < h+1; i++)
    {
        for (int k = 1; k < w+1; k++)
        {
            bomb[i][k]+= checkMine(&mine[i - 1][k + 1], &mine[i - 1][k],&mine[i - 1][k - 1],&mine[i][k - 1],&mine[i + 1][k - 1],&mine[i + 1][k],&mine[i][k + 1],&mine[i + 1][k + 1]);
        }
    }
    for (int i = 1; i < h+1; i++)
    {
        for (int k = 1; k < w+1; k++)
        {
            if (bomb[i][k] != 0&&mine[i][k]!='*')
                printf("%d", bomb[i][k]);
            else
                printf("*");
        }
        printf("\n");
    }


}