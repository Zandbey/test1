
// 4.2ʵ��3View.h : CMy42ʵ��3View ��Ľӿ�
//

#pragma once


class CMy42ʵ��3View : public CView
{
protected: // �������л�����
	CMy42ʵ��3View();
	DECLARE_DYNCREATE(CMy42ʵ��3View)

// ����
public:
	CMy42ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy42ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	int set = 1;
	int f = 1;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 4.2ʵ��3View.cpp �еĵ��԰汾
inline CMy42ʵ��3Doc* CMy42ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy42ʵ��3Doc*>(m_pDocument); }
#endif

