#include<stdio.h>
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap ptu a[%d]=", i);
        scanf("%d", &a[i]);
    }
}