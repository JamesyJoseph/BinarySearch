#include<stdio.h>
int main()
  { 
    int i,n,a[20],low,high,mid,key;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    printf("Enter the element to be search \n :");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
       {
         if(a[mid]<key)
           {
             low=mid+1;
             mid=(low+high)/2;
           }
         else if(a[mid]==key)
           {
             printf("%d is found in %d position",key,mid+1);
             break;
           }
         else 
           {
             high=mid-1;
             mid=(low+high)/2; 
           }
        }
   if(low>high) 
           {
             printf("Element is not found");
           }
     return 0;
}
