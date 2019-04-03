#include <stdio.h>

int main(void) {
	int a[100],i,j,temp,k=0,n,b[100],c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]==i)
	   {
	   	b[k]=a[i];
	   	k++;
	   	c=0;
	   }}
	   for(i=0;i<n;i++)
	   {
	   	for(j=i+1;j<n;j++)
	   	{
	   		if(a[i]>a[j])
	   		{
	   			temp=a[i];
	   			a[i]=a[j];
	   			a[j]=temp;
	   		}
	   	}
	   }
	   if(c==1)
	   {
	   	printf("-1");
	   }
	   else
	   {
	     for(i=0;i<k;i++)
	     {
	     	
	     
	   printf("%d",b[i]);
	   }}

	return 0;
}
