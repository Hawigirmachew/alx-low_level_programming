#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main: Entry of the programm
 *
 *Return
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX() / 2;
if (n == 0)
{
printf("Equal to Zero");
}
else if (n > 0)
{
printf("%d is positive",n);
}
else
{
printf("%d is negative",n);
}

return (0);
}
