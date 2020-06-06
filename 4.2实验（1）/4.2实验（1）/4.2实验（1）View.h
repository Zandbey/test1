
// 4.2实验（1）View.h : CMy42实验（1）View 类的接口
//

#pragma once


class CMy42实验（1）View : public CView
{
protected: // 仅从序列化创建
	CMy42实验（1）View();
	DECLARE_DYNCREATE(CMy42实验（1）View)

// 特性
public:
	CMy42实验（1）Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy42实验（1）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int num;
	CPoint start;
	CPoint end;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.2实验（1）View.cpp 中的调试版本
inline CMy42实验（1）Doc* CMy42实验（1）View::GetDocument() const
   { return reinterpret_cast<CMy42实验（1）Doc*>(m_pDocument); }
#endif

