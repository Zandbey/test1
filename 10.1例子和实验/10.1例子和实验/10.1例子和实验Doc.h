
// 10.1���Ӻ�ʵ��Doc.h : CMy101���Ӻ�ʵ��Doc ��Ľӿ�
//


#pragma once
#include "10.1���Ӻ�ʵ��Set.h"


class CMy101���Ӻ�ʵ��Doc : public CDocument
{
protected: // �������л�����
	CMy101���Ӻ�ʵ��Doc();
	DECLARE_DYNCREATE(CMy101���Ӻ�ʵ��Doc)

// ����
public:
	CMy101���Ӻ�ʵ��Set m_My101���Ӻ�ʵ��Set;

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
	virtual ~CMy101���Ӻ�ʵ��Doc();
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
