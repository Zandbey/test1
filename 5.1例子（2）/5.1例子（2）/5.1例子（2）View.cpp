
// 5.1���ӣ�2��View.cpp : CMy51���ӣ�2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.1���ӣ�2��.h"
#endif

#include "5.1���ӣ�2��Doc.h"
#include "5.1���ӣ�2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy51���ӣ�2��View

IMPLEMENT_DYNCREATE(CMy51���ӣ�2��View, CView)

BEGIN_MESSAGE_MAP(CMy51���ӣ�2��View, CView)
END_MESSAGE_MAP()

// CMy51���ӣ�2��View ����/����

CMy51���ӣ�2��View::CMy51���ӣ�2��View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy51���ӣ�2��View::~CMy51���ӣ�2��View()
{
}

BOOL CMy51���ӣ�2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy51���ӣ�2��View ����

void CMy51���ӣ�2��View::OnDraw(CDC* pDC)
{
	CMy51���ӣ�2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MenDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy51���ӣ�2��View ���

#ifdef _DEBUG
void CMy51���ӣ�2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy51���ӣ�2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy51���ӣ�2��Doc* CMy51���ӣ�2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy51���ӣ�2��Doc)));
	return (CMy51���ӣ�2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy51���ӣ�2��View ��Ϣ�������
