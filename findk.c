#include<stdio.h>
void main()
{
    int a[10],n,flag=0,k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        flag=1;
    }
}
if(flag==1)
printf("yes");
else
printf("no");
}
