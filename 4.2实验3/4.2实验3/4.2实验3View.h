
// 4.2实验3View.h : CMy42实验3View 类的接口
//

#pragma once


class CMy42实验3View : public CView
{
protected: // 仅从序列化创建
	CMy42实验3View();
	DECLARE_DYNCREATE(CMy42实验3View)

// 特性
public:
	CMy42实验3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy42实验3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	int set = 1;
	int f = 1;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 4.2实验3View.cpp 中的调试版本
inline CMy42实验3Doc* CMy42实验3View::GetDocument() const
   { return reinterpret_cast<CMy42实验3Doc*>(m_pDocument); }
#endif

