// Program to find the sub-array whose sum is X.
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[20],i,j,x,sum=0,n,ind1,ind2,q=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
      printf("Enter value of X whose sum of sub array you want to find\n");
     scanf("%d",&x);
     for(i=0;i<n;i++)
     {
	  sum=0;
	  ind1=i;
	  for(j=i;j<n;j++)
	  {
	       sum+=a[j];
	       if(sum==x)
	       {
		    ind2=j;
		    q=1;
		    break;

	       }
	       else if(sum<x);
	       else if(sum>x)
	       {
		  break;
	       }
	  }
	  if(q==1)
	  {
	       printf("\nThe sub array is :-\n");
	       for(i=ind1;i<=ind2;i++)
	       {
		   printf("%d ",a[i]);
	       }

	       q=0;
	  }
     }

     getch();
}