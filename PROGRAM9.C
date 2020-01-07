/* Program to find the contiguous sub-array with maximum sum,
   for a given array of positive and negative numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int n,a[20],i,j,sum=0,max;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	   scanf("%d",&a[i]);
     }
     max=a[0];
     for(i=0;i<n;i++)
     {
	  sum=0;
	  for(j=i;j<n;j++)
	  {
	      sum+=a[j];
	      if(max<sum)
	      {
		    max=sum;
	      }
	  }
     }
     printf("Maximum sum of contiguous sub-array is %d",max);
     getch();
}