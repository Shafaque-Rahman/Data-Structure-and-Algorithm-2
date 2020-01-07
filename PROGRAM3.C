// Program to find the triplet whose sum is X.
#include<stdio.h>
#include<conio.h>
void main()
{
      int a[20],n,i,j,k,p,q,r,x;
      clrscr();
      printf("Enter size of array\n");
      scanf("%d",&n);
      printf("Enter array elements\n");
      for(i=0;i<n;i++)
      {
	   scanf("%d",&a[i]);
      }
      printf("Enter value of sum x to find triplet\n");
      scanf("%d",&x);
      for(i=0;i<n;i++)
      {
	   p=a[i];
	   if(p<x)
	   {
		for(j=i+1;j<n;j++)
		{
		     q=p+a[j];
		     if(q<x)
		     {
			   for(k=j+1;k<n;k++)
			   {
				r=a[k];
				if(q+r==x)
				{
				    printf("%d,%d and %d is the triplet whose sum is %d\n",p,q-p,r,x);
				}
			   }
		     }
		}
	   }
      }
      getch();
}