
// 10.1例子和实验View.h : CMy101例子和实验View 类的接口
//

#pragma once

class CMy101例子和实验Set;

class CMy101例子和实验View : public CRecordView
{
protected: // 仅从序列化创建
	CMy101例子和实验View();
	DECLARE_DYNCREATE(CMy101例子和实验View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY101_FORM };
#endif
	CMy101例子和实验Set* m_pSet;

// 特性
public:
	CMy101例子和实验Doc* GetDocument() const;

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
	virtual ~CMy101例子和实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10.1例子和实验View.cpp 中的调试版本
inline CMy101例子和实验Doc* CMy101例子和实验View::GetDocument() const
   { return reinterpret_cast<CMy101例子和实验Doc*>(m_pDocument); }
#endif

