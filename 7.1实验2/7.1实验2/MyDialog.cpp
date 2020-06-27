// MyDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "7.1实验2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog 对话框

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, Hi(_T(""))
	, place(_T(""))
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Hi);
	DDX_Text(pDX, IDC_EDIT2, place);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
END_MESSAGE_MAP()


// MyDialog 消息处理程序
void MyDialog::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString temp;
	temp = A;
	A = B;
	B = temp;
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}