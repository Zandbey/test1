
// 5.2ʵ��3View.cpp : CMy52ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.2ʵ��3.h"
#endif

#include "5.2ʵ��3Doc.h"
#include "5.2ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy52ʵ��3View

IMPLEMENT_DYNCREATE(CMy52ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy52ʵ��3View, CView)
	ON_COMMAND(ID_SHOWLINE, &CMy52ʵ��3View::OnShowline)
	ON_COMMAND(ID_SHOWRECT, &CMy52ʵ��3View::OnShowrect)
	ON_COMMAND(ID_SHOWELLIPE, &CMy52ʵ��3View::OnShowellipe)
END_MESSAGE_MAP()

// CMy52ʵ��3View ����/����

CMy52ʵ��3View::CMy52ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy52ʵ��3View::~CMy52ʵ��3View()
{
}

BOOL CMy52ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy52ʵ��3View ����

void CMy52ʵ��3View::OnDraw(CDC* pDC)
{
	CMy52ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy52ʵ��3View ���

#ifdef _DEBUG
void CMy52ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy52ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy52ʵ��3Doc* CMy52ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy52ʵ��3Doc)));
	return (CMy52ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy52ʵ��3View ��Ϣ�������


void CMy52ʵ��3View::OnShowline()
{
	// TODO: �ڴ���������������

}


void CMy52ʵ��3View::OnShowrect()
{
	// TODO: �ڴ���������������
}


void CMy52ʵ��3View::OnShowellipe()
{
	// TODO: �ڴ���������������
}
