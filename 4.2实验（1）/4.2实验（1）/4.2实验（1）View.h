
// 4.2ʵ�飨1��View.h : CMy42ʵ�飨1��View ��Ľӿ�
//

#pragma once


class CMy42ʵ�飨1��View : public CView
{
protected: // �������л�����
	CMy42ʵ�飨1��View();
	DECLARE_DYNCREATE(CMy42ʵ�飨1��View)

// ����
public:
	CMy42ʵ�飨1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy42ʵ�飨1��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int num;
	CPoint start;
	CPoint end;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.2ʵ�飨1��View.cpp �еĵ��԰汾
inline CMy42ʵ�飨1��Doc* CMy42ʵ�飨1��View::GetDocument() const
   { return reinterpret_cast<CMy42ʵ�飨1��Doc*>(m_pDocument); }
#endif

