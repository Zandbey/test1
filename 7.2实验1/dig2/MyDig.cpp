// MyDig.cpp : 实现文件
//

#include "stdafx.h"
#include "dig2.h"
#include "MyDig.h"
#include "afxdialogex.h"


// MyDig 对话框

IMPLEMENT_DYNAMIC(MyDig, CDialogEx)

MyDig::MyDig(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDig::~MyDig()
{
}

void MyDig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDig, CDialogEx)
END_MESSAGE_MAP()


// MyDig 消息处理程序
