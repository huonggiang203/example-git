#include <stdio.h>
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap ptu a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
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
int solon(int a[], int n)
{
    int maxx = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = j + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                maxx = a[i];
                a[i] = a[j];
                a[j] = maxx;
            }
        }
    }
    return a[n - 1];
}
int main()
{
    int a[1000];
    int n;
    scanf("%d", &n);
    nhapmang(a, n);
    printf("----- gia tri lon nhat cua mang la ----\n");
    printf("pp1 : gia tri lon nhat %d\n", max(a, n));
    printf("pp2 : %d\n", solon(a, n));
    printf("pp3: %d\n", dequi(a, n));
    return 0;
}