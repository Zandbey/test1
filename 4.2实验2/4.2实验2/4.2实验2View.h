
// 4.2ʵ��2View.h : CMy42ʵ��2View ��Ľӿ�
//

#pragma once


class CMy42ʵ��2View : public CView
{
protected: // �������л�����
	CMy42ʵ��2View();
	DECLARE_DYNCREATE(CMy42ʵ��2View)

// ����
public:
	CMy42ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy42ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int mx, my, x, y;
	int height, width;
	int flag;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.2ʵ��2View.cpp �еĵ��԰汾
inline CMy42ʵ��2Doc* CMy42ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy42ʵ��2Doc*>(m_pDocument); }
#endif

