#include<stdio.h>
int main(){
    int a[20],i;
    for(i=0;i<10;i++)
    {
        printf("nhap vao so thu %d\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("day so in nguoc la:\t");
    for(i=9;i>=0;i--)
    {   
        printf("%d\t",a[i]);
    }
}
