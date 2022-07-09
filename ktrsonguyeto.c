#include <stdio.h>
#include <conio.h>
void nhapmang(int a[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("Phan tu thu a[%d] : ", i );
        scanf("%d", &a[i]);
    }
}
    int nguyento(int a[], int n)
    {
        int i;
        if (a[i] == 1) return 0;
        else
        {
            for (int i = 2; i <= a[i]; i++)
            {
                if (a[i] % i == 0)
                    return 0;
            }
                    return 1;
        }
    }
    int main()
    {
        int a[1000];
        int n;
        printf("nhap n: ");
        scanf("%d", &n);
        nhapmang(a, n);
        printf("%d",nguyento(a, n));
    }