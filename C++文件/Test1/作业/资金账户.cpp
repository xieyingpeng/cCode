/*
	Name: 资金账户管理 
	Copyright: 添加新流水记录，查询资金账户最后余额 
	Author: 谢应鹏 
	Date: 23/09/20 15:50
	Description: 
*/

#include<stdio.h>
#include<stdlib.h>
long size;//用来保存sizeof(struct LogDate) 
struct LogDate{ //记录的结构 
	long logid;//记录的ID
	char logdate[11];//记录发生的日期
	char lognote [15];//记录事件说明 
	double charge;//发生费用，负表示支出，正表示收入
	double balance;//余额
	 
	
}; 
int inputchoice(){//选择参数操作 
	int mychoice;
	printf("\n Enter your choice:\n");
	printf("1-Add a new cash LOG.\n2-List All Cash LOG.\n");
	printf("3-Query Last Cash LOG. \n0-End progran.\n");
	scanf("%d",&mychoice);
	return mychoice;
	
}
long getLogcount (FILE *cfptr){//获取文件记录总数
	long begin,end,logcount;
	fseek(cfptr ,0L,SEEK_SET);
	begin = ftell(cfptr);
	fseek(cfptr,size,SEEK_END);
	end= ftell(cfptr);
	logcount =(end-begin)/size-1;
	return logcount; 
	
}
void ListAllong(FILE *cfptr){//列出所有收支流水账
	struct LogDate log;
	fseek(cfptr,0L,SEEK_SET);//定位指针到文件开始位置
	fread(&log,size,1,cfptr);
	printf("logid logdate loginote charge balance\n") ;
	while(!feof(cfptr));{
	
	printf("%6ld%-11s%-15s%10.2lf%10.2lf\n",log.logid,log.logdate,log.lognote,log.charge,log.balance);
	fread(&log,size,1,cfptr);
	};
	
}
void QueryLastLog(FILE *cfptr){//查询显示最后一天记录 
	struct LogDate log;
	long logcount;
	logcount=getLogcount(cfptr);
	if(logcount>0){//表示有记录存在 
		fseek(cfptr,size*(logcount-1),SEEK_SET);//定位最后记录 
		fread(&log,size,1,cfptr);//读取最后记录 
		printf("The last log is:\n");
		printf("logid:%-6ld\nlogdate:%-11s\nlognote:%-15\n",log.logid,log.logdate,log.lognote);
		printf("charge:-10.2lf\nba;ance:-10%.2lf\n",log.charge,log.balance);
		
		
	}
	else
		printf("no logs file!");
}
void AddNewLog(FILE *cfptr){//添加新记录 
	struct LogDate log,lastlog;
	long logcount;
	printf("Input logdate (format:2006-01-1):");
	scanf("%s",log.logdate);
	printf("Input lognote:");
	scanf("%s",log.lognote);
	printf("Input Charge:Income+and expend-:");
	scanf("%lf",&log.charge);
	logcount= getLogcount(cfptr);//获取记录数 
	if(logcount>0){
		fseek(cfptr,size*(logcount-1),SEEK_SET);
		fread (&lastlog,size,1,cfptr);//读入最后记录
		log.logid=lastlog.logid+1;//记录号按顺序是上次的号+1
		log.balance=log.charge+lastlog.balance; 
	} 
	else{//如果文件是初始化，记录数为0 
		log.logid=1;
		log.balance=log.charge;
		
	}
	rewind(cfptr);
	printf("logid=%ld\n,log.logid");
	fwrite(&log,sizeof(struct LogDate),1,cfptr);//写入记录 
	 
}
FILE *openfile(char *openmode){//打开文件
	FILE *fp;
	if((fp=fopen("cashbox.dat",openmode))==NULL);{

		printf("can not open file cashbox.dat!\n");
		exit(0);
	}
	return (fp);
	
} 
int main(void){
	FILE *fp;int choice;
	size=sizeof(struct LogDate);
	while((choice=inputchoice())!=0);{
		switch (choice){
			case 1:
				fp =openfile("ab+");
				AddNewLog(fp);
				break;
			case 2:
				fp=openfile("rb");//列出所有的收入支出情况
				ListAllong(fp);
				break;
			case 3 :
				fp=openfile("rb");//查询最后记录余额
				QueryLastLog(fp);
				break;
			dafault:
				printf("Input Error:") ;
				break;
				 
				
		}
	}
	if(fclose(fp)){
		printf("Can not close the file! \n");
		exit(0);
	}
	return 0;
	
}

 
