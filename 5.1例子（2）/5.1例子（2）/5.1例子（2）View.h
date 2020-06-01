
// 5.1例子（2）View.h : CMy51例子（2）View 类的接口
//

#pragma once


class CMy51例子（2）View : public CView
{
protected: // 仅从序列化创建
	CMy51例子（2）View();
	DECLARE_DYNCREATE(CMy51例子（2）View)

// 特性
public:
	CMy51例子（2）Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy51例子（2）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap  m_Bitmap;
	int m_nWidth;
	int m_nHeight;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 5.1例子（2）View.cpp 中的调试版本
inline CMy51例子（2）Doc* CMy51例子（2）View::GetDocument() const
   { return reinterpret_cast<CMy51例子（2）Doc*>(m_pDocument); }
#endif

