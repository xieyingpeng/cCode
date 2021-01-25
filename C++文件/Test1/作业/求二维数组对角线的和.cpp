#include<stdio.h>
void fun(){
	int a[3][3],sum;
	int i,j;
	sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("请输入第%d个数：",i+1);
			scanf("%d",&a[i][j]);
		}
		for(i=0;i<3;i++){
			sum+=a[i][i];
			printf("%d",sum);
			
		}
		
		
	}
}
int main(){
	fun();
	//return 0； 
}
