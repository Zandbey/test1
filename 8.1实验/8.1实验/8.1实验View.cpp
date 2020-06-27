
// 8.1实验View.cpp : CMy81实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8.1实验.h"
#endif

#include "8.1实验Doc.h"
#include "8.1实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy81实验View

IMPLEMENT_DYNCREATE(CMy81实验View, CView)

BEGIN_MESSAGE_MAP(CMy81实验View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy81实验View 构造/析构

CMy81实验View::CMy81实验View()
{
	// TODO: 在此处添加构造代码

}

CMy81实验View::~CMy81实验View()
{
}

BOOL CMy81实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy81实验View 绘制

void CMy81实验View::OnDraw(CDC* /*pDC*/)
{
	CMy81实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy81实验View 诊断

#ifdef _DEBUG
void CMy81实验View::AssertValid() const
{
	CView::AssertValid();
}

void CMy81实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy81实验Doc* CMy81实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy81实验Doc)));
	return (CMy81实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy81实验View 消息处理程序


void CMy81实验View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog    dlgFile(TRUE, NULL, NULL, OFN_HIDEREADONLY, _T("Describe Files (*.jpg)|*.jpg|All Files (*.*)|*.*||"), NULL);

	if (dlgFile.DoModal())
	{
		strFile = dlgFile.GetFileName();
	}
	GetDC()->TextOutW(500, 500, strFile);
	CView::OnLButtonDblClk(nFlags, point);
}
