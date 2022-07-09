#include <stdio.h>
void nhap(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {

        printf("a[%d]: ", i);

        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{

    printf("Mang vua nhap la: \n");

    for (int i = 0; i < n; i++)
    {

        printf("%5d", a[i]);
    }
}
int sotat(int a[], int n) 
    for (int i = 1; i <= 4; i++)
{
    int dem = 0;
    for (int j = 0; j < 10; j++)
    {

        if (i == a[j])
        {
            dem++;
        }
    }
    dem = dem / 2;
}
int main()
{
    int a[1000];
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    xuatmang(a, n);
    printf("%d doi tat so %d \n", dem, i);
}