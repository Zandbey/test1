
// 10.1���Ӻ�ʵ��View.h : CMy101���Ӻ�ʵ��View ��Ľӿ�
//

#pragma once

class CMy101���Ӻ�ʵ��Set;

class CMy101���Ӻ�ʵ��View : public CRecordView
{
protected: // �������л�����
	CMy101���Ӻ�ʵ��View();
	DECLARE_DYNCREATE(CMy101���Ӻ�ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY101_FORM };
#endif
	CMy101���Ӻ�ʵ��Set* m_pSet;

// ����
public:
	CMy101���Ӻ�ʵ��Doc* GetDocument() const;

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
	virtual ~CMy101���Ӻ�ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10.1���Ӻ�ʵ��View.cpp �еĵ��԰汾
inline CMy101���Ӻ�ʵ��Doc* CMy101���Ӻ�ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy101���Ӻ�ʵ��Doc*>(m_pDocument); }
#endif

