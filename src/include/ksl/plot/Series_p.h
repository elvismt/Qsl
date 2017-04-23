/*
 * Copyright (C) 2017  Elvis Teixeira
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

#pragma once
#include <ksl/plot/Series.h>
#include <ksl/plot/FigureItem_p.h>
#include <QPen>
#include <QBrush>

namespace ksl {
namespace plot {

class SeriesPrivate: public FigureItemPrivate
{
public:

    SeriesPrivate(Series *publ)
        : FigureItemPrivate(publ)
        , linePen(Qt::blue)
        , symbolPen(Qt::red)
        , symbolBrush(Qt::green)
        , symbol(Series::Line)
        , antialias(true)
        , smallSymbolRadius(2.4)
        , bigSymbolRadius(3.5)
    {}

    void checkBounds();

    void paintLine(QPainter *painter);

    void paintSmallCircles(QPainter *painter);

    void paintBigCircles(QPainter *painter);

    QPen linePen;
    QPen symbolPen;
    QBrush symbolBrush;
    Series::Symbol symbol;
    bool antialias;
    double smallSymbolRadius;
    double bigSymbolRadius;

    const double *x;
    const double *y;
    int64_t pointCount;

    double xMin, xMax;
    double yMin, yMax;
};
}}
