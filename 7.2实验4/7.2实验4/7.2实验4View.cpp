
// 7.2ʵ��4View.cpp : CMy72ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.2ʵ��4.h"
#endif

#include "7.2ʵ��4Doc.h"
#include "7.2ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy72ʵ��4View

IMPLEMENT_DYNCREATE(CMy72ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy72ʵ��4View, CView)
END_MESSAGE_MAP()

// CMy72ʵ��4View ����/����

CMy72ʵ��4View::CMy72ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy72ʵ��4View::~CMy72ʵ��4View()
{
}

BOOL CMy72ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy72ʵ��4View ����

void CMy72ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy72ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy72ʵ��4View ���

#ifdef _DEBUG
void CMy72ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy72ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy72ʵ��4Doc* CMy72ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy72ʵ��4Doc)));
	return (CMy72ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy72ʵ��4View ��Ϣ�������
