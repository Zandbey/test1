
// 7.1ʵ��2View.cpp : CMy71ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7.1ʵ��2.h"
#endif

#include "7.1ʵ��2Doc.h"
#include "7.1ʵ��2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71ʵ��2View

IMPLEMENT_DYNCREATE(CMy71ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy71ʵ��2View, CView)
	ON_COMMAND(ID_showchange, &CMy71ʵ��2View::Onshowchange)
END_MESSAGE_MAP()

// CMy71ʵ��2View ����/����

CMy71ʵ��2View::CMy71ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy71ʵ��2View::~CMy71ʵ��2View()
{
}

BOOL CMy71ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy71ʵ��2View ����

void CMy71ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy71ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy71ʵ��2View ���

#ifdef _DEBUG
void CMy71ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy71ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy71ʵ��2Doc* CMy71ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy71ʵ��2Doc)));
	return (CMy71ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy71ʵ��2View ��Ϣ�������


void CMy71ʵ��2View::Onshowchange()
{
	MyDialog myDialog;
	int r = myDialog.DoModal();
	if (r == IDOK) {
		CString a, b;
		a = myDialog.Hi;
		b = myDialog.place;
		
	}
	// TODO: �ڴ���������������
}
