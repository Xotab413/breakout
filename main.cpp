#include <QApplication>
#include "breakout.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Breakout window;

  window.setFixedSize(QSize(660, 900));
  window.setWindowTitle("Breakout");
  window.show();

  return app.exec();
}
