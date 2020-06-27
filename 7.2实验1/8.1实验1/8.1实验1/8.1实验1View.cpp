
// 8.1实验1View.cpp : CMy81实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8.1实验1.h"
#endif

#include "8.1实验1Doc.h"
#include "8.1实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy81实验1View

IMPLEMENT_DYNCREATE(CMy81实验1View, CView)

BEGIN_MESSAGE_MAP(CMy81实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy81实验1View 构造/析构

CMy81实验1View::CMy81实验1View()
{
	// TODO: 在此处添加构造代码
	

}

CMy81实验1View::~CMy81实验1View()
{
}

BOOL CMy81实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy81实验1View 绘制

void CMy81实验1View::OnDraw(CDC* pDC)
{
	CMy81实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		cr.SetRect(500, 300, 700, 400);
		h_height = 50;
		h_width = 100;
		p.SetPoint(600, 350);
		flag = 0;
		pDC->Rectangle(cr);
	}
	else {
		pDC->Rectangle(p.x - h_width, p.y - h_height, p.x + h_width, p.y + h_height);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy81实验1View 诊断

#ifdef _DEBUG
void CMy81实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy81实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy81实验1Doc* CMy81实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy81实验1Doc)));
	return (CMy81实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy81实验1View 消息处理程序


void CMy81实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 2;
	CView::OnLButtonDown(nFlags, point);
}


void CMy81实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 3;
	CView::OnLButtonUp(nFlags, point);
}


void CMy81实验1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 2) {

		p = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
