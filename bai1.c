#include<stdio.h>
int main()
{
    int a;
    printf("Nhap so ngyen a:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("%d la so nguyen am",a);
    }
    else if(a==0)
    {
        printf("%d khong la so nguyen am , khong la so nguyen duong",a);
    }
    else{
        printf("%d la so nguyen duong",a);
    }

}