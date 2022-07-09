#include<stdio.h>
int main(){
    int n;
    int min=9;
    printf("Nhap so");
    scanf("%d",&n);
    while(n>10) 
    {
        if(min>n%10){
            min=n%10;
        }
        n=n/10;
    }
    printf(" so nho nhat la %d",min);
    
}