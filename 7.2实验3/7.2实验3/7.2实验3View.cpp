
// 7.2ʵ��3View.cpp : CMy72ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.2ʵ��3.h"
#endif

#include "7.2ʵ��3Doc.h"
#include "7.2ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy72ʵ��3View

IMPLEMENT_DYNCREATE(CMy72ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy72ʵ��3View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy72ʵ��3View ����/����

CMy72ʵ��3View::CMy72ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	p.SetPoint(150, 150);
	x = 50;
}

CMy72ʵ��3View::~CMy72ʵ��3View()
{
}

BOOL CMy72ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy72ʵ��3View ����

void CMy72ʵ��3View::OnDraw(CDC* pDC)
{
	CMy72ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == -1) {
		cr.SetRect(p.x - x, p.y - x, p.x + x, p.y + x);
		pDC->Ellipse(cr);
	}
	else {
		cr.SetRect(p.x - x, p.y - x, p.x + x, p.y + x);
		pDC->Ellipse(cr);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy72ʵ��3View ���

#ifdef _DEBUG
void CMy72ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy72ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy72ʵ��3Doc* CMy72ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy72ʵ��3Doc)));
	return (CMy72ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy72ʵ��3View ��Ϣ�������


void CMy72ʵ��3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	f = flag;
	flag = 0;
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy72ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 0) { //��ʾ��ͣ���ָ�����һ�ε�״̬
		flag = f;
	}
	else if (flag == -1) {
		f = flag;
		flag = 2;
	}


	SetTimer(1, 500, NULL);
	CView::OnLButtonDown(nFlags, point);
}


void CMy72ʵ��3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1) {

		if (p.x - x <= 0) {
			f = flag;
			flag = 2;
		}
		else
			p.x -= x;
	}
	else  if (flag == 2) {
		if (p.x + x >= CR.Width()) {
			f = flag;
			flag = 1;
		}
		else
			p.x += x;
	}
	Invalidate();

	CView::OnTimer(nIDEvent);
}
