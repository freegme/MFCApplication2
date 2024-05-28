#pragma once
#include "CGeometryDataBase.h"
#include"CPointF.h"
class mypoint :
    public CGeometryDataBase
{
public:
    // 构造函数
    mypoint(int id, int code, const std::vector<CPointF>& members)
        : CGeometryDataBase(id, code, members) {}

    // 绘制点对象
    void Draw(CDC* pDC) override {
        int size = 2;  // 定义画笔粗细
        COLORREF clr = RGB(255, 0, 0);  // 定义画笔颜色
        pDC->FillSolidRect(static_cast<int>(mMembers[0].x - size / 2), static_cast<int>(mMembers[0].y - size / 2), size, size, clr);
    }
};

