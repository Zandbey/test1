
// 7.1实验1View.cpp : CMy71实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7.1实验1.h"
#endif

#include "7.1实验1Doc.h"
#include "7.1实验1View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71实验1View

IMPLEMENT_DYNCREATE(CMy71实验1View, CView)

BEGIN_MESSAGE_MAP(CMy71实验1View, CView)
	ON_EN_CHANGE(IDC_EDIT1, &CMy71实验1View::OnEnChangeEdit1)
	ON_COMMAND(ID_showeixt, &CMy71实验1View::Onshoweixt)
END_MESSAGE_MAP()

// CMy71实验1View 构造/析构

CMy71实验1View::CMy71实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy71实验1View::~CMy71实验1View()
{
}

BOOL CMy71实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy71实验1View 绘制

void CMy71实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy71实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy71实验1View 诊断

#ifdef _DEBUG
void CMy71实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71实验1Doc* CMy71实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71实验1Doc)));
	return (CMy71实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71实验1View 消息处理程序


void CMy71实验1View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码

}


void CMy71实验1View::Onshoweixt()
{
	MyDialog myDialog;
	int r = myDialog.DoModal();
	if (r == IDOK) {
		CString s = _T("你已退出对话框");
		GetDC()->TextOutW(200, 200, s);
	}
	// TODO: 在此添加命令处理程序代码
}
