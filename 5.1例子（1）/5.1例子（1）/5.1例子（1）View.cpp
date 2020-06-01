
// 5.1例子（1）View.cpp : CMy51例子（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5.1例子（1）.h"
#endif

#include "5.1例子（1）Doc.h"
#include "5.1例子（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy51例子（1）View

IMPLEMENT_DYNCREATE(CMy51例子（1）View, CView)

BEGIN_MESSAGE_MAP(CMy51例子（1）View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CMy51例子（1）View::OnShownumber)
END_MESSAGE_MAP()

// CMy51例子（1）View 构造/析构

CMy51例子（1）View::CMy51例子（1）View()
{
	// TODO: 在此处添加构造代码

}

CMy51例子（1）View::~CMy51例子（1）View()
{
}

BOOL CMy51例子（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy51例子（1）View 绘制

void CMy51例子（1）View::OnDraw(CDC* /*pDC*/)
{
	CMy51例子（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy51例子（1）View 诊断

#ifdef _DEBUG
void CMy51例子（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy51例子（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy51例子（1）Doc* CMy51例子（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy51例子（1）Doc)));
	return (CMy51例子（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy51例子（1）View 消息处理程序


void CMy51例子（1）View::OnShownumber()
{
	CString s = _T("201812300025");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	// TODO: 在此添加命令处理程序代码
}
