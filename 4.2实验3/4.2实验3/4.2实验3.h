
// 4.2ʵ��3.h : 4.2ʵ��3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy42ʵ��3App:
// �йش����ʵ�֣������ 4.2ʵ��3.cpp
//

class CMy42ʵ��3App : public CWinAppEx
{
public:
	CMy42ʵ��3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy42ʵ��3App theApp;
