
// 5.2ʵ��3View.h : CMy52ʵ��3View ��Ľӿ�
//

#pragma once


class CMy52ʵ��3View : public CView
{
protected: // �������л�����
	CMy52ʵ��3View();
	DECLARE_DYNCREATE(CMy52ʵ��3View)

// ����
public:
	CMy52ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy52ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowline();
	afx_msg void OnShowrect();
	afx_msg void OnShowellipe();
};

#ifndef _DEBUG  // 5.2ʵ��3View.cpp �еĵ��԰汾
inline CMy52ʵ��3Doc* CMy52ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy52ʵ��3Doc*>(m_pDocument); }
#endif

