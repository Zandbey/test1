
// 5.1���ӣ�2��.h : 5.1���ӣ�2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy51���ӣ�2��App:
// �йش����ʵ�֣������ 5.1���ӣ�2��.cpp
//

class CMy51���ӣ�2��App : public CWinAppEx
{
public:
	CMy51���ӣ�2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy51���ӣ�2��App theApp;
