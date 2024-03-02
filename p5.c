/* Binary Search*/
#include<stdio.h>
int BinarySearch(int [],int,int);
int main()
{
   int n,i,item,a[10],loc;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array: ");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("\nArray  elements are ");
   for(i=0;i<n;i++)
	printf("%d\t",a[i]);
   printf("\nEnter the element to search: ");
   scanf("%d",&item);
   loc=BinarySearch(a,n,item);
   if(loc==-1)
	   printf("%d is not found\n",item);
   else
	   printf("%d is found after binary search\n",item);
}

int BinarySearch(int a[],int n,int item)
{
	 int i,l,r,mid;
	 l=0,r=n-1;
	 while(l<r)
	 {
	   mid=(l+r)/2;
           if (item==a[mid])
	     return mid;
	   else
           {
	     if (item<a[mid])
	     r=mid-1;
           else 
	      l=mid+1;
         }
         return -1;
}	        
}	 
