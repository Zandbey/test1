
// 4.2ʵ��3View.cpp : CMy42ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.2ʵ��3.h"
#endif

#include "4.2ʵ��3Doc.h"
#include "4.2ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42ʵ��3View

IMPLEMENT_DYNCREATE(CMy42ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy42ʵ��3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy42ʵ��3View ����/����

CMy42ʵ��3View::CMy42ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	cr.SetRect(0, 0, 200, 200);
}

CMy42ʵ��3View::~CMy42ʵ��3View()
{
}

BOOL CMy42ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy42ʵ��3View ����

void CMy42ʵ��3View::OnDraw(CDC*pDC)
{
	CMy42ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(cr);
	if (set == 1) {
		SetTimer(1, rand() & 100 + 1, NULL);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy42ʵ��3View ���

#ifdef _DEBUG
void CMy42ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42ʵ��3Doc* CMy42ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42ʵ��3Doc)));
	return (CMy42ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42ʵ��3View ��Ϣ�������


void CMy42ʵ��3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect CR;
	GetClientRect(&CR);
	if (nIDEvent == 1) {
		cr.top += 10 * f;
		cr.bottom += 10 * f;
		if (cr.bottom > CR.bottom)
			f = -1;
		if (cr.top < CR.top)
			set = 0;
		Invalidate();
	}
	CView::OnTimer(nIDEvent);
}
