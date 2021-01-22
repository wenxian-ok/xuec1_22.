#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//判断大小端问题
//大端存储：低位数据存储在高位地址
//小端存储：高位数据存储在低位地址 
/*int Check_sys(){
	int a=1;
	char* p=(char*)&a;
	if(*p==1){
		return 1;
	}
	else 
	return 0;
}*/
/*int Check_sys(){
	int a=1;
	char* p=(char*)&a;
	return *p;
}*/
/*int Check_sys(){
	int a=1;
	return *(char*)&a;
}
int main(int argc, char** argv) {
	int ret=0;
	//如果是小端，返回1
	//如果是大端，返回0 
	ret=Check_sys();
	if(ret==1){
		printf("是小端\n");
	}
	else{
		printf("是大端\n");
	}
	return 0;
}*/
//-1二进制 原码：10000000 000000000 000000000 000000001
//反码：11111111 11111111 11111111 111111110
//补码：11111111 11111111 11111111 11111111  

 
int main(){
	char a=-1;
	signed char b=-1;
	unsigned char c=-1;
	
	printf("%d,%d,%d",a,b,c);
	return 0;
}
