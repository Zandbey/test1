
// 6.1����1View.h : CMy61����1View ��Ľӿ�
//

#pragma once


class CMy61����1View : public CView
{
protected: // �������л�����
	CMy61����1View();
	DECLARE_DYNCREATE(CMy61����1View)

// ����
public:
	CMy61����1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy61����1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 6.1����1View.cpp �еĵ��԰汾
inline CMy61����1Doc* CMy61����1View::GetDocument() const
   { return reinterpret_cast<CMy61����1Doc*>(m_pDocument); }
#endif

