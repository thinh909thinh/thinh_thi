#include<stdio.h>
int tong(int a,int b);
int hieu(int a,int b);
int nhan(int a,int b);
float chia(float a,float b);
int main(){
    int c,a,b,s,r,n;
    float ch; 
    printf("nhap vao a va b");
    scanf("%d%d",&a,&b);
    printf("chon 1 tinh tong\t 2 tinh hieu\t3nhan \t4chia\t5thoat");
    fflush(stdin);
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        s=tong(a,b);
        printf("\ntong cua 2 so la:%d",s);
        break;
    
     case 2:
        r=hieu(a,b);
        printf("\nhieu cua 2 so la:%d",r);
        break;
    case 3:
        n=nhan(a,b);
        printf("\nnhan cua 2 so la:%d",n);
        break;
    case 4:
    if(b==0){
        printf("nhap b khong hop le");
    }else
    {
        ch=chia(a,b);
        printf("\nchia cua 2 so la:%f",ch);
    }
        break;
    case 5:
        printf("\nthoat");
        break;
    default:
        break;
    }
}
int tong(int a,int b){
    int s=a+b; 
    return s;
}
int hieu(int a,int b){
    int r;
    if(a>b){
        r=a-b; 

    }else
    r=b-a;
    return r;
}
int nhan(int a,int b){
    int n=a*b; 
    return n;
}
float chia(float a,float b){
    float ch=a/b;
    return ch;
}