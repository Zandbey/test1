
// 7.1���ӣ�1��View.cpp : CMy71���ӣ�1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.1���ӣ�1��.h"
#endif

#include "7.1���ӣ�1��Doc.h"
#include "7.1���ӣ�1��View.h"
#include "Dialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71���ӣ�1��View

IMPLEMENT_DYNCREATE(CMy71���ӣ�1��View, CView)

BEGIN_MESSAGE_MAP(CMy71���ӣ�1��View, CView)
	ON_COMMAND(ID_SHOW, &CMy71���ӣ�1��View::OnShow)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy71���ӣ�1��View ����/����

CMy71���ӣ�1��View::CMy71���ӣ�1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy71���ӣ�1��View::~CMy71���ӣ�1��View()
{
}

BOOL CMy71���ӣ�1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy71���ӣ�1��View ����

void CMy71���ӣ�1��View::OnDraw(CDC* /*pDC*/)
{
	CMy71���ӣ�1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy71���ӣ�1��View ���

#ifdef _DEBUG
void CMy71���ӣ�1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71���ӣ�1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71���ӣ�1��Doc* CMy71���ӣ�1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71���ӣ�1��Doc)));
	return (CMy71���ӣ�1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71���ӣ�1��View ��Ϣ�������


void CMy71���ӣ�1��View::OnShow()
{
	// TODO: �ڴ���������������
	Dialog dlg;
	int t = dlg.DoModal();
	if (t==IDOK)
	{
		int R, x, y;
		R = dlg.r;
		x = dlg.x;
		y = dlg.y;
		CRect re(x - R, y - R, x + R, y + R);
		GetDC()->Ellipse(re);
	}

}


void CMy71���ӣ�1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Dialog *pD = new Dialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}


