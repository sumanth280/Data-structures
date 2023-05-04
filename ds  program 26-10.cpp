#include <stdio.h>
int main()
{ 
 int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
 printf("enter no.of rows and columns in first matrix");
 	scanf("%d%d",&r1,&c1);
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			scanf("%d",&a[i][j]);
		 }
	 }
  printf("elements in first matrix is,\n");
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			printf("%d\t",a[i][j]);
		 }
	 }
	 printf("\n,enter the no.of rows and columns in second matrix");
	 scanf("%d%d",&r2,&c2);
	 for(i=0;i<r2;i++)
	 {
	 	for(j=0;j<c2;j++)
	 	{
	 		scanf("%d",&b[i][j]);
		 }
	 }
	  printf("second matrix is,\n");
	 for(i=0;i<r2;i++)
	 {
	 	for(j=0;j<c2;j++)
	 	{
	 		printf("%d\t",b[i][j]);
		 }
	 
	 }
	 printf("matrix multiplication is\n");	
	
	if(c1==r1);
	     
	   printf("matrix can be multiplied,\n"); 
}
    else
	 printf("matrix can't be multiplied,n");
	  for(i=0;i<r1;i++)
	      {
	     	for(j=0;j<c2;j++)
	 	    {
	 	    	c[i][j]=0;
	 		    for(k=0;k<c2;k++)
	 		   {
	 			c[i][j]=(a[i][j]*b[i][j]);
			    } 
		    }
	      }
	 return 0;
	 
}

