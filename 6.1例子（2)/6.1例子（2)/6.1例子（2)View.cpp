
// 6.1���ӣ�2)View.cpp : CMy61���ӣ�2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6.1���ӣ�2).h"
#endif

#include "6.1���ӣ�2)Doc.h"
#include "6.1���ӣ�2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61���ӣ�2View

IMPLEMENT_DYNCREATE(CMy61���ӣ�2View, CView)

BEGIN_MESSAGE_MAP(CMy61���ӣ�2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61���ӣ�2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61���ӣ�2View ����/����

CMy61���ӣ�2View::CMy61���ӣ�2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy61���ӣ�2View::~CMy61���ӣ�2View()
{
}

BOOL CMy61���ӣ�2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy61���ӣ�2View ����

void CMy61���ӣ�2View::OnDraw(CDC* /*pDC*/)
{
	CMy61���ӣ�2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy61���ӣ�2View ���

#ifdef _DEBUG
void CMy61���ӣ�2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61���ӣ�2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61���ӣ�2Doc* CMy61���ӣ�2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61���ӣ�2Doc)));
	return (CMy61���ӣ�2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61���ӣ�2View ��Ϣ�������


void CMy61���ӣ�2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(200, 200, filename);
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
