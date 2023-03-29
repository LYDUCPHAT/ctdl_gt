#include<stdio.h>
#include<conio.h>
int tinh (int x, int n)
{
  if (n == 0)
    {
      return 0;
    }
  else if (n == 1)
    {
      return x;
    }
  else
    {
      return (1 + x / n) * tinh (x, n - 1) - (x / n) * tinh (x, n - 2);
    }
}

int
main ()
{
  int x;
  int n;
  printf ("Nhap x: ");
  scanf ("%d", &x);
  printf ("Nhap n: ");
  scanf ("%d", &n);
  float kq = tinh (x, n);
  printf ("ket qua= %.2f", kq);
  getch ();
  return 0;
}
