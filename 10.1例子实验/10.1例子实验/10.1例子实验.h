
// 10.1����ʵ��.h : 10.1����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy101����ʵ��App:
// �йش����ʵ�֣������ 10.1����ʵ��.cpp
//

class CMy101����ʵ��App : public CWinAppEx
{
public:
	CMy101����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy101����ʵ��App theApp;
