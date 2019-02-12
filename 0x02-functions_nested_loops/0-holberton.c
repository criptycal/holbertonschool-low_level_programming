#include <stdio.h>

int main(void)
{
  putcharFunction();
  return(0);
}

int putcharFunction()
{
  char holbertonSchool [15] = "Holberton\n";
  int i = 0;
  while (i<=11)
    {
      putchar(holbertonSchool[i]);
      i++;
    }
    
  return (0);    
}
