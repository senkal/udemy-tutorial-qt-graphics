#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType {Asteroid, Cycloid, HyugensCycloid, HypoCycloid};
    void setBackgroundColor (QColor color) { mBackgroundColor = color; }
    QColor getBackgrundColor () const { return mBackgroundColor; }
    void setShape(ShapeType shape) { mShape = shape; }
    ShapeType shape() const { return mShape; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;

signals:

public slots:
};

#endif // RENDERAREA_H
