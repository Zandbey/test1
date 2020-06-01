
// 4.1例子(7)View.cpp : CMy41例子7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1例子(7).h"
#endif

#include "4.1例子(7)Doc.h"
#include "4.1例子(7)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41例子7View

IMPLEMENT_DYNCREATE(CMy41例子7View, CView)

BEGIN_MESSAGE_MAP(CMy41例子7View, CView)
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy41例子7View 构造/析构

CMy41例子7View::CMy41例子7View()
{
	// TODO: 在此处添加构造代码

}

CMy41例子7View::~CMy41例子7View()
{
}

BOOL CMy41例子7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41例子7View 绘制

void CMy41例子7View::OnDraw(CDC* pDC)
{
	CMy41例子7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(20, 20, pDoc->s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41例子7View 诊断

#ifdef _DEBUG
void CMy41例子7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41例子7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41例子7Doc* CMy41例子7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41例子7Doc)));
	return (CMy41例子7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41例子7View 消息处理程序


void CMy41例子7View::OnSetFocus(CWnd* pOldWnd)
{
	CView::OnSetFocus(pOldWnd);
	CMy41例子7Doc* pDoc = GetDocument();
	pDoc->s = _T("获得焦点");
	InvalidateRect(NULL, true);
	// TODO: 在此处添加消息处理程序代码
}


void CMy41例子7View::OnKillFocus(CWnd* pNewWnd)
{
	CView::OnKillFocus(pNewWnd);
	CMy41例子7Doc* pDoc = GetDocument();
	pDoc->s = _T("失去焦点");
	InvalidateRect(NULL, true);

	// TODO: 在此处添加消息处理程序代码
}


void CMy41例子7View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
