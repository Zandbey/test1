
// 5.2ʵ��1View.cpp : CMy52ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.2ʵ��1.h"
#endif

#include "5.2ʵ��1Doc.h"
#include "5.2ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy52ʵ��1View

IMPLEMENT_DYNCREATE(CMy52ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy52ʵ��1View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy52ʵ��1View::OnShowname)
END_MESSAGE_MAP()

// CMy52ʵ��1View ����/����

CMy52ʵ��1View::CMy52ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy52ʵ��1View::~CMy52ʵ��1View()
{
}

BOOL CMy52ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy52ʵ��1View ����

void CMy52ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy52ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy52ʵ��1View ���

#ifdef _DEBUG
void CMy52ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy52ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy52ʵ��1Doc* CMy52ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy52ʵ��1Doc)));
	return (CMy52ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy52ʵ��1View ��Ϣ�������


void CMy52ʵ��1View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s =_T ("��ԣ÷");
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);
}
