
// 10.1����ʵ��View.cpp : CMy101����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10.1����ʵ��.h"
#endif

#include "10.1����ʵ��Doc.h"
#include "10.1����ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101����ʵ��View

IMPLEMENT_DYNCREATE(CMy101����ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy101����ʵ��View, CView)
END_MESSAGE_MAP()

// CMy101����ʵ��View ����/����

CMy101����ʵ��View::CMy101����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy101����ʵ��View::~CMy101����ʵ��View()
{
}

BOOL CMy101����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy101����ʵ��View ����

void CMy101����ʵ��View::OnDraw(CDC* /*pDC*/)
{
	CMy101����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy101����ʵ��View ���

#ifdef _DEBUG
void CMy101����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy101����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy101����ʵ��Doc* CMy101����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy101����ʵ��Doc)));
	return (CMy101����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy101����ʵ��View ��Ϣ�������
