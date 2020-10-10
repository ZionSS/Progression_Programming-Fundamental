#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void Forward(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = B;
    *f = T;
    *b = D;
    *d = F;
}

void Backward(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = F;
    *f = D;
    *b = T;
    *d = B;
}

void Left(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = R;
    *l = T;
    *r = D;
    *d = L;
}

void Right(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = L;
    *l = D;
    *r = T;
    *d = R;
}

void Clockwise(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *f = R;
    *l = F;
    *b = L;
    *r = B;
}

void counterClockwise(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *f = L;
    *l = B;
    *b = R;
    *r = F;
}

int main(){
    int n,len;
    char input[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",input);
        len=strlen(input);
        int dice[] = {1,2,3,5,4,6};
        for(int j=0;j<len;j++){
            if(input[j]=='F')      Forward(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
            else if(input[j]=='B') Backward(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
            else if(input[j]=='L') Left(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
            else if(input[j]=='R') Right(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
            else if(input[j]=='C') Clockwise(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
            else if(input[j]=='D') counterClockwise(&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
        }
        printf("%d ",dice[1]);
    }

    return 0;
}