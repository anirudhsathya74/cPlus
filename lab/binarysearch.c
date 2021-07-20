#include <stdio.h>
int main()
{
    int a[10],n,low,mid,high,key,i,flag=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("enter the %d elements in ascending order = ",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter key to be searched = ");
        scanf("%d",&key);
        low=0;
        high=n-1;
        while(low<=high)
        {
          mid=(low+high)/2;
          if(a[mid]==key)
          {
              flag=1;
              break;
          }
          else if(a[mid]<key)
          {
              low=mid+1;
          }
          else
          {
              high=mid-1;
          }
        }
        if(flag==1)
        printf("Success found in %d location",mid+1);
        else
        printf("key not found");
    }
    else
    printf("invalid input");
}