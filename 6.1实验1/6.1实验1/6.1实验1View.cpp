
// 6.1ʵ��1View.cpp : CMy61ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6.1ʵ��1.h"
#endif

#include "6.1ʵ��1Doc.h"
#include "6.1ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61ʵ��1View

IMPLEMENT_DYNCREATE(CMy61ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy61ʵ��1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61ʵ��1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61ʵ��1View ����/����

CMy61ʵ��1View::CMy61ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy61ʵ��1View::~CMy61ʵ��1View()
{
}

BOOL CMy61ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy61ʵ��1View ����

void CMy61ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy61ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy61ʵ��1View ���

#ifdef _DEBUG
void CMy61ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61ʵ��1Doc* CMy61ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61ʵ��1Doc)));
	return (CMy61ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61ʵ��1View ��Ϣ�������


void CMy61ʵ��1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename=cfd.GetPathName();
		CImage img;
		CClientDC dc(this);
		img.Load(filename);
		img.Draw(dc.m_hDC,0,0,img.GetWidth(),img.GetHeight());
		Invalidate();
	}
	
	
}
