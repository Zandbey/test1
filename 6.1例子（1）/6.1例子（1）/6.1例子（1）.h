
// 6.1���ӣ�1��.h : 6.1���ӣ�1�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy61���ӣ�1��App:
// �йش����ʵ�֣������ 6.1���ӣ�1��.cpp
//

class CMy61���ӣ�1��App : public CWinAppEx
{
public:
	CMy61���ӣ�1��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy61���ӣ�1��App theApp;
