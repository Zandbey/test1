
// 8.1ʵ��1View.cpp : CMy81ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8.1ʵ��1.h"
#endif

#include "8.1ʵ��1Doc.h"
#include "8.1ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy81ʵ��1View

IMPLEMENT_DYNCREATE(CMy81ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy81ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy81ʵ��1View ����/����

CMy81ʵ��1View::CMy81ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CMy81ʵ��1View::~CMy81ʵ��1View()
{
}

BOOL CMy81ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy81ʵ��1View ����

void CMy81ʵ��1View::OnDraw(CDC* pDC)
{
	CMy81ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		cr.SetRect(500, 300, 700, 400);
		h_height = 50;
		h_width = 100;
		p.SetPoint(600, 350);
		flag = 0;
		pDC->Rectangle(cr);
	}
	else {
		pDC->Rectangle(p.x - h_width, p.y - h_height, p.x + h_width, p.y + h_height);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy81ʵ��1View ���

#ifdef _DEBUG
void CMy81ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy81ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy81ʵ��1Doc* CMy81ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy81ʵ��1Doc)));
	return (CMy81ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy81ʵ��1View ��Ϣ�������


void CMy81ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 2;
	CView::OnLButtonDown(nFlags, point);
}


void CMy81ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 3;
	CView::OnLButtonUp(nFlags, point);
}


void CMy81ʵ��1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 2) {

		p = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
