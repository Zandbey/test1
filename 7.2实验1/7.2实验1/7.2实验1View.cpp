
// 7.2ʵ��1View.cpp : CMy72ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.2ʵ��1.h"
#endif

#include "7.2ʵ��1Doc.h"
#include "7.2ʵ��1View.h"
#include ""
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy72ʵ��1View

IMPLEMENT_DYNCREATE(CMy72ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy72ʵ��1View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy72ʵ��1View ����/����

CMy72ʵ��1View::CMy72ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy72ʵ��1View::~CMy72ʵ��1View()
{
}

BOOL CMy72ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy72ʵ��1View ����

void CMy72ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy72ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy72ʵ��1View ���

#ifdef _DEBUG
void CMy72ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy72ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy72ʵ��1Doc* CMy72ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy72ʵ��1Doc)));
	return (CMy72ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy72ʵ��1View ��Ϣ�������


void CMy72ʵ��1View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDig mydig;
	int r = mydig.DoModal();
	if (r == IDOK)
	{

	}
	CView::OnRButtonDblClk(nFlags, point);
}
