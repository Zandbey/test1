
// 10.1例子Doc.h : CMy101例子Doc 类的接口
//


#pragma once
#include "10.1例子Set.h"


class CMy101例子Doc : public CDocument
{
protected: // 仅从序列化创建
	CMy101例子Doc();
	DECLARE_DYNCREATE(CMy101例子Doc)

// 特性
public:
	CMy101例子Set m_My101例子Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy101例子Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
