
// 4.2实验2View.cpp : CMy42实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.2实验2.h"
#endif

#include "4.2实验2Doc.h"
#include "4.2实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42实验2View

IMPLEMENT_DYNCREATE(CMy42实验2View, CView)

BEGIN_MESSAGE_MAP(CMy42实验2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy42实验2View 构造/析构

CMy42实验2View::CMy42实验2View()
{
	// TODO: 在此处添加构造代码
	width = 100;
	height = 50;
	flag = 1;
}

CMy42实验2View::~CMy42实验2View()
{
}

BOOL CMy42实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy42实验2View 绘制

void CMy42实验2View::OnDraw(CDC* pDC)
{
	CMy42实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		flag = 0;
		GetClientRect(&pDoc->CR);
		mx = (pDoc->CR.right - pDoc->CR.left) / 2;
		my = (pDoc->CR.bottom - pDoc->CR.top) / 2;
		x = mx;
		y = my;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		pDC->Rectangle(pDoc->cr);
	}
	else
		pDC->Rectangle(pDoc->cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy42实验2View 诊断

#ifdef _DEBUG
void CMy42实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42实验2Doc* CMy42实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42实验2Doc)));
	return (CMy42实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42实验2View 消息处理程序


void CMy42实验2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMy42实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	switch (nChar)
	{
	case VK_LEFT:
	{
		mx -= 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_RIGHT:
	{

		mx += 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_DOWN:
	{

		my += 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_UP:
	{

		my -= 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_HOME:
	{
		mx -= width, my -= height;
		width += width;
		height += height;

		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_END:
	{
		mx += width / 2, my += height / 2;
		width -= width / 2;
		height -= height / 2;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	}
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMy42实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CMy42实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	pDoc->cr.SetRect(x - 100, y - 50, x + 100, y + 50);
	height = 50, width = 100;
	mx = x, my = y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
