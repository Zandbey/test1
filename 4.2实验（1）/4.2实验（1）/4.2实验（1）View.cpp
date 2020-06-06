
// 4.2实验（1）View.cpp : CMy42实验（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.2实验（1）.h"
#endif

#include "4.2实验（1）Doc.h"
#include "4.2实验（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42实验（1）View

IMPLEMENT_DYNCREATE(CMy42实验（1）View, CView)

BEGIN_MESSAGE_MAP(CMy42实验（1）View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy42实验（1）View 构造/析构

CMy42实验（1）View::CMy42实验（1）View()
{
	// TODO: 在此处添加构造代码

}

CMy42实验（1）View::~CMy42实验（1）View()
{
}

BOOL CMy42实验（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy42实验（1）View 绘制

void CMy42实验（1）View::OnDraw(CDC* /*pDC*/)
{
	CMy42实验（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy42实验（1）View 诊断

#ifdef _DEBUG
void CMy42实验（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42实验（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42实验（1）Doc* CMy42实验（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42实验（1）Doc)));
	return (CMy42实验（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42实验（1）View 消息处理程序


void CMy42实验（1）View::OnMouseMove(UINT nFlags, CPoint point)
{
	num += 1;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
}


void CMy42实验（1）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	num = 0;
	start = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMy42实验（1）View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	end = point;
	CString s;
	s.Format(_T("MouseMove发生了%d次，横向移动%d个像素发生一次"), num, abs(start.x - end.x) / num);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
