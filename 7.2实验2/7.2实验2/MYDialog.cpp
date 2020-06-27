// MYDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "7.2实验2.h"
#include "MYDialog.h"
#include "afxdialogex.h"


// MYDialog 对话框

IMPLEMENT_DYNAMIC(MYDialog, CDialogEx)

MYDialog::MYDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MYDialog::~MYDialog()
{
}

void MYDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Control(pDX, IDC_EDIT3, fuhao);
	DDX_Text(pDX, IDC_EDIT4, c);
}


BEGIN_MESSAGE_MAP(MYDialog, CDialogEx)
END_MESSAGE_MAP()


// MYDialog 消息处理程序
