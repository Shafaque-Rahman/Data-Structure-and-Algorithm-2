/* Program to find the index in an array such that the sum of elements at
   lower indices is equal to the sum of elements at higher indices.*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[20],n,i,j,k,q=0,sum1=0,sum2=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {    sum1=0;
	  sum2=0;
	  for(j=i-1;j>=0;j--)
	  {
	       sum1+=a[j] ;
	  }
	  for(k=i+1;k<n;k++)
	  {
	       sum2+=a[k];
	  }
	  if(sum1==sum2)
	  {

	       printf("%d is element at index no %d from where sum of elements at lower indices is equal to sum of elements at higher indices\n",a[i],i);
	       q=1;
	       break;
	  }
     }
     if(q==0)
     {
	  printf("No such index is present\n");
     }
     getch();
}