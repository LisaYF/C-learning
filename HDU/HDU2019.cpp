#include<stdio.h>
int main(){
	int n=0,m=0;
	int a[105];
	while(scanf("%d%d",&n,&m),n||m){
		//输入数组
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		//找到位置,后移再放入m
		int t=0;
		for(int j=0;j<n;j++){
			if(m<a[j]){//后移 456 1
				t=j;
				break;
			}
			else{
				t=n;
			}
		}
			for(int i=n-1;i>=t;i--){
					a[i+1]=a[i];
				}
				a[t]=m;
		//输出数组
		for(int i=0;i<=n;i++){
			if(i!=0){
				printf(" ");
			}
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}