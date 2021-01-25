#include<stdio.h>
#include <malloc.h>
#define ERROR 0
#define OVERFLOW -2
#define OK 1

#define MAXSIZE 100   // 初始分配的顺序表长度
typedef int ElemType;  //定义表元素的类型
typedef  int Status;

typedef struct {
	ElemType elem; //存储空间的基地址
	int length; //当前长度
}SqList;

int InitList_sq(SqList &L);                              
int CreateList_sq(SqList &L,int n);                      
int ListInsert_sq(SqList &L,int i,ElemType e);                 
int PrintList_sq(SqList L); // 输出顺序表的元素
int ListDelete_sq(SqList &L,int i); //删除第i个元素
int ListLocate(SqList &L,ElemType e); //查找值为e的元素

Status InitList_sq(SqList &L)  //算法2.1 顺序表的初始化(构造一个空的顺序表L)
{	
	L.elem=(ElemType)malloc(MAXSIZE)sizeof(ElemType));
 //为顺序表分配一个大小为MAXSIZE的数组空间
	if (!L.elem)
		return(OVERFLOW); //存储分配失败退出
	L.length = 0 ; //空表长度为0
	return OK;
	
}//InitList


int CreateList_sq(SqList &L,int n){
    ElemType e;
    int i;
    for(i=0;in;i++){
        printf("input data %d" ,i+1);
        scanf("%d",&e);
        if(!ListInsert_sq(L, i+1 ,e))
            return ERROR;
    }
    return OK;
}

//输出顺序表中的元素
int PrintList_sq(SqList L){
    int i;
    for(i=0;i<L.length;i++)
        printf("%5d", L.elem[i]  );
    return OK;
}

int ListInsert_sq(SqList &L,int i,ElemType e){
    int k;
	if(i>L.length+1) 
	return ERROR;    
	if(L.length==MAXSIZE){  
	return ERROR; 

 	for(k=L.length-1;k=i-1;k--){         
    L.elem[   k+1  ]= L.elem[  k   ];
    L.elem[i-1]=e;                     
    ++L.length   ;               
    return OK;
	}
}

//在顺序表中删除第i个元素,并用e返回其值，i值的合法范围是1=i=L.length 
/*Status ListDelete_Sq(SqList &L, int i,ElemType &e) {


}*/

//在顺序表中查找指定值元素，返回其序号
/*int ListLocate(SqList &L,ElemType e){    


}*/

int main(){
    SqList sl;
    int n,m,k;
    printf(please input n); // 输入顺序表的元素个数
    scanf("%d",&n);
	if(n==0){
		printf("参数错误，退出。");
  	return 0;
	}  
	
    printf(n1-Create SqListn);
    InitList_sq(sl);
    CreateList_sq(sl,n);
    printf(n2-Print SqListn);
    PrintList_sq(sl);
    printf(nplease input insert location and data(location,data)n);
	scanf("%d ,%d"&m,&k);
	ListInsert_sq(sl,m,k);
	printf(n3-Print SqListn);
	PrintList_sq(sl);
	printf(n);

   return 0;
}
