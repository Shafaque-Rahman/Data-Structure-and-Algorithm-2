/* Program to find the number of triangles that can be formed with
   three different array elements as three sides of triangle, for a
   given unsorted array of n elements.*/

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int a[2],i,j,k,p,q,count=0,n;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     sort(a,n);
     for(i=0;i<n;i++)
     {
	  p=a[i];
	  for(j=i+1;j<n;j++)
	  {
	      q=p+a[j];
	      for(k=j+1;k<n;k++)
	      {
		   if(q>a[k])
		   {
			count++;
		   }
	      }
	  }
     }
     printf("\nTotal number of triangle formed is %d\n",count);
     getch();
}
void sort(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i-1;j>=0 && temp<a[j];j--)
       {
	  a[j+1]=a[j];
       }
       a[j+1]=temp;
   }
}
