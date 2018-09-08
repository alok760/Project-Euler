
# include <stdio.h>
# include <math.h>

void maxPrimeFactor(int n)
{
    long int max=2;
    while (n%2 == 0)
        n = n/2;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(i>max)
            max=i;
            n = n/i;
        }
    }
    if (n > 2)
        max=n;
    printf("%d\n",max);
}

int main()
{
    long int t,inp;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&inp);
      maxPrimeFactor(inp);
    }
    return 0;
}
