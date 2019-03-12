#include<stdio.h>
int main()
{
    int arr[16],i,par[15],impar[15],even=0,odd=0,j;

    for(i=0; i<15; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<15; i++)
    {
        if(arr[i]%2==0)
        {
            par[even++]=arr[i];
            if(even==5)
            {
                for(j=0; j<5; j++)
                    printf("par[%d] = %d\n",j,par[j]);
                even=0;
            }
        }
        else
        {
            impar[odd++]=arr[i];
            if(odd==5)
            {
                for(j=0; j<5; j++)
                    printf("impar[%d] = %d\n",j,impar[j]);
                odd=0;
            }
        }
    }

    for(i=0;i<odd;i++)
        printf("impar[%d] = %d\n",i,impar[i]);
    for(i=0;i<even;i++)
        printf("par[%d] = %d\n",i,par[i]);
}
