
// 5.1ʵ��1View.h : CMy51ʵ��1View ��Ľӿ�
//

#pragma once


class CMy51ʵ��1View : public CView
{
protected: // �������л�����
	CMy51ʵ��1View();
	DECLARE_DYNCREATE(CMy51ʵ��1View)

// ����
public:
	CMy51ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy51ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 5.1ʵ��1View.cpp �еĵ��԰汾
inline CMy51ʵ��1Doc* CMy51ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy51ʵ��1Doc*>(m_pDocument); }
#endif

