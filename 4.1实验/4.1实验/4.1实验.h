
// 4.1ʵ��.h : 4.1ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy41ʵ��App:
// �йش����ʵ�֣������ 4.1ʵ��.cpp
//

class CMy41ʵ��App : public CWinAppEx
{
public:
	CMy41ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41ʵ��App theApp;
