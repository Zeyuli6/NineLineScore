
// test4.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"	
#include "test4Dlg.h"
// Ctest4App:
// �йش����ʵ�֣������ test4.cpp
//

class Ctest4App : public CWinApp
{
public:
	
	Ctest4App();
	Ctest4Dlg pDlg;

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Ctest4App theApp;