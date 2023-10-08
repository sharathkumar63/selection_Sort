
#include <stdio.h>

int main()
{
    int n,i,j,arr[100],temp,min_index;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   
    }
    
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        
        for(j=i+1;j<n;j++)   
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        
        temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }
    
    printf("The sorted array elements are : \n ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
