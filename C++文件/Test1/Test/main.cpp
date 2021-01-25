#include<stdio.h>
//进行函数的声明 
void printPerson(); //输入人数函数 
void judgmentGrade();//判断等级函数
void printDelete();//输入学生序号删除
void scoreSort();//分数排序

int static n, a[100];//定义为全局变量 
int main() {//主函数 
	printPerson(); //输入人数函数 
	judgmentGrade();//判断等级函数
	scoreSort();//分数排序
	printDelete();//输入学生序号删除
	return 0;
}
void printPerson() {//输入人数函数 
	int i, c;//n,输入的学生成绩个数，i,第几个学生，c,学生成绩
	printf("需要输入学生的人数：");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("第%d个学生的成绩为：", i);
		scanf_s("%d", &a[i]);
	}
}
void scoreSort() {//进行分数排序
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
	printf("这%d位同学的分数按从小到大的顺序为：", n);
	for (i = 1; i <= n; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");

}
void judgmentGrade() {//判断等级函数 

	for (int i = 1; i <= n; i++)
	{
		if (a[i] >= 90 && a[i] <= 100) printf("第%d个学生的成绩等级为A\n", i);
		else if (a[i] >= 80)  printf("第%d个学生的成绩等级为B\n", i);
		else if (a[i] >= 70)  printf("第%d个学生的成绩等级为C\n", i);
		else if (a[i] >= 60)  printf("第%d个学生的成绩等级为D\n", i);
		else if (a[i] > 0)printf("第%d个学生的成绩为E\n", i);
		else printf("第%d个学生的成绩为error", i);
	}
}
void printDelete() {//输入学生序号删除 
	printf("请输入需要删除学生的序号:\n");
	int b;
	scanf_s("%d", &b);
	printf("剩下%d个学生的成绩\n", n - 1);

	for (int j = 1; j <= n; j++)
	{
		if (j < b)
			printf("第%d个学生的成绩%d\n", j, a[j]);
		if (j > b)
			printf("第%d个学生的成绩%d\n", j - 1, a[j - 1]);
	}
}