
// 8.1实验1View.h : CMy81实验1View 类的接口
//

#pragma once


class CMy81实验1View : public CView
{
protected: // 仅从序列化创建
	CMy81实验1View();
	DECLARE_DYNCREATE(CMy81实验1View)

// 特性
public:
	CRect cr;
	CPoint p;
	int flag = 1;  //1表示还未画矩形，2表示移动过程，3表示放下
	int h_height;
	int h_width;
	CMy81实验1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy81实验1View();
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

#ifndef _DEBUG  // 8.1实验1View.cpp 中的调试版本
inline CMy81实验1Doc* CMy81实验1View::GetDocument() const
   { return reinterpret_cast<CMy81实验1Doc*>(m_pDocument); }
#endif

