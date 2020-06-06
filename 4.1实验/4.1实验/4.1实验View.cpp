
// 4.1ʵ��View.cpp : CMy41ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1ʵ��.h"
#endif

#include "4.1ʵ��Doc.h"
#include "4.1ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41ʵ��View

IMPLEMENT_DYNCREATE(CMy41ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy41ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy41ʵ��View ����/����

CMy41ʵ��View::CMy41ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41ʵ��View::~CMy41ʵ��View()
{
}

BOOL CMy41ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41ʵ��View ����

void CMy41ʵ��View::OnDraw(CDC* pDC)
{
	CMy41ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41ʵ��View ���

#ifdef _DEBUG
void CMy41ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41ʵ��Doc* CMy41ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41ʵ��Doc)));
	return (CMy41ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41ʵ��View ��Ϣ�������


void CMy41ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x1 = point.x;
	pDoc->y1 = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy41ʵ��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x2 = point.x;
	pDoc->y2 = point.y;
	CRect rc;
	rc.SetRect(pDoc->x1, pDoc->y1, pDoc->x2, pDoc->y2);
	CClientDC dc(this);
	dc.Rectangle(rc);
	CView::OnLButtonUp(nFlags, point);
}


void CMy41ʵ��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString ss;
	ss.Format(_T("X=%d  Y=%d"), point.x, point.y);
	dc.TextOutW(100, 100, ss);
	CView::OnMouseMove(nFlags, point);
}
