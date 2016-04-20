#pragma once
typedef struct _Teacher
{
	int infoId;
	char name[64];
	int age;
	char studentInfo[1024];

}Teacher;

int AddTeacher(char *pfileName, Teacher *pTe)
{
	return 1;
}

int ModifyTeacher(char *pfileName, Teacher *pTe);
