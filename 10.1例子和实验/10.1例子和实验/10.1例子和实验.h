
// 10.1���Ӻ�ʵ��.h : 10.1���Ӻ�ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy101���Ӻ�ʵ��App:
// �йش����ʵ�֣������ 10.1���Ӻ�ʵ��.cpp
//

class CMy101���Ӻ�ʵ��App : public CWinApp
{
public:
	CMy101���Ӻ�ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy101���Ӻ�ʵ��App theApp;
