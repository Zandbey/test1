
// 4.1实验View.cpp : CMy41实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1实验.h"
#endif

#include "4.1实验Doc.h"
#include "4.1实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41实验View

IMPLEMENT_DYNCREATE(CMy41实验View, CView)

BEGIN_MESSAGE_MAP(CMy41实验View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy41实验View 构造/析构

CMy41实验View::CMy41实验View()
{
	// TODO: 在此处添加构造代码

}

CMy41实验View::~CMy41实验View()
{
}

BOOL CMy41实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41实验View 绘制

void CMy41实验View::OnDraw(CDC* pDC)
{
	CMy41实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41实验View 诊断

#ifdef _DEBUG
void CMy41实验View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41实验Doc* CMy41实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41实验Doc)));
	return (CMy41实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41实验View 消息处理程序


void CMy41实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy41实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x1 = point.x;
	pDoc->y1 = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy41实验View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy41实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x2 = point.x;
	pDoc->y2 = point.y;
	CRect rc;
	rc.SetRect(pDoc->x1, pDoc->y1, pDoc->x2, pDoc->y2);
	CClientDC dc(this);
	dc.Rectangle(rc);
	CView::OnLButtonUp(nFlags, point);
}


void CMy41实验View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString ss;
	ss.Format(_T("X=%d  Y=%d"), point.x, point.y);
	dc.TextOutW(100, 100, ss);
	CView::OnMouseMove(nFlags, point);
}
