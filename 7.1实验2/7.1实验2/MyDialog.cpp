// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "7.1ʵ��2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

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


// MyDialog ��Ϣ�������
void MyDialog::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString temp;
	temp = A;
	A = B;
	B = temp;
	this->UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}