#include<stdio.h>
int main()
{
    int n,a[2000],i,j;

    scanf("%d",&n);

    for(i=0;i<1000; )
    {
        for(j=0;j<n;i++,j++){
            a[i]=j;

        }
    }
    
    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,a[i]);
    return 0;
}
