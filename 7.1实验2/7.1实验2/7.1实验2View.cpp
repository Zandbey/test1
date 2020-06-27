
// 7.1实验2View.cpp : CMy71实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7.1实验2.h"
#endif

#include "7.1实验2Doc.h"
#include "7.1实验2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71实验2View

IMPLEMENT_DYNCREATE(CMy71实验2View, CView)

BEGIN_MESSAGE_MAP(CMy71实验2View, CView)
	ON_COMMAND(ID_showchange, &CMy71实验2View::Onshowchange)
END_MESSAGE_MAP()

// CMy71实验2View 构造/析构

CMy71实验2View::CMy71实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy71实验2View::~CMy71实验2View()
{
}

BOOL CMy71实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy71实验2View 绘制

void CMy71实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy71实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy71实验2View 诊断

#ifdef _DEBUG
void CMy71实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71实验2Doc* CMy71实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71实验2Doc)));
	return (CMy71实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71实验2View 消息处理程序


void CMy71实验2View::Onshowchange()
{
	MyDialog myDialog;
	int r = myDialog.DoModal();
	if (r == IDOK) {
		CString a, b;
		a = myDialog.Hi;
		b = myDialog.place;
		
	}
	// TODO: 在此添加命令处理程序代码
}
