#include<stdio.h>
#include <malloc.h>
#define ERROR 0
#define OVERFLOW -2
#define OK 1

#define MAXSIZE 100   // ��ʼ�����˳�����
typedef int ElemType;  //�����Ԫ�ص�����
typedef  int Status;

typedef struct {
	ElemType elem; //�洢�ռ�Ļ���ַ
	int length; //��ǰ����
}SqList;

int InitList_sq(SqList &L);                              
int CreateList_sq(SqList &L,int n);                      
int ListInsert_sq(SqList &L,int i,ElemType e);                 
int PrintList_sq(SqList L); // ���˳����Ԫ��
int ListDelete_sq(SqList &L,int i); //ɾ����i��Ԫ��
int ListLocate(SqList &L,ElemType e); //����ֵΪe��Ԫ��

Status InitList_sq(SqList &L)  //�㷨2.1 ˳���ĳ�ʼ��(����һ���յ�˳���L)
{	
	L.elem=(ElemType)malloc(MAXSIZE)sizeof(ElemType));
 //Ϊ˳������һ����СΪMAXSIZE������ռ�
	if (!L.elem)
		return(OVERFLOW); //�洢����ʧ���˳�
	L.length = 0 ; //�ձ���Ϊ0
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

//���˳����е�Ԫ��
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

//��˳�����ɾ����i��Ԫ��,����e������ֵ��iֵ�ĺϷ���Χ��1=i=L.length 
/*Status ListDelete_Sq(SqList &L, int i,ElemType &e) {


}*/

//��˳����в���ָ��ֵԪ�أ����������
/*int ListLocate(SqList &L,ElemType e){    


}*/

int main(){
    SqList sl;
    int n,m,k;
    printf(please input n); // ����˳����Ԫ�ظ���
    scanf("%d",&n);
	if(n==0){
		printf("���������˳���");
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
