
// 6.1例子1View.cpp : CMy61例子1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "6.1例子1.h"
#endif

#include "6.1例子1Doc.h"
#include "6.1例子1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61例子1View

IMPLEMENT_DYNCREATE(CMy61例子1View, CView)

BEGIN_MESSAGE_MAP(CMy61例子1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61例子1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61例子1View 构造/析构

CMy61例子1View::CMy61例子1View()
{
	// TODO: 在此处添加构造代码

}

CMy61例子1View::~CMy61例子1View()
{
}

BOOL CMy61例子1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy61例子1View 绘制

void CMy61例子1View::OnDraw(CDC* /*pDC*/)
{
	CMy61例子1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy61例子1View 诊断

#ifdef _DEBUG
void CMy61例子1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61例子1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61例子1Doc* CMy61例子1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61例子1Doc)));
	return (CMy61例子1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61例子1View 消息处理程序


void CMy61例子1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();
	if (r==IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(200, 200, filename);
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC,0,0,img.GetWidth(),img.GetHeight());
	}
}
