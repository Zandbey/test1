
// dig2View.cpp : Cdig2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "dig2.h"
#endif
#include "dig2View.h"
#include "dig2Doc.h"
#include "MyDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdig2View

IMPLEMENT_DYNCREATE(Cdig2View, CView)

BEGIN_MESSAGE_MAP(Cdig2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cdig2View ����/����

Cdig2View::Cdig2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cdig2View::~Cdig2View()
{
}

BOOL Cdig2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cdig2View ����

void Cdig2View::OnDraw(CDC* pDC)
{
	Cdig2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cdig2View ���

#ifdef _DEBUG
void Cdig2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdig2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdig2Doc* Cdig2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdig2Doc)));
	return (Cdig2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdig2View ��Ϣ�������


void Cdig2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDig mydig;
	int r = mydig.DoModal();
	if (r==IDOK)
	{

	}
	CView::OnRButtonDblClk(nFlags, point);
}
