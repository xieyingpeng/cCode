
#include<stdio.h>
//���к��������� 
void printPerson(); //������������ 
void judgmentGrade();//�жϵȼ�����
void printDelete();//����ѧ�����ɾ��
void scoreSort();//��������

int static n, a[100];//����Ϊȫ�ֱ��� 
int main() {//������ 
	printPerson(); //������������ 
	judgmentGrade();//�жϵȼ�����
	scoreSort();//��������
	printDelete();//����ѧ�����ɾ��
	return 0;
}
void printPerson() {//������������ 
	int i, c;//n,�����ѧ���ɼ�������i,�ڼ���ѧ����c,ѧ���ɼ�
	printf("��Ҫ����ѧ����������");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("��%d��ѧ���ĳɼ�Ϊ��", i);
		scanf_s("%d", &a[i]);
	}
}
void scoreSort() {//���з�������
	int i = 1;
	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= n - j; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[i + 1];
				a[j + 1] = temp;
			}
		}

	}
	printf("��%dλͬѧ�ķ�������С�����˳��Ϊ��", n);
	for (i = 1; i <= n; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");

}
void judgmentGrade() {//�жϵȼ����� 

	for (int i = 1; i <= n; i++)
	{
		if (a[i] >= 90 && a[i] <= 100) printf("��%d��ѧ���ĳɼ��ȼ�ΪA\n", i);
		else if (a[i] >= 80)  printf("��%d��ѧ���ĳɼ��ȼ�ΪB\n", i);
		else if (a[i] >= 70)  printf("��%d��ѧ���ĳɼ��ȼ�ΪC\n", i);
		else if (a[i] >= 60)  printf("��%d��ѧ���ĳɼ��ȼ�ΪD\n", i);
		else if (a[i] > 0)printf("��%d��ѧ���ĳɼ�ΪE\n", i);
		else printf("��%d��ѧ���ĳɼ�Ϊerror", i);
	}
}
void printDelete() {//����ѧ�����ɾ�� 
	printf("��������Ҫɾ��ѧ�������:\n");
	int b;
	scanf_s("%d", &b);
	printf("ʣ��%d��ѧ���ĳɼ�\n", n - 1);

	for (int j = 1; j <= n; j++)
	{
		if (j < b)
			printf("��%d��ѧ���ĳɼ�%d\n", j, a[j]);
		if (j > b)
			printf("��%d��ѧ���ĳɼ�%d\n", j - 1, a[j - 1]);
	}
}