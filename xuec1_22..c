#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�жϴ�С������
//��˴洢����λ���ݴ洢�ڸ�λ��ַ
//С�˴洢����λ���ݴ洢�ڵ�λ��ַ 
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
	//�����С�ˣ�����1
	//����Ǵ�ˣ�����0 
	ret=Check_sys();
	if(ret==1){
		printf("��С��\n");
	}
	else{
		printf("�Ǵ��\n");
	}
	return 0;
}*/
//-1������ ԭ�룺10000000 000000000 000000000 000000001
//���룺11111111 11111111 11111111 111111110
//���룺11111111 11111111 11111111 11111111  

 
int main(){
	char a=-1;
	signed char b=-1;
	unsigned char c=-1;
	
	printf("%d,%d,%d",a,b,c);
	return 0;
}
