#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <stdlib.h>
#include "cfg_op.h"
#include "myop.h"
//#include <srting.h>

#define DB_sid "oracle_sid"
#define DB_User "appuser"
#define DB_PassWord "appuser"
#define CFG_FILENAME "c:/cfg.ini"
void main_menu()
{
	printf("\n1 AddTeacher(测试老师信息)");
	printf("\n2 ModifyTeacher(测试显示信息)");
	printf("\n0 exit(0)");
	printf("\nplease enter your choice : [1 / 2 / 0];");
	return;
}
int Test_AddTeacher()
{
	int rv = 0;
	char *pfileName = "c:/teacherinfo.ini";
	Teacher t1;
	memset(&t1, 0, sizeof(Teacher));
	t1.infoId = 1;
	t1.age = 11;
	strcpy(t1.name,"name");
	strcpy(t1.studentInfo,"s1,s2,s3");

	//添加老师
	rv = AddTeacher(pfileName,&t1);
	printf("通过\n");
End:
	return rv;
}
int Test_ModifyTeacher()
{
	printf("2");
}
int main()
{
	printf("Hello");
	
	int choice = 0;
	main_menu();
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			Test_AddTeacher(); break;
		case 2:
			Test_AddTeacher(); break;
		case 0:
			exit(0);
		default:
			exit(0);

	}
	return 0;
}