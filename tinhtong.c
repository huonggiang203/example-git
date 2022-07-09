#include <stdio.h>
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap ptu a[%d]=", i);
        scanf("%d",&a[i]);
    }
}
int dequi(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[n - 1] % 2 == 0)
        return (a[n - 1]) + dequi(a, n - 1);
    else
        return dequi(a, n - 1);
}
int tinhtong(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
int tinhtong2(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        s+=a[i];
    }
    return s;
}
int main()
{
    int a[1000];
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    printf("-------ket qua tinh tong so chan trong mang la -------\n");
    printf("pp1: %d ", dequi(a, n));
    printf("pp2: %d\n ", tinhtong(a, n));
    printf("pp3: %d\n ", tinhtong2(a, n));
}