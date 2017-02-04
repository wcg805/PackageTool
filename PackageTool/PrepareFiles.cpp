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

	//加载xml文件
	if (!inXml->LoadFile("F:\\Projects\\PackageTool\\Debug\\config.xml"))  //判断XML文件是否加载成功
	{
		MessageBoxW(NULL, L"配置文件加载失败", L"ERROR", MB_OK);
		return FALSE;
	}
	//定义根节点，记录xml文件的起始节点
	TiXmlElement *inRoot = inXml->FirstChildElement(); //root指向xml文档的第一个节点
	inXml->Value();//获取的值为文件名
				   //定义根节点并连接,将输入的根节点传给输出的根节点
	

	if ( inRoot == NULL ) //判断文件是否有内容
	{
		//cerr << "No root element ！！！" << endl;
		inXml->Clear();
		return 0;
	}
	//循环遍历每个节点
	for (TiXmlElement *inElem = inRoot->FirstChildElement(); inElem != NULL; inElem = inElem->NextSiblingElement())
	{
		const char *name = inElem->Value();//获取源文件中子节点的名字
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
