#ifndef HANDTOOL_HPP
#define HANDTOOL_HPP

#include <QList>
#include "abstracttool.hpp"

class QImage;

class HandTool : public AbstractTool {
  Q_OBJECT;
public:
  explicit HandTool(QObject *parent = 0);
  virtual ~HandTool() {}

  void mousePressEvent(QMouseEvent *event, PaintCanvas *canvas);
  void mouseMoveEvent(QMouseEvent *event, PaintCanvas *canvas);
  void mouseReleaseEvent(QMouseEvent *event, PaintCanvas *canvas);

private:
  void paint(PaintCanvas *canvas);

  QImage *m_pImage;
};

#endif /* HANDTOOL_HPP */
