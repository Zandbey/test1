
// 10.1例子实验View.cpp : CMy101例子实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "10.1例子实验.h"
#endif

#include "10.1例子实验Doc.h"
#include "10.1例子实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101例子实验View

IMPLEMENT_DYNCREATE(CMy101例子实验View, CView)

BEGIN_MESSAGE_MAP(CMy101例子实验View, CView)
END_MESSAGE_MAP()

// CMy101例子实验View 构造/析构

CMy101例子实验View::CMy101例子实验View()
{
	// TODO: 在此处添加构造代码

}

CMy101例子实验View::~CMy101例子实验View()
{
}

BOOL CMy101例子实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy101例子实验View 绘制

void CMy101例子实验View::OnDraw(CDC* /*pDC*/)
{
	CMy101例子实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy101例子实验View 诊断

#ifdef _DEBUG
void CMy101例子实验View::AssertValid() const
{
	CView::AssertValid();
}

void CMy101例子实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy101例子实验Doc* CMy101例子实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy101例子实验Doc)));
	return (CMy101例子实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy101例子实验View 消息处理程序
