#include<stdio.h>
int main()
{
    double n,a[2000];
    int i,j;

    scanf("%lf",&n);

    for(i=0;i<100;i++)
    {

            a[i]=n;
            n/=2;


    }
    for(i=0;i<100;i++)
        printf("N[%d] = %.4lf\n",i,a[i]);
    return 0;
}
