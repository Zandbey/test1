
// 10.1例子View.h : CMy101例子View 类的接口
//

#pragma once

class CMy101例子Set;

class CMy101例子View : public CRecordView
{
protected: // 仅从序列化创建
	CMy101例子View();
	DECLARE_DYNCREATE(CMy101例子View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY101_FORM };
#endif
	CMy101例子Set* m_pSet;

// 特性
public:
	CMy101例子Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMy101例子View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	long ID;
	CString NAME;
	CString NUMBER;
	double AGE;
};

#ifndef _DEBUG  // 10.1例子View.cpp 中的调试版本
inline CMy101例子Doc* CMy101例子View::GetDocument() const
   { return reinterpret_cast<CMy101例子Doc*>(m_pDocument); }
#endif

