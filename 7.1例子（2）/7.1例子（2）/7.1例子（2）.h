
// 7.1例子（2）.h : 7.1例子（2） 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy71例子（2）App:
// 有关此类的实现，请参阅 7.1例子（2）.cpp
//

class CMy71例子（2）App : public CWinAppEx
{
public:
	CMy71例子（2）App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy71例子（2）App theApp;
