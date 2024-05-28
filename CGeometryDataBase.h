#pragma once
#include"vector"
#include"CPointF.h"
class CGeometryDataBase
{
public:
    int id;             // 几何对象ID
    int code;           // 几何对象代码
    std::vector<CPointF> mMembers; // 坐标点集合

    // 构造函数
    CGeometryDataBase(int id, int code, const std::vector<CPointF>& members)
        : id(id), code(code), mMembers(members) {}

    // 虚析构函数
    virtual ~CGeometryDataBase() {}

    // 纯虚函数，用于绘制几何对象
    virtual void Draw(CDC* pDC) = 0;
};


