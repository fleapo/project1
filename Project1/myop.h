#pragma once
typedef struct _Teacher
{
	char name[64];
	int age;
	char studentInfop[1024];

}Teacher;

int AddTeacher(char *pfileName, Teacher *pTe);

int ModifyTeacher(char *pfileName, Teacher *pTe);
