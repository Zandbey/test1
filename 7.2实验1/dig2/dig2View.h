
// dig2View.h : Cdig2View ��Ľӿ�
//

#pragma once


class Cdig2View : public CView
{
protected: // �������л�����
	Cdig2View();
	DECLARE_DYNCREATE(Cdig2View)

// ����
public:
	Cdig2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cdig2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // dig2View.cpp �еĵ��԰汾
inline Cdig2Doc* Cdig2View::GetDocument() const
   { return reinterpret_cast<Cdig2Doc*>(m_pDocument); }
#endif

