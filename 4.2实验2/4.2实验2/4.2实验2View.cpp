
// 4.2ʵ��2View.cpp : CMy42ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.2ʵ��2.h"
#endif

#include "4.2ʵ��2Doc.h"
#include "4.2ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42ʵ��2View

IMPLEMENT_DYNCREATE(CMy42ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy42ʵ��2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy42ʵ��2View ����/����

CMy42ʵ��2View::CMy42ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	width = 100;
	height = 50;
	flag = 1;
}

CMy42ʵ��2View::~CMy42ʵ��2View()
{
}

BOOL CMy42ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy42ʵ��2View ����

void CMy42ʵ��2View::OnDraw(CDC* pDC)
{
	CMy42ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		flag = 0;
		GetClientRect(&pDoc->CR);
		mx = (pDoc->CR.right - pDoc->CR.left) / 2;
		my = (pDoc->CR.bottom - pDoc->CR.top) / 2;
		x = mx;
		y = my;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		pDC->Rectangle(pDoc->cr);
	}
	else
		pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy42ʵ��2View ���

#ifdef _DEBUG
void CMy42ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42ʵ��2Doc* CMy42ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42ʵ��2Doc)));
	return (CMy42ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42ʵ��2View ��Ϣ�������


void CMy42ʵ��2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMy42ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	switch (nChar)
	{
	case VK_LEFT:
	{
		mx -= 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_RIGHT:
	{

		mx += 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_DOWN:
	{

		my += 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_UP:
	{

		my -= 50;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_HOME:
	{
		mx -= width, my -= height;
		width += width;
		height += height;

		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	case VK_END:
	{
		mx += width / 2, my += height / 2;
		width -= width / 2;
		height -= height / 2;
		pDoc->cr.SetRect(mx - width, my - height, mx + width, my + height);
		break;
	}
	}
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMy42ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CMy42ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	pDoc->cr.SetRect(x - 100, y - 50, x + 100, y + 50);
	height = 50, width = 100;
	mx = x, my = y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
