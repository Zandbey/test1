
// 5.2ʵ��2View.h : CMy52ʵ��2View ��Ľӿ�
//

#pragma once


class CMy52ʵ��2View : public CView
{
protected: // �������л�����
	CMy52ʵ��2View();
	DECLARE_DYNCREATE(CMy52ʵ��2View)

// ����
public:
	CMy52ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy52ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap  m_Bitmap;
	int m_nWidth;
	int m_nHeight;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 5.2ʵ��2View.cpp �еĵ��԰汾
inline CMy52ʵ��2Doc* CMy52ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy52ʵ��2Doc*>(m_pDocument); }
#endif

