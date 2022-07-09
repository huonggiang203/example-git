#include <stdio.h>
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap ptu a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
int dequi(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (dequi(a, n - 1) > a[n - 1])
        return dequi(a, n - 1);
    else
        return a[n - 1];
}
int dequi2(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (dequi2(a, n - 1) < a[n - 1])
        return dequi2(a, n - 1);
    else
        return a[n - 1];
}
int main()
{
    int a[1000];
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    printf("max =%d\n", dequi(a, n));
    printf("min=%d", dequi2(a, n));
    return 0;
}