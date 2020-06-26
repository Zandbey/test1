
// 10.1例子View.cpp : CMy101例子View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "10.1例子.h"
#endif

#include "10.1例子Set.h"
#include "10.1例子Doc.h"
#include "10.1例子View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101例子View

IMPLEMENT_DYNCREATE(CMy101例子View, CRecordView)

BEGIN_MESSAGE_MAP(CMy101例子View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT4, &CMy101例子View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CMy101例子View 构造/析构

CMy101例子View::CMy101例子View()
	: CRecordView(IDD_MY101_FORM)
	, ID(0)
	, NAME(_T(""))
	, NUMBER(_T(""))
	, AGE(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMy101例子View::~CMy101例子View()
{
}

void CMy101例子View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_3);
}

BOOL CMy101例子View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMy101例子View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My101例子Set;
	CRecordView::OnInitialUpdate();

}


// CMy101例子View 诊断

#ifdef _DEBUG
void CMy101例子View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy101例子View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy101例子Doc* CMy101例子View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy101例子Doc)));
	return (CMy101例子Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy101例子View 数据库支持
CRecordset* CMy101例子View::OnGetRecordset()
{
	return m_pSet;
}



// CMy101例子View 消息处理程序


void CMy101例子View::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
