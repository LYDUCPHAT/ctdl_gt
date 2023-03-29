#include<stdio.h>
#include<conio.h>

long tinhXn(int n);
long tinhYn(int n);

long tinhXn(int n)
{
    if(n == 0){
        return 1;
    }
    else{
        return tinhXn(n - 1) + tinhYn(n - 1);
    }
}

long tinhYn(int n)
{
    if(n == 0){
        return 0;
    }
    else{
        return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
    }
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);

    printf("\nX(n) = %ld, Y(n) = %ld", kq1, kq2);

    getch();
    return 0;
}
