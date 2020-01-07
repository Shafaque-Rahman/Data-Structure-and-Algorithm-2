// Program to find the largest subarray with equal number of 0's and 1's.
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[20],i,j,sum1=0,sum2=0,p,q,n,max=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
	  //p=i;
	  sum1=0;
	  sum2=0;
	  for(j=i;j<n;j++)
	  {
	       if(a[j]==1)
	       {
		   sum1++;
	       }
	       if(a[j]==0)
	       {
		   sum2++;
	       }
	       if(sum1==sum2 && j-i>max)
	       {
		    p=i;
		    q=j;
		    max=j-i;
	       }
	  }
     }
     printf("\nThe largest sub-array is:-\n");
     for(i=p;i<=q;i++)
     {
	  printf("%d ",a[i]);
     }
     getch();
}