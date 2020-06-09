// Dialog.cpp : 实现文件
//

#include "stdafx.h"
#include "7.1例子（1）.h"
#include "Dialog.h"
#include "afxdialogex.h"


// Dialog 对话框

IMPLEMENT_DYNAMIC(Dialog, CDialogEx)

Dialog::Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, y(0)
	, x(0)
	, r(0)
{

}

Dialog::~Dialog()
{
}

void Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, y);
	DDV_MinMaxInt(pDX, y, 0, 500);
	DDX_Text(pDX, IDC_EDIT2, x);
	DDV_MinMaxInt(pDX, x, 0, 500);
	DDX_Text(pDX, IDC_EDIT3, r);
	DDV_MinMaxInt(pDX, r, 1, 500);
}


BEGIN_MESSAGE_MAP(Dialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Dialog::OnEnChangeEdit2)
END_MESSAGE_MAP()


// Dialog 消息处理程序


void Dialog::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
