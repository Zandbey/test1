
// 5.2ʵ��2View.cpp : CMy52ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.2ʵ��2.h"
#endif

#include "5.2ʵ��2Doc.h"
#include "5.2ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy52ʵ��2View

IMPLEMENT_DYNCREATE(CMy52ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy52ʵ��2View, CView)
END_MESSAGE_MAP()

// CMy52ʵ��2View ����/����

CMy52ʵ��2View::CMy52ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP2);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy52ʵ��2View::~CMy52ʵ��2View()
{
}

BOOL CMy52ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy52ʵ��2View ����

void CMy52ʵ��2View::OnDraw(CDC* pDC)
{
	CMy52ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MenDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy52ʵ��2View ���

#ifdef _DEBUG
void CMy52ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy52ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy52ʵ��2Doc* CMy52ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy52ʵ��2Doc)));
	return (CMy52ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy52ʵ��2View ��Ϣ�������
