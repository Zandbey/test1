
// 7.2实验3View.h : CMy72实验3View 类的接口
//

#pragma once


class CMy72实验3View : public CView
{
protected: // 仅从序列化创建
	CMy72实验3View();
	DECLARE_DYNCREATE(CMy72实验3View)

// 特性
public:
	CMy72实验3Doc* GetDocument() const;

// 操作
public:
	int f = -1; //记录圆上一次的状态，用于暂停
	int flag = -1; // 圆的状态，-1表示停止，1表示左，2表示右，0表示暂停
	CRect cr;
	CPoint p;
	int x = 50;
	CRect CR;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy72实验3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 7.2实验3View.cpp 中的调试版本
inline CMy72实验3Doc* CMy72实验3View::GetDocument() const
   { return reinterpret_cast<CMy72实验3Doc*>(m_pDocument); }
#endif

