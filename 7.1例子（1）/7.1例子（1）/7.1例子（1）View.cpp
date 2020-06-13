
// 7.1例子（1）View.cpp : CMy71例子（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7.1例子（1）.h"
#endif

#include "7.1例子（1）Doc.h"
#include "7.1例子（1）View.h"
#include "Dialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71例子（1）View

IMPLEMENT_DYNCREATE(CMy71例子（1）View, CView)

BEGIN_MESSAGE_MAP(CMy71例子（1）View, CView)
	ON_COMMAND(ID_SHOW, &CMy71例子（1）View::OnShow)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy71例子（1）View 构造/析构

CMy71例子（1）View::CMy71例子（1）View()
{
	// TODO: 在此处添加构造代码

}

CMy71例子（1）View::~CMy71例子（1）View()
{
}

BOOL CMy71例子（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy71例子（1）View 绘制

void CMy71例子（1）View::OnDraw(CDC* /*pDC*/)
{
	CMy71例子（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy71例子（1）View 诊断

#ifdef _DEBUG
void CMy71例子（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71例子（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71例子（1）Doc* CMy71例子（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71例子（1）Doc)));
	return (CMy71例子（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71例子（1）View 消息处理程序


void CMy71例子（1）View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	Dialog dlg;
	int t = dlg.DoModal();
	if (t==IDOK)
	{
		int R, x, y;
		R = dlg.r;
		x = dlg.x;
		y = dlg.y;
		CRect re(x - R, y - R, x + R, y + R);
		GetDC()->Ellipse(re);
	}

}


void CMy71例子（1）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Dialog *pD = new Dialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}


