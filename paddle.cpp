#include <iostream>
#include "paddle.h"

Paddle::Paddle() {

  dx = 0;
  image.load(":/img/paddle2.png");

  rect = image.rect();
  resetState();
}

Paddle::~Paddle() {

 std::cout << ("Paddle deleted") << std::endl;
}

void Paddle::setDx(int x) {
  dx = x;
}

void Paddle::move() {

    int x = rect.x() + dx;
    int y = rect.top();

    rect.moveTo(x, y);
}
void Paddle::move(int x) {
    rect.moveTo(x, INITIAL_Y);
}
void Paddle::resetState() {

  rect.moveTo(INITIAL_X, INITIAL_Y);
}

QRect Paddle::getRect() {

  return rect;
}

QImage & Paddle::getImage() {

  return image;
}
