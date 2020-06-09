
// 6.1����2View.cpp : CMy61����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6.1����2.h"
#endif

#include "6.1����2Doc.h"
#include "6.1����2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy61����2View

IMPLEMENT_DYNCREATE(CMy61����2View, CView)

BEGIN_MESSAGE_MAP(CMy61����2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy61����2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy61����2View ����/����

CMy61����2View::CMy61����2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy61����2View::~CMy61����2View()
{
}

BOOL CMy61����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy61����2View ����

void CMy61����2View::OnDraw(CDC* /*pDC*/)
{
	CMy61����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy61����2View ���

#ifdef _DEBUG
void CMy61����2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy61����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy61����2Doc* CMy61����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy61����2Doc)));
	return (CMy61����2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy61����2View ��Ϣ�������


void CMy61����2View::OnFileOpen()
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
		int w, h, sx, sy;
		{
			CRect rect;
			GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio=1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio>img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
