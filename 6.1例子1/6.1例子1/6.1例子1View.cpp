
// 6.1����1View.cpp : CMy61����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6.1����1.h"
#endif

#include "6.1����1Doc.h"
#include "6.1����1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61����1View

IMPLEMENT_DYNCREATE(CMy61����1View, CView)

BEGIN_MESSAGE_MAP(CMy61����1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61����1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61����1View ����/����

CMy61����1View::CMy61����1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy61����1View::~CMy61����1View()
{
}

BOOL CMy61����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy61����1View ����

void CMy61����1View::OnDraw(CDC* /*pDC*/)
{
	CMy61����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy61����1View ���

#ifdef _DEBUG
void CMy61����1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61����1Doc* CMy61����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61����1Doc)));
	return (CMy61����1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61����1View ��Ϣ�������


void CMy61����1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();
	if (r==IDOK)
	{
		CString filename = cfd.GetPathName();
		//dc.TextOutW(200, 200, filename);
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC,0,0,img.GetWidth(),img.GetHeight());
	}
}
