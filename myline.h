#pragma once
#include "CGeometryDataBase.h"
#include"CPointF.h"
class myline :
    public CGeometryDataBase
{
public:
    // 构造函数
    myline(int id, int code, const std::vector<CPointF>& members)
        : CGeometryDataBase(id, code, members) {}

    // 绘制线对象
    void Draw(CDC* pDC) override {
        CPen pen(PS_SOLID, 2, RGB(0, 255, 0));  // 定义画笔
        CPen* oldPen = pDC->SelectObject(&pen);

        for (size_t i = 0; i < mMembers.size() - 1; ++i) {
            pDC->MoveTo(static_cast<int>(mMembers[i].x), static_cast<int>(mMembers[i].y));
            pDC->LineTo(static_cast<int>(mMembers[i + 1].x), static_cast<int>(mMembers[i + 1].y));
        }

        pDC->SelectObject(oldPen);
    }
};

