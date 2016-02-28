/*
 * Copyright (C) 2016  Elvis Teixeira
 *
 * This source code is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any
 * later version.
 *
 * This source code is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KSL_XYAXISSAMPLER_P_H
#define KSL_XYAXISSAMPLER_P_H

#include <Ksl/XYAxisSampler.h>

namespace Ksl {

class XYAxisSamplerPrivate
    : public Ksl::ObjectPrivate
{
public:

    XYAxisSamplerPrivate(XYAxisSampler *publ)
        : ObjectPrivate(publ)
        , min(1.0)
        , max(-1.0)
        , hint(0.0)
        , minorSamples(false)
        , mode(XYAxisSampler::AutoDecimal)
    { }


    double min, max;
    double hint;
    bool minorSamples;
    XYAxisSampler::Mode mode;
    QList<XYAxisSampler::Sample> sampleList;
};

} // namespace Ksl

#endif // KSL_XYAXISSAMPLER_P_H
