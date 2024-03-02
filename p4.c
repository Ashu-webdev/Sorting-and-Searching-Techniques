/* Linear Search */
#include<stdio.h>
int main()
{
   int n,i,a[10],item,count;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array: ");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
   printf("\nEnter the element you want to search: ");
   scanf("%d",&item);
   for(i=0;i<n;i++)
   {	   
	   if(a[i]==item)
		   count=0;
           else
		   count++;
   }
   if(count==0)
	   printf("\n%d is present in array\n",item);
   else
	   printf("\n%d is not present in array\n",item);
}   
   

