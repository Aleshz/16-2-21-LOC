#include <stdio.h>
int main()
{
    int size,i,j,k,sum=0,s=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements in the array:");
    for(i=0;i<size;++i)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<size;++j)
    {
        if(a[j]%2==0)
        {
            s+=a[j];
        }

    }
    for(k=0;k<size;k+=2)
    {
        sum+=a[k];
    }
    printf("Sum of even elements in array is:%d\n",s);
    printf("Sum of even posiitioned elements in array is:%d",sum);
    return 0;
}
