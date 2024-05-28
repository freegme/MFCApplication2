#pragma once
#include "CGeometryDataBase.h"
#include"CPointF.h"
class mypolygon :
    public CGeometryDataBase
{
public:
    // 构造函数
    mypolygon(int id, int code, const std::vector<CPointF>& members)
        : CGeometryDataBase(id, code, members) {}

    // 绘制面对象
    void Draw(CDC* pDC) override {
        CPen pen(PS_SOLID, 2, RGB(0, 0, 255));  // 定义画笔
        CBrush brush(RGB(0, 0, 255));  // 定义刷子
        CPen* oldPen = pDC->SelectObject(&pen);
        CBrush* oldBrush = pDC->SelectObject(&brush);

        // 转换CPointF到CPoint以适应Polygon函数
        std::vector<CPoint> points(mMembers.size());
        for (size_t i = 0; i < mMembers.size(); ++i) {
            points[i] = CPoint(static_cast<int>(mMembers[i].x), static_cast<int>(mMembers[i].y));
        }

        pDC->Polygon(points.data(), points.size());

        pDC->SelectObject(oldPen);
        pDC->SelectObject(oldBrush);
    }
};

