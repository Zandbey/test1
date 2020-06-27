
// dig2View.h : Cdig2View 类的接口
//

#pragma once


class Cdig2View : public CView
{
protected: // 仅从序列化创建
	Cdig2View();
	DECLARE_DYNCREATE(Cdig2View)

// 特性
public:
	Cdig2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdig2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // dig2View.cpp 中的调试版本
inline Cdig2Doc* Cdig2View::GetDocument() const
   { return reinterpret_cast<Cdig2Doc*>(m_pDocument); }
#endif

