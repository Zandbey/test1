
// 5.1���ӣ�1��View.cpp : CMy51���ӣ�1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.1���ӣ�1��.h"
#endif

#include "5.1���ӣ�1��Doc.h"
#include "5.1���ӣ�1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy51���ӣ�1��View

IMPLEMENT_DYNCREATE(CMy51���ӣ�1��View, CView)

BEGIN_MESSAGE_MAP(CMy51���ӣ�1��View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CMy51���ӣ�1��View::OnShownumber)
END_MESSAGE_MAP()

// CMy51���ӣ�1��View ����/����

CMy51���ӣ�1��View::CMy51���ӣ�1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy51���ӣ�1��View::~CMy51���ӣ�1��View()
{
}

BOOL CMy51���ӣ�1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy51���ӣ�1��View ����

void CMy51���ӣ�1��View::OnDraw(CDC* /*pDC*/)
{
	CMy51���ӣ�1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy51���ӣ�1��View ���

#ifdef _DEBUG
void CMy51���ӣ�1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy51���ӣ�1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy51���ӣ�1��Doc* CMy51���ӣ�1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy51���ӣ�1��Doc)));
	return (CMy51���ӣ�1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy51���ӣ�1��View ��Ϣ�������


void CMy51���ӣ�1��View::OnShownumber()
{
	CString s = _T("201812300025");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	// TODO: �ڴ���������������
}
