
// 8.1ʵ��.h : 8.1ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy81ʵ��App:
// �йش����ʵ�֣������ 8.1ʵ��.cpp
//

class CMy81ʵ��App : public CWinAppEx
{
public:
	CMy81ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy81ʵ��App theApp;
