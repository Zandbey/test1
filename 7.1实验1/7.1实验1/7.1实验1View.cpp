
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
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy71ʵ��1View

IMPLEMENT_DYNCREATE(CMy71ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy71ʵ��1View, CView)
	ON_EN_CHANGE(IDC_EDIT1, &CMy71ʵ��1View::OnEnChangeEdit1)
	ON_COMMAND(ID_showeixt, &CMy71ʵ��1View::Onshoweixt)
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


void CMy71ʵ��1View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������

}


void CMy71ʵ��1View::Onshoweixt()
{
	MyDialog myDialog;
	int r = myDialog.DoModal();
	if (r == IDOK) {
		CString s = _T("�����˳��Ի���");
		GetDC()->TextOutW(200, 200, s);
	}
	// TODO: �ڴ���������������
}
