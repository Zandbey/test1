
// 10.1���Ӻ�ʵ��Set.cpp : CMy101���Ӻ�ʵ��Set ���ʵ��
//

#include "stdafx.h"
#include "10.1���Ӻ�ʵ��.h"
#include "10.1���Ӻ�ʵ��Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy101���Ӻ�ʵ��Set ʵ��

// ���������� 2020��6��2��, 23:12

IMPLEMENT_DYNAMIC(CMy101���Ӻ�ʵ��Set, CRecordset)

CMy101���Ӻ�ʵ��Set::CMy101���Ӻ�ʵ��Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = 0.0;
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy101���Ӻ�ʵ��Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x4fe1\x606f\x88681;DBQ=D:\\\x5927\x4e8c\x5404\x79d1\x8bfe\x4ef6\\visual c\\\x6570\x636e\x6e90\\Database1.mdb;DefaultDir=D:\\\x5927\x4e8c\x5404\x79d1\x8bfe\x4ef6\\visual c\\\x6570\x636e\x6e90;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy101���Ӻ�ʵ��Set::GetDefaultSQL()
{
	return _T("[��Ϣ��1]");
}

void CMy101���Ӻ�ʵ��Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Double(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// CMy101���Ӻ�ʵ��Set ���

#ifdef _DEBUG
void CMy101���Ӻ�ʵ��Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy101���Ӻ�ʵ��Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

