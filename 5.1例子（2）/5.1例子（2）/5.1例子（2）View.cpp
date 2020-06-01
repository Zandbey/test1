
// 5.1例子（2）View.cpp : CMy51例子（2）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5.1例子（2）.h"
#endif

#include "5.1例子（2）Doc.h"
#include "5.1例子（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy51例子（2）View

IMPLEMENT_DYNCREATE(CMy51例子（2）View, CView)

BEGIN_MESSAGE_MAP(CMy51例子（2）View, CView)
END_MESSAGE_MAP()

// CMy51例子（2）View 构造/析构

CMy51例子（2）View::CMy51例子（2）View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy51例子（2）View::~CMy51例子（2）View()
{
}

BOOL CMy51例子（2）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy51例子（2）View 绘制

void CMy51例子（2）View::OnDraw(CDC* pDC)
{
	CMy51例子（2）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MenDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy51例子（2）View 诊断

#ifdef _DEBUG
void CMy51例子（2）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy51例子（2）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy51例子（2）Doc* CMy51例子（2）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy51例子（2）Doc)));
	return (CMy51例子（2）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy51例子（2）View 消息处理程序
