/*
	Name: ��һ�����ݱհ��Ĺ�ϵ����
	Copyright: 
	Author:  
	Date: 28/09/20 13:52
	Description: 
	/*Warshall�㷨�����������ģ�
	�������ǰ�R�þ����ʾ������
	Ȼ��ӵ�һ�п�ʼ���б��������ڵ�i�У�
	���ϵ��±���ÿ��Ԫ�أ������i�е�j�е�Ԫ��Ϊ1��	
	�򽫵�i�ж�Ӧ�żӵ���j���ϡ� 
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	int N; 
	int a[N][N];
	printf("���������������磺3����");
	scanf("%d",&N);
	printf("������������������ 3����");
	scanf("%d",&N);
	printf("�������ϵ����M:\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		scanf("%d",&a[i][j]);
	printf("��Ӧ��ϵ����MΪ:\n");
	for(i=0;i<N;i++)//��ʾ����Ĺ�ϵ���� 
	{
		for(j=0;j<N;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	for(j=0;j<N;j++)//��Warshall�㷨
	{
		for(i=0;i<N;i++)
		if(a[i][j]!=0)
		{
		for(k=0;k<N;k++)
		a[i][k]=a[j][k]+a[i][k];
	}
	}
	for(i=0;i<N;i++)//��ÿһ�������и�ֵ 1��0 
		for(j=0;j<N;j++)
		{
		if(a[i][j]==0)
		a[i][j]=0;
		else
		a[i][j]=1;
	}
	printf("���ݱհ�����Ӧ�Ĺ�ϵ����M(t(R)):\n");
	for(i=0;i<N;i++)//������ݱհ���Ӧ�Ĺ�ϵ���� 
	{
		for(j=0;j<N;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}
