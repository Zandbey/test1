#pragma once
#include "afxwin.h"


// MYDialog 对话框

class MYDialog : public CDialogEx
{
	DECLARE_DYNAMIC(MYDialog)

public:
	MYDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MYDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	CEdit fuhao;
	int c;
};
