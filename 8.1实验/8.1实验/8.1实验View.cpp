
// 8.1ʵ��View.cpp : CMy81ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8.1ʵ��.h"
#endif

#include "8.1ʵ��Doc.h"
#include "8.1ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy81ʵ��View

IMPLEMENT_DYNCREATE(CMy81ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy81ʵ��View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy81ʵ��View ����/����

CMy81ʵ��View::CMy81ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy81ʵ��View::~CMy81ʵ��View()
{
}

BOOL CMy81ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy81ʵ��View ����

void CMy81ʵ��View::OnDraw(CDC* /*pDC*/)
{
	CMy81ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy81ʵ��View ���

#ifdef _DEBUG
void CMy81ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy81ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy81ʵ��Doc* CMy81ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy81ʵ��Doc)));
	return (CMy81ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy81ʵ��View ��Ϣ�������


void CMy81ʵ��View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog    dlgFile(TRUE, NULL, NULL, OFN_HIDEREADONLY, _T("Describe Files (*.jpg)|*.jpg|All Files (*.*)|*.*||"), NULL);

	if (dlgFile.DoModal())
	{
		strFile = dlgFile.GetFileName();
	}
	GetDC()->TextOutW(500, 500, strFile);
	CView::OnLButtonDblClk(nFlags, point);
}
