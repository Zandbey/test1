
// 7.2ʵ��2View.cpp : CMy72ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.2ʵ��2.h"
#endif

#include "7.2ʵ��2Doc.h"
#include "7.2ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MYDialog.h"

// CMy72ʵ��2View

IMPLEMENT_DYNCREATE(CMy72ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy72ʵ��2View, CView)
	ON_COMMAND(ID_show, &CMy72ʵ��2View::Onshow)
END_MESSAGE_MAP()

// CMy72ʵ��2View ����/����

CMy72ʵ��2View::CMy72ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy72ʵ��2View::~CMy72ʵ��2View()
{
}

BOOL CMy72ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy72ʵ��2View ����

void CMy72ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy72ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy72ʵ��2View ���

#ifdef _DEBUG
void CMy72ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy72ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy72ʵ��2Doc* CMy72ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy72ʵ��2Doc)));
	return (CMy72ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy72ʵ��2View ��Ϣ�������


void CMy72ʵ��2View::Onshow()
{
	// TODO: �ڴ���������������
	MYDialog show;
	int r = show.DoModal();
	if (r == IDOK) {

	}
}
