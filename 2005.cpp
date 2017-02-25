#include <cstdio>
int mouth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int y,m,d,f,sum;
	while(~scanf("%d/%d/%d",&y,&m,&d)){
		sum=0,f=0;
		if((y%4==0&&y%100!=0)||y%400==0)f=1;
		for(int i=1;i<m;i++){
			sum+=mouth[i];
		}
		if(f==1&&m>2)sum++;
		sum+=d;
		printf("%d\n",sum);
	}
	return 0;
}