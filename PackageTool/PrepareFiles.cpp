#include "stdafx.h"

int PrepareFile::PrePareFile()
{
	return 0;
}

PrepareFile::~PrepareFile()
{
}

BOOL PrepareFile::GetFileList()
{
	TiXmlDocument *inXml = new TiXmlDocument();

	//����xml�ļ�
	if (!inXml->LoadFile("F:\\Projects\\PackageTool\\Debug\\config.xml"))  //�ж�XML�ļ��Ƿ���سɹ�
	{
		MessageBoxW(NULL, L"�����ļ�����ʧ��", L"ERROR", MB_OK);
		return FALSE;
	}
	//������ڵ㣬��¼xml�ļ�����ʼ�ڵ�
	TiXmlElement *inRoot = inXml->FirstChildElement(); //rootָ��xml�ĵ��ĵ�һ���ڵ�
	inXml->Value();//��ȡ��ֵΪ�ļ���
				   //������ڵ㲢����,������ĸ��ڵ㴫������ĸ��ڵ�
	

	if ( inRoot == NULL ) //�ж��ļ��Ƿ�������
	{
		//cerr << "No root element ������" << endl;
		inXml->Clear();
		return 0;
	}
	//ѭ������ÿ���ڵ�
	for (TiXmlElement *inElem = inRoot->FirstChildElement(); inElem != NULL; inElem = inElem->NextSiblingElement())
	{
		const char *name = inElem->Value();//��ȡԴ�ļ����ӽڵ������
		if (strcpy((char *)name, "File") == 0)
		{
			const char *rName = inElem->Attribute("name");
			const char *rType = inElem->Attribute("type");
			const char *rSize = inElem->Attribute("path");

			FILE *file = new FILE();
			file->wszFileName;

		}
		
		//if (strcmp(name, "0"))
		//{
		//	for (TiXmlElement *inChild = inElem->FirstChildElement(); inChild != NULL; inChild = inChild->NextSiblingElement())
		//	{
		//		
		//	}
		//}
	}














	return 0;
}
