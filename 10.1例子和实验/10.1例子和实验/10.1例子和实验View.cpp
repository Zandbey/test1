
// 10.1���Ӻ�ʵ��View.cpp : CMy101���Ӻ�ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10.1���Ӻ�ʵ��.h"
#endif

#include "10.1���Ӻ�ʵ��Set.h"
#include "10.1���Ӻ�ʵ��Doc.h"
#include "10.1���Ӻ�ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101���Ӻ�ʵ��View

IMPLEMENT_DYNCREATE(CMy101���Ӻ�ʵ��View, CRecordView)

BEGIN_MESSAGE_MAP(CMy101���Ӻ�ʵ��View, CRecordView)
END_MESSAGE_MAP()

// CMy101���Ӻ�ʵ��View ����/����

CMy101���Ӻ�ʵ��View::CMy101���Ӻ�ʵ��View()
	: CRecordView(IDD_MY101_FORM)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy101���Ӻ�ʵ��View::~CMy101���Ӻ�ʵ��View()
{
}

void CMy101���Ӻ�ʵ��View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
}

BOOL CMy101���Ӻ�ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy101���Ӻ�ʵ��View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My101���Ӻ�ʵ��Set;
	CRecordView::OnInitialUpdate();

}


// CMy101���Ӻ�ʵ��View ���

#ifdef _DEBUG
void CMy101���Ӻ�ʵ��View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy101���Ӻ�ʵ��View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy101���Ӻ�ʵ��Doc* CMy101���Ӻ�ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy101���Ӻ�ʵ��Doc)));
	return (CMy101���Ӻ�ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy101���Ӻ�ʵ��View ���ݿ�֧��
CRecordset* CMy101���Ӻ�ʵ��View::OnGetRecordset()
{
	return m_pSet;
}



// CMy101���Ӻ�ʵ��View ��Ϣ�������
