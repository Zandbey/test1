
// 5.1���ӣ�2��View.h : CMy51���ӣ�2��View ��Ľӿ�
//

#pragma once


class CMy51���ӣ�2��View : public CView
{
protected: // �������л�����
	CMy51���ӣ�2��View();
	DECLARE_DYNCREATE(CMy51���ӣ�2��View)

// ����
public:
	CMy51���ӣ�2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy51���ӣ�2��View();
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

#ifndef _DEBUG  // 5.1���ӣ�2��View.cpp �еĵ��԰汾
inline CMy51���ӣ�2��Doc* CMy51���ӣ�2��View::GetDocument() const
   { return reinterpret_cast<CMy51���ӣ�2��Doc*>(m_pDocument); }
#endif

