
// 10.1����View.cpp : CMy101����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10.1����.h"
#endif

#include "10.1����Set.h"
#include "10.1����Doc.h"
#include "10.1����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101����View

IMPLEMENT_DYNCREATE(CMy101����View, CRecordView)

BEGIN_MESSAGE_MAP(CMy101����View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT4, &CMy101����View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CMy101����View ����/����

CMy101����View::CMy101����View()
	: CRecordView(IDD_MY101_FORM)
	, ID(0)
	, NAME(_T(""))
	, NUMBER(_T(""))
	, AGE(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy101����View::~CMy101����View()
{
}

void CMy101����View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_3);
}

BOOL CMy101����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy101����View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My101����Set;
	CRecordView::OnInitialUpdate();

}


// CMy101����View ���

#ifdef _DEBUG
void CMy101����View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy101����View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy101����Doc* CMy101����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy101����Doc)));
	return (CMy101����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy101����View ���ݿ�֧��
CRecordset* CMy101����View::OnGetRecordset()
{
	return m_pSet;
}



// CMy101����View ��Ϣ�������


void CMy101����View::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
