
// 7.2ʵ��3.h : 7.2ʵ��3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy72ʵ��3App:
// �йش����ʵ�֣������ 7.2ʵ��3.cpp
//

class CMy72ʵ��3App : public CWinAppEx
{
public:
	CMy72ʵ��3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy72ʵ��3App theApp;
