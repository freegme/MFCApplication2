#pragma once
#include"vector"
#include"CPointF.h"
class CGeometryDataBase
{
public:
    int id;             // ���ζ���ID
    int code;           // ���ζ������
    std::vector<CPointF> mMembers; // ����㼯��

    // ���캯��
    CGeometryDataBase(int id, int code, const std::vector<CPointF>& members)
        : id(id), code(code), mMembers(members) {}

    // ����������
    virtual ~CGeometryDataBase() {}

    // ���麯�������ڻ��Ƽ��ζ���
    virtual void Draw(CDC* pDC) = 0;
};


