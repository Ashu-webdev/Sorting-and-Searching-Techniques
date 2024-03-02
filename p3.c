/*Insertion sort*/
#include<stdio.h>
void InsertionSort(int [],int);
int main()
{
   int n,a[10],i;
   printf("Enter size of matrix: ");
   scanf("%d",&n);
   printf("Enter elements of array: ");
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("\nArray elemets are ");
   for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
   InsertionSort(a,n);
}

void InsertionSort(int a[],int n)
{
  int i,temp,j;
  for(i=1;i<n;i++)
  {
	temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
	{
	  a[j+1]=a[j];
          j--;
	}
  
  a[j+1]=temp;
  }
  printf("\nAfter insertion sort, array elemets are\n");
  for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}  


