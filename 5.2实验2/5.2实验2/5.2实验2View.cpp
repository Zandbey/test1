
// 5.2实验2View.cpp : CMy52实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5.2实验2.h"
#endif

#include "5.2实验2Doc.h"
#include "5.2实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy52实验2View

IMPLEMENT_DYNCREATE(CMy52实验2View, CView)

BEGIN_MESSAGE_MAP(CMy52实验2View, CView)
END_MESSAGE_MAP()

// CMy52实验2View 构造/析构

CMy52实验2View::CMy52实验2View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP2);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy52实验2View::~CMy52实验2View()
{
}

BOOL CMy52实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy52实验2View 绘制

void CMy52实验2View::OnDraw(CDC* pDC)
{
	CMy52实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MenDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy52实验2View 诊断

#ifdef _DEBUG
void CMy52实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy52实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy52实验2Doc* CMy52实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy52实验2Doc)));
	return (CMy52实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy52实验2View 消息处理程序
