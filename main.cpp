#include <QApplication>
#include "breakout.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Breakout window;

  window.resize(300, 400);
  window.show();

  return app.exec();
}
