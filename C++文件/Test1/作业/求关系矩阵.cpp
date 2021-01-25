/*
	Name: 求一个传递闭包的关系矩阵
	Copyright: 
	Author:  
	Date: 28/09/20 13:52
	Description: 
	/*Warshall算法是这样工作的：
	首先我们把R用矩阵表示出来，
	然后从第一列开始逐列遍历，对于第i列，
	从上到下遍历每个元素，如果第i列第j行的元素为1，	
	则将第i行对应着加到第j行上。 
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	int N; 
	int a[N][N];
	printf("请输入列数（例如：3）：");
	scanf("%d",&N);
	printf("请输入行数数（例如 3）：");
	scanf("%d",&N);
	printf("请输入关系矩阵M:\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		scanf("%d",&a[i][j]);
	printf("对应关系矩阵M为:\n");
	for(i=0;i<N;i++)//显示输入的关系矩阵 
	{
		for(j=0;j<N;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	for(j=0;j<N;j++)//用Warshall算法
	{
		for(i=0;i<N;i++)
		if(a[i][j]!=0)
		{
		for(k=0;k<N;k++)
		a[i][k]=a[j][k]+a[i][k];
	}
	}
	for(i=0;i<N;i++)//对每一个数进行赋值 1或0 
		for(j=0;j<N;j++)
		{
		if(a[i][j]==0)
		a[i][j]=0;
		else
		a[i][j]=1;
	}
	printf("传递闭包所对应的关系矩阵M(t(R)):\n");
	for(i=0;i<N;i++)//输出传递闭包对应的关系矩阵 
	{
		for(j=0;j<N;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}
