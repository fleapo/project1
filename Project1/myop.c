#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "myop.h"



int AddTeacher(char *pFileName, Teacher *pTe)
{
	int ret = 0;
	//配置文件的关键字，根据ID动态构建
	int Teacher_InfoID[128];
	char Teacher_Name[128];
	char Teacher_Age[128];
	char Teacher_StudentInfo[1024];
	char infoId[128];
	char infoAge[128];

	sprintf(Teacher_InfoID, "%s%d", "Teacher_InfoID_", pTe->infoId);
	sprintf(Teacher_Name, "%s%d", "Teacher_Name_", pTe->name);
	sprintf(Teacher_Age, "%s%d", "Teacher_Age_", pTe->age);
	sprintf(Teacher_StudentInfo, "%s%d", "Teacher_StudentInfo_", pTe->studentInfo);
	sprintf(infoId, "%s%d", "%s", pTe->infoId);
	sprintf(infoAge, "%s%d", "%s", pTe->age);
	
	
	ret=WriteCfgItem(pFileName , Teacher_InfoID ,infoId, strlen(infoId) );
	if (ret != 0)
	{
		printf("error");
		return ret;
	}

	ret = WriteCfgItem(pFileName , Teacher_Name, infoId, strlen(infoId) );
	if (ret != 0)
	{
		printf("error");
		return ret;
	}

	ret = WriteCfgItem(pFileName , Teacher_Age, infoId, strlen(infoId) );
	if (ret != 0)
	{
		printf("error");
		return ret;
	}

	ret = WriteCfgItem(pFileName , Teacher_StudentInfo, infoId, strlen(infoId) );
	if (ret != 0)
	{
		printf("error");
		return ret;
	}
	
	return 0;
}



void main1()
{
	int a = 1;
	printf("123");
}        