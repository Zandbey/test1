
// 6.1���ӣ�2).h : 6.1���ӣ�2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy61���ӣ�2App:
// �йش����ʵ�֣������ 6.1���ӣ�2).cpp
//

class CMy61���ӣ�2App : public CWinAppEx
{
public:
	CMy61���ӣ�2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy61���ӣ�2App theApp;
