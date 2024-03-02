/* Bubble sort*/
#include<stdio.h>
void BubbleSort(int [],int);
int main()
{
	int n,i,a[10];
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nArray elements are ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	BubbleSort(a,n);
}

void BubbleSort(int a[],int n)
{
   int i,j,temp,flag;
   for(i=0;i<n-1;i++)
   {
     flag=0;
     for(j=0;j<n-1-1;j++)
     {
	if(a[j]>a[j+1])
	{
	  temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
          flag=1;
        }
     }
   }
   printf("\nAfter Bubble sort, array elements are\n");
   for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}   
