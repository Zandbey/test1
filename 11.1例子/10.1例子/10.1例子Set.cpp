
// 10.1例子Set.cpp : CMy101例子Set 类的实现
//

#include "stdafx.h"
#include "10.1例子.h"
#include "10.1例子Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101例子Set 实现

// 代码生成在 2020年6月26日, 22:28

IMPLEMENT_DYNAMIC(CMy101例子Set, CRecordset)

CMy101例子Set::CMy101例子Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = 0.0;
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CMy101例子Set::GetDefaultConnect()
{
	return _T("DSN=\x4fe1\x606f\x8868;DBQ=D:\\\x5927\x4e8c\x5404\x79d1\x8bfe\x4ef6\\VISUAL C\\\x6570\x636e\x6e90\\Database1.mdb;DefaultDir=D:\\\x5927\x4e8c\x5404\x79d1\x8bfe\x4ef6\\VISUAL C\\\x6570\x636e\x6e90;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy101例子Set::GetDefaultSQL()
{
	return _T("[信息表1]");
}

void CMy101例子Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);
	RFX_Double(pFX, _T("[字段3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// CMy101例子Set 诊断

#ifdef _DEBUG
void CMy101例子Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy101例子Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

