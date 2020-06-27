
// dig2View.cpp : Cdig2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "dig2.h"
#endif
#include "dig2View.h"
#include "dig2Doc.h"
#include "MyDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdig2View

IMPLEMENT_DYNCREATE(Cdig2View, CView)

BEGIN_MESSAGE_MAP(Cdig2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cdig2View 构造/析构

Cdig2View::Cdig2View()
{
	// TODO: 在此处添加构造代码

}

Cdig2View::~Cdig2View()
{
}

BOOL Cdig2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdig2View 绘制

void Cdig2View::OnDraw(CDC* pDC)
{
	Cdig2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdig2View 诊断

#ifdef _DEBUG
void Cdig2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdig2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdig2Doc* Cdig2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdig2Doc)));
	return (Cdig2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdig2View 消息处理程序


void Cdig2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDig mydig;
	int r = mydig.DoModal();
	if (r==IDOK)
	{

	}
	CView::OnRButtonDblClk(nFlags, point);
}
