#pragma once
#include "afxwin.h"


// MYDialog �Ի���

class MYDialog : public CDialogEx
{
	DECLARE_DYNAMIC(MYDialog)

public:
	MYDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	CEdit fuhao;
	int c;
};
