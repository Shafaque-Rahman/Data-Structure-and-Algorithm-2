/* Program to find the smallest integer value that can not be
   represented as sum of any subset of a given array.*/
#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int a[20],n,i,j,sum=0,x=1,q=1,p;
     clrscr();
     printf("Enter array size\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     sort(a,n);
     i=0;
     p=1;
     while(i+q!=n)
     {
	  for(i=0;i<n;i++)
	  {
	      sum=0;
	      for(j=i;j<i+q;j++)
	      {
		    sum+=a[j];
		    if(x==sum)
		    x++;
		    if(x<sum)
		    break;
	      }
	      q++;
	  }
	  p++;
	  q=p;
     }
     printf("The smallest integer is %d",x);
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

