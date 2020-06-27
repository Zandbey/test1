
// 7.2实验4View.h : CMy72实验4View 类的接口
//

#pragma once


class CMy72实验4View : public CView
{
protected: // 仅从序列化创建
	CMy72实验4View();
	DECLARE_DYNCREATE(CMy72实验4View)

// 特性
public:
	CMy72实验4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy72实验4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 7.2实验4View.cpp 中的调试版本
inline CMy72实验4Doc* CMy72实验4View::GetDocument() const
   { return reinterpret_cast<CMy72实验4Doc*>(m_pDocument); }
#endif

