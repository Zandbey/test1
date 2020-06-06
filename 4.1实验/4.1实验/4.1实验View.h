
// 4.1实验View.h : CMy41实验View 类的接口
//

#pragma once


class CMy41实验View : public CView
{
protected: // 仅从序列化创建
	CMy41实验View();
	DECLARE_DYNCREATE(CMy41实验View)

// 特性
public:
	CMy41实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy41实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.1实验View.cpp 中的调试版本
inline CMy41实验Doc* CMy41实验View::GetDocument() const
   { return reinterpret_cast<CMy41实验Doc*>(m_pDocument); }
#endif

