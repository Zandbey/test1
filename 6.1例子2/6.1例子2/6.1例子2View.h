
// 6.1����2View.h : CMy61����2View ��Ľӿ�
//

#pragma once


class CMy61����2View : public CView
{
protected: // �������л�����
	CMy61����2View();
	DECLARE_DYNCREATE(CMy61����2View)

// ����
public:
	CMy61����2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy61����2View();
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

#ifndef _DEBUG  // 6.1����2View.cpp �еĵ��԰汾
inline CMy61����2Doc* CMy61����2View::GetDocument() const
   { return reinterpret_cast<CMy61����2Doc*>(m_pDocument); }
#endif

