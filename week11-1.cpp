#include <stdio.h>
int a[10000000];
int main()
{
	int m,i,k;
	scanf("%d",&m);
	for(i=2;i<m;i++){
	if(a[i]==0){
	printf("%d ",i);
	for(k=i+i;k<m;k+=i){
	a[k]=1;}
	    }
	}
}

