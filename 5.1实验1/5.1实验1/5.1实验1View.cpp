
// 5.1ʵ��1View.cpp : CMy51ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.1ʵ��1.h"
#endif

#include "5.1ʵ��1Doc.h"
#include "5.1ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy51ʵ��1View

IMPLEMENT_DYNCREATE(CMy51ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy51ʵ��1View, CView)
END_MESSAGE_MAP()

// CMy51ʵ��1View ����/����

CMy51ʵ��1View::CMy51ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy51ʵ��1View::~CMy51ʵ��1View()
{
}

BOOL CMy51ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy51ʵ��1View ����

void CMy51ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy51ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy51ʵ��1View ���

#ifdef _DEBUG
void CMy51ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy51ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy51ʵ��1Doc* CMy51ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy51ʵ��1Doc)));
	return (CMy51ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy51ʵ��1View ��Ϣ�������
