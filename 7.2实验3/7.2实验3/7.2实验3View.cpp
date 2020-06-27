
// 7.2实验3View.cpp : CMy72实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7.2实验3.h"
#endif

#include "7.2实验3Doc.h"
#include "7.2实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy72实验3View

IMPLEMENT_DYNCREATE(CMy72实验3View, CView)

BEGIN_MESSAGE_MAP(CMy72实验3View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy72实验3View 构造/析构

CMy72实验3View::CMy72实验3View()
{
	// TODO: 在此处添加构造代码
	p.SetPoint(150, 150);
	x = 50;
}

CMy72实验3View::~CMy72实验3View()
{
}

BOOL CMy72实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy72实验3View 绘制

void CMy72实验3View::OnDraw(CDC* pDC)
{
	CMy72实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == -1) {
		cr.SetRect(p.x - x, p.y - x, p.x + x, p.y + x);
		pDC->Ellipse(cr);
	}
	else {
		cr.SetRect(p.x - x, p.y - x, p.x + x, p.y + x);
		pDC->Ellipse(cr);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy72实验3View 诊断

#ifdef _DEBUG
void CMy72实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy72实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy72实验3Doc* CMy72实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy72实验3Doc)));
	return (CMy72实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy72实验3View 消息处理程序


void CMy72实验3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	f = flag;
	flag = 0;
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy72实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 0) { //表示暂停，恢复到上一次的状态
		flag = f;
	}
	else if (flag == -1) {
		f = flag;
		flag = 2;
	}


	SetTimer(1, 500, NULL);
	CView::OnLButtonDown(nFlags, point);
}


void CMy72实验3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1) {

		if (p.x - x <= 0) {
			f = flag;
			flag = 2;
		}
		else
			p.x -= x;
	}
	else  if (flag == 2) {
		if (p.x + x >= CR.Width()) {
			f = flag;
			flag = 1;
		}
		else
			p.x += x;
	}
	Invalidate();

	CView::OnTimer(nIDEvent);
}
