
// 10.1����Doc.h : CMy101����Doc ��Ľӿ�
//


#pragma once
#include "10.1����Set.h"


class CMy101����Doc : public CDocument
{
protected: // �������л�����
	CMy101����Doc();
	DECLARE_DYNCREATE(CMy101����Doc)

// ����
public:
	CMy101����Set m_My101����Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy101����Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
