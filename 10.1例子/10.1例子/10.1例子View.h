
// 10.1����View.h : CMy101����View ��Ľӿ�
//

#pragma once

class CMy101����Set;

class CMy101����View : public CRecordView
{
protected: // �������л�����
	CMy101����View();
	DECLARE_DYNCREATE(CMy101����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY101_FORM };
#endif
	CMy101����Set* m_pSet;

// ����
public:
	CMy101����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy101����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	long ID;
	CString NAME;
	CString NUMBER;
	double AGE;
};

#ifndef _DEBUG  // 10.1����View.cpp �еĵ��԰汾
inline CMy101����Doc* CMy101����View::GetDocument() const
   { return reinterpret_cast<CMy101����Doc*>(m_pDocument); }
#endif

