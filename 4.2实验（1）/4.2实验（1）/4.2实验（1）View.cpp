
// 4.2ʵ�飨1��View.cpp : CMy42ʵ�飨1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.2ʵ�飨1��.h"
#endif

#include "4.2ʵ�飨1��Doc.h"
#include "4.2ʵ�飨1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy42ʵ�飨1��View

IMPLEMENT_DYNCREATE(CMy42ʵ�飨1��View, CView)

BEGIN_MESSAGE_MAP(CMy42ʵ�飨1��View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy42ʵ�飨1��View ����/����

CMy42ʵ�飨1��View::CMy42ʵ�飨1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy42ʵ�飨1��View::~CMy42ʵ�飨1��View()
{
}

BOOL CMy42ʵ�飨1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy42ʵ�飨1��View ����

void CMy42ʵ�飨1��View::OnDraw(CDC* /*pDC*/)
{
	CMy42ʵ�飨1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy42ʵ�飨1��View ���

#ifdef _DEBUG
void CMy42ʵ�飨1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy42ʵ�飨1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy42ʵ�飨1��Doc* CMy42ʵ�飨1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy42ʵ�飨1��Doc)));
	return (CMy42ʵ�飨1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy42ʵ�飨1��View ��Ϣ�������


void CMy42ʵ�飨1��View::OnMouseMove(UINT nFlags, CPoint point)
{
	num += 1;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
}


void CMy42ʵ�飨1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	num = 0;
	start = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMy42ʵ�飨1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	end = point;
	CString s;
	s.Format(_T("MouseMove������%d�Σ������ƶ�%d�����ط���һ��"), num, abs(start.x - end.x) / num);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
