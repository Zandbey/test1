
// 6.1例子2View.cpp : CMy61例子2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "6.1例子2.h"
#endif

#include "6.1例子2Doc.h"
#include "6.1例子2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61例子2View

IMPLEMENT_DYNCREATE(CMy61例子2View, CView)

BEGIN_MESSAGE_MAP(CMy61例子2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61例子2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61例子2View 构造/析构

CMy61例子2View::CMy61例子2View()
{
	// TODO: 在此处添加构造代码

}

CMy61例子2View::~CMy61例子2View()
{
}

BOOL CMy61例子2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy61例子2View 绘制

void CMy61例子2View::OnDraw(CDC* /*pDC*/)
{
	CMy61例子2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy61例子2View 诊断

#ifdef _DEBUG
void CMy61例子2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61例子2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61例子2Doc* CMy61例子2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61例子2Doc)));
	return (CMy61例子2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61例子2View 消息处理程序


void CMy61例子2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(200, 200, filename);
		CImage img;
		img.Load(filename);
		int w, h, sx, sy;
		{
			CRect rect;
			GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio=1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio>img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
