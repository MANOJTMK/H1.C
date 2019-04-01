#include<stdio.h>
int main()
{
#include <stdio.h>

int main()
{
    int a[100],c[100],l=0,b[100],i,j,n,d=0,k=0,temp,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
d=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
d++;
}
}
if(d>1)
{
b[k]=a[i];
k++;
}
}
for(i=0;i<k;i++)
{
for(j=i+1;j<n;++j)
{
    if(b[i]==b[j])
    {
       b[i]='$'; 
    }
}
}
for(i=0;i<k;i++)
{
    if(b[i]!='$')
    {
 c[l]= b[i];
 l++;
}
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l-1;j++)
{
    if(c[i]>c[j])
    {
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
for(i=0;i<l;i++)
{
    printf("%d",c[i]);
}

    return 0;
}
