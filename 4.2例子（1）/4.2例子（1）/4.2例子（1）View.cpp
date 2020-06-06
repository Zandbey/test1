
// 4.2例子（1）View.cpp : CMy42例子（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.2例子（1）.h"
#endif

#include "4.2例子（1）Doc.h"
#include "4.2例子（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42例子（1）View

IMPLEMENT_DYNCREATE(CMy42例子（1）View, CView)

BEGIN_MESSAGE_MAP(CMy42例子（1）View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy42例子（1）View 构造/析构

CMy42例子（1）View::CMy42例子（1）View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy42例子（1）View::~CMy42例子（1）View()
{
}

BOOL CMy42例子（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy42例子（1）View 绘制

void CMy42例子（1）View::OnDraw(CDC* pDC)
{
	CMy42例子（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set =false;
		}
	}
	for (int  i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy42例子（1）View 诊断

#ifdef _DEBUG
void CMy42例子（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42例子（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42例子（1）Doc* CMy42例子（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42例子（1）Doc)));
	return (CMy42例子（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42例子（1）View 消息处理程序


void CMy42例子（1）View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
