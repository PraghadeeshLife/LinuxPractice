#include <stdio.h>
int main()
{
  int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
  int pos = 0;
  printf("Enter the Position of bit that you want to set \n");
  scanf("%d", &pos);
  int val = 1;
  val = val << pos;
  val = ~val;
  int final = n & val;

  for (c = 31; c >= 0; c--)
  {
    k = final >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
