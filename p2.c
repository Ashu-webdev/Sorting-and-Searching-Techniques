/*Selection sort*/
#include<stdio.h>
void SelectionSort(int [] ,int);
int main()
{
   int a[10],n,i;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array: ");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Before selection sort, elements of array are ");
   for(i=0;i<n;i++)
	printf("%d\t",a[i]);
   SelectionSort(a,n);
}   
void SelectionSort(int a[],int n)
{
   int i,j,large,pos;
   for(i=n-1;i>0;i--)
   {
	 large=a[0];
         pos=0;
         for(j=1;j<=i;j++)
	 {
	   if(a[j]>large)
	   {
	     large=a[j];
             pos=j;
           }
         }
         a[pos]=a[i];
         a[i]=large;
    }
    printf("\nAfter Selection sort, array elements are\n");
    for(i=0;i<n;i++)
	    printf("%d\t",a[i]);
}   
