// Program to find the common element in given three sorted arrays.
#include<stdio.h>
#include<conio.h>
void main()
{
     int ar1[20],ar2[20],ar3[20],m,n,p,c,i,j,k;
     clrscr();
     printf("Enter first array size\n");
     scanf("%d",&m);
     printf("Enter array elements\n");
     for(i=0;i<m;i++)
     {
	  scanf("%d",&ar1[i]);
     }

     printf("Enter second array size\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&ar2[i]);
     }
     printf("Enter third array size\n");
     scanf("%d",&p);
     printf("Enter array elements\n");
     for(i=0;i<p;i++)
     {
	  scanf("%d",&ar3[i]);
     }
     for(i=0;i<m;i++)
     {
	 c=ar1[i];
	 for(j=0;j<n;j++)
	 {
	      if(c==ar2[j])
	      {
		   for(k=0;k<p;k++)
		   {
			if(c==ar3[k])
			{
			    printf("%d is common in all three arrays\n",c);
			}
		   }
	      }
	 }
     }
     getch();
}