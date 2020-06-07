
// 4.2实验3View.cpp : CMy42实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.2实验3.h"
#endif

#include "4.2实验3Doc.h"
#include "4.2实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42实验3View

IMPLEMENT_DYNCREATE(CMy42实验3View, CView)

BEGIN_MESSAGE_MAP(CMy42实验3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy42实验3View 构造/析构

CMy42实验3View::CMy42实验3View()
{
	// TODO: 在此处添加构造代码
	cr.SetRect(0, 0, 200, 200);
}

CMy42实验3View::~CMy42实验3View()
{
}

BOOL CMy42实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy42实验3View 绘制

void CMy42实验3View::OnDraw(CDC*pDC)
{
	CMy42实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(cr);
	if (set == 1) {
		SetTimer(1, rand() & 100 + 1, NULL);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy42实验3View 诊断

#ifdef _DEBUG
void CMy42实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42实验3Doc* CMy42实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42实验3Doc)));
	return (CMy42实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42实验3View 消息处理程序


void CMy42实验3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect CR;
	GetClientRect(&CR);
	if (nIDEvent == 1) {
		cr.top += 10 * f;
		cr.bottom += 10 * f;
		if (cr.bottom > CR.bottom)
			f = -1;
		if (cr.top < CR.top)
			set = 0;
		Invalidate();
	}
	CView::OnTimer(nIDEvent);
}
