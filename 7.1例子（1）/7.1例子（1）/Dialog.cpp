// Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "7.1���ӣ�1��.h"
#include "Dialog.h"
#include "afxdialogex.h"


// Dialog �Ի���

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


// Dialog ��Ϣ�������


void Dialog::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
