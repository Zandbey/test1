
// 7.1���ӣ�2��View.cpp : CMy71���ӣ�2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.1���ӣ�2��.h"
#endif

#include "7.1���ӣ�2��Doc.h"
#include "7.1���ӣ�2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71���ӣ�2��View

IMPLEMENT_DYNCREATE(CMy71���ӣ�2��View, CView)

BEGIN_MESSAGE_MAP(CMy71���ӣ�2��View, CView)
END_MESSAGE_MAP()

// CMy71���ӣ�2��View ����/����

CMy71���ӣ�2��View::CMy71���ӣ�2��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy71���ӣ�2��View::~CMy71���ӣ�2��View()
{
}

BOOL CMy71���ӣ�2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy71���ӣ�2��View ����

void CMy71���ӣ�2��View::OnDraw(CDC* /*pDC*/)
{
	CMy71���ӣ�2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy71���ӣ�2��View ���

#ifdef _DEBUG
void CMy71���ӣ�2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71���ӣ�2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71���ӣ�2��Doc* CMy71���ӣ�2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71���ӣ�2��Doc)));
	return (CMy71���ӣ�2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71���ӣ�2��View ��Ϣ�������
