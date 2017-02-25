#include<stdio.h>
int main(){
	int n=0;
	int biggest=0,smallest=0;
	int s[105];
	while(~scanf("%d",&n)){
		double average=0;
		int sum=0;
		for(int i=0;i<n;++i){
			scanf("%d",&s[i]);
		}
		//找最高分最低分。
		biggest=s[0];
		smallest=s[0];
		for(int j=1;j<n;++j){
			if(biggest<s[j]){
				biggest=s[j];
			}
			if(smallest>s[j]){
				smallest=s[j];
			}
		}
		for(int i=0;i<n;++i){
			sum=sum+s[i];
		}
		average=(double)(sum-biggest-smallest)/(n-2);//显示转换类型
		printf("%.2f\n",average);
	}
	return 0;
}