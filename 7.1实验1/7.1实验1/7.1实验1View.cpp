
// 7.1ʵ��1View.cpp : CMy71ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.1ʵ��1.h"
#endif

#include "7.1ʵ��1Doc.h"
#include "7.1ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71ʵ��1View

IMPLEMENT_DYNCREATE(CMy71ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy71ʵ��1View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMy71ʵ��1View ����/����

CMy71ʵ��1View::CMy71ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy71ʵ��1View::~CMy71ʵ��1View()
{
}

BOOL CMy71ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy71ʵ��1View ����

void CMy71ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy71ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CMy71ʵ��1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMy71ʵ��1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMy71ʵ��1View ���

#ifdef _DEBUG
void CMy71ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71ʵ��1Doc* CMy71ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71ʵ��1Doc)));
	return (CMy71ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71ʵ��1View ��Ϣ�������
