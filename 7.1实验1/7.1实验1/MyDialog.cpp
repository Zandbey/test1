// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "7.1ʵ��1.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, eixt(_T(""))
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, eixt);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������
