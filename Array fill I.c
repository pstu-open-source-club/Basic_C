#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    printf("N[0] = %d\n",n);
    for(i=1,j=n;i<10;i++){
        printf("N[%d] = %d\n",i,j+j);
        j+=j;
    }

    return 0;
}
