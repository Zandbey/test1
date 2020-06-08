
// 6.1例子1View.h : CMy61例子1View 类的接口
//

#pragma once


class CMy61例子1View : public CView
{
protected: // 仅从序列化创建
	CMy61例子1View();
	DECLARE_DYNCREATE(CMy61例子1View)

// 特性
public:
	CMy61例子1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy61例子1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 6.1例子1View.cpp 中的调试版本
inline CMy61例子1Doc* CMy61例子1View::GetDocument() const
   { return reinterpret_cast<CMy61例子1Doc*>(m_pDocument); }
#endif

