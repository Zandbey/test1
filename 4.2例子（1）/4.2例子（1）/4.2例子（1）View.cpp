
// 4.2���ӣ�1��View.cpp : CMy42���ӣ�1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.2���ӣ�1��.h"
#endif

#include "4.2���ӣ�1��Doc.h"
#include "4.2���ӣ�1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42���ӣ�1��View

IMPLEMENT_DYNCREATE(CMy42���ӣ�1��View, CView)

BEGIN_MESSAGE_MAP(CMy42���ӣ�1��View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy42���ӣ�1��View ����/����

CMy42���ӣ�1��View::CMy42���ӣ�1��View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy42���ӣ�1��View::~CMy42���ӣ�1��View()
{
}

BOOL CMy42���ӣ�1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy42���ӣ�1��View ����

void CMy42���ӣ�1��View::OnDraw(CDC* pDC)
{
	CMy42���ӣ�1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set =false;
		}
	}
	for (int  i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy42���ӣ�1��View ���

#ifdef _DEBUG
void CMy42���ӣ�1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42���ӣ�1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42���ӣ�1��Doc* CMy42���ӣ�1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42���ӣ�1��Doc)));
	return (CMy42���ӣ�1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42���ӣ�1��View ��Ϣ�������


void CMy42���ӣ�1��View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
