#include <stdio.h>
int a[10000000]={};
int main()
{
	int n;
	scanf("%d",&n);
	///int ans=0;

	for(int i=2;i<n;i++)
	{
		if(a[i]==0){
		///ans++;
		printf("%d ",i);
		for(int k=i+i;k<=n;k=k+i){
		a[k]=1;
		}
		}
	}
	///printf("%d\n",ans);
}
