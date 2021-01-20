#pragma once

#include "JGeometry/TVec3.h"
#include "kamek.h"

class Binder
{
public:
    Binder(Mtx *, const JGeometry::TVec3<f32> *, const JGeometry::TVec3<f32> *, f32, f32, u64);

    static void bind(JGeometry::TVec3<f32> &, Binder *, const JGeometry::TVec3<f32> &);
    void clear();

    u8 _0[0x1F0];
};