/* Given an array of integers, sort the array into a wave like array
   and return it.(arrange the element into a sequence such that
   a1>=a2<=a3>=a4<=a5-----etc.)  */
#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int n,a[20],p[20],i,q=0,r=0,size;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     size=n;
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	   scanf("%d",&a[i]);
     }
     sort(a,n);
     i=0;
     while(i<n)
     {
	  if(q==0)
	  {
	       p[r]=a[n-1];
	       n--;
	       q=1-q;
	  }
	  else
	  {
	      p[r]=a[i];
	      i++;
	      q=1-q;
	  }
	  r++;
     }
     printf("\nsorting in wave like array is :-\n");
     for(i=0;i<size;i++)
     {
	  printf("%d ",p[i]);
     }
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