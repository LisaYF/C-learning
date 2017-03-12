# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main (void)
{
	int n;
	while (~scanf("%d",&n))
	{
		getchar();//一定要用getchar吃掉scanf遗留在缓存区的回车字符'\n' 
		int i,count,length;
		char str[50];
		
		while (n--)
		{	
			count = 0;//注意初始化 
			gets(str);//用gets函数而不用scanf是因为scanf遇到空格会判定输入结束，gets则不会 
			//isalhpa函数：实参为英文字母则返回非0值；否则返回0 
			if ( (isalpha(str[0]) || (str[0]=='_') )==0)//如果首字符不是字母也不是下划线则直接输出no 
			{
				printf("no\n");
					continue;//直接进入下一次循环 
			}
			else
			{	
				length = strlen(str);//计算字符数组长度 
				for (i=0;i<length;i++)//计算合法字符的数量 
				{	//合法标识符：字母，数字，下划线（本题不考虑关键字，只有这三个！） 
					if ( isalpha(str[i])|| (str[i]=='_') || str[i]>='0'&&str[i]<='9' )
						count++;	
				}		
			}
			
			if (length == count)//合法字符数量等于字符数组长度则输出yes 
				printf("yes\n");
			else
				printf("no\n");	
		}		
	}	
	return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main() {
// 	char a[55];
// 	int n = 0;
// 	while (~scanf("%d\n", &n)) {
// 		for (int i = 0; i < n; i++) {
// 			gets(a);
// 				// scanf("%c", &a[j]);//%c空格 回车 制表符都会读
// 				// a[j + 1] = '\0'; //%c没有\0结尾，%s有\0结尾
		
// 			printf("%s\n", a);
// 			int length = strlen(a); //计算字符串的长度
// 			// int length = sizeof(a) / sizeof(a[0]);数组的长度
// 			int len = 1;
// 			if ((a[0] >= 'a' && a[0] <= 'Z') || (a[0] == '_')) {
// 				len++;
// 				for (int j = 1; j < length; j++) {
// 					if ((a[j] >= 'a' && a[j] <= 'Z') || (a[j] == '_') || (a[j] >= '0' && a[j] <= '9')) {
// 						len++;
// 					}
// 				}
// 				if (len == length) {
// 					printf("yes");
// 				}
// 				else {
// 					printf("no");
// 				}
// 			}
// 			else {
// 				printf("no");
// 			}

// 		}
// 	}
// 	return 0;
// }