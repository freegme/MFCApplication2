#pragma once
#include "CGeometryDataBase.h"
#include"CPointF.h"
class mypoint :
    public CGeometryDataBase
{
public:
    // ���캯��
    mypoint(int id, int code, const std::vector<CPointF>& members)
        : CGeometryDataBase(id, code, members) {}

    // ���Ƶ����
    void Draw(CDC* pDC) override {
        int size = 2;  // ���廭�ʴ�ϸ
        COLORREF clr = RGB(255, 0, 0);  // ���廭����ɫ
        pDC->FillSolidRect(static_cast<int>(mMembers[0].x - size / 2), static_cast<int>(mMembers[0].y - size / 2), size, size, clr);
    }
};

