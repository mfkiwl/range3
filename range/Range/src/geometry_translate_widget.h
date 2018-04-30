/*********************************************************************
 *  AUTHOR: Tomas Soltys                                             *
 *  FILE:   geometry_translate_widget.h                              *
 *  GROUP:  Range                                                    *
 *  TYPE:   header file (*.h)                                        *
 *  DATE:   6-th November 2014                                       *
 *                                                                   *
 *  DESCRIPTION: Geometry translate widget class declaration         *
 *********************************************************************/

#ifndef __GEOMETRY_TRANSLATE_WIDGET_H__
#define __GEOMETRY_TRANSLATE_WIDGET_H__

#include <QWidget>

#include <rblib.h>

#include "value_line_edit.h"

class GeometryTranslateWidget : public QWidget
{

    Q_OBJECT

    private:

        static const RR3Vector defaultTranslation;

    protected:

        ValueLineEdit *xDistanceLineEdit;
        ValueLineEdit *yDistanceLineEdit;
        ValueLineEdit *zDistanceLineEdit;

    public:

        //! Constructor.
        explicit GeometryTranslateWidget(const RR3Vector &translation = RR3Vector(), QWidget *parent = 0);

    signals:

        //! Translation changed.
        void translationChanged(const RR3Vector &distances);

    protected slots:

        //! Origin clicked.
        void setOrigin(void);

        //! Center clicked.
        void setCenter(void);

        //! Reset distances clicked.
        void resetDistances(void);

        //! Distance value changed.
        void onDistanceValueChanged(double);

};

#endif // __GEOMETRY_TRANSLATE_WIDGET_H__
