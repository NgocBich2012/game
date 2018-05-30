#ifndef FOOD_H
#define FOOD_H

#include "Frame.h"
#include "PublicFunction.h"

#define WIDTH_FOOD 1
#define HEIGHT_FOOD 1

class Food
{
    public:
        Food();
        ~Food();
        void setX(const int &x) {x_ = x;}
        int getX() const {return x_;}

        void setY(const int &y) {y_ = y;}
        int getY() const {return y_;}


        void setCFood(const char& c_food) {c_food_ = c_food;}
        char getCFood() const {return c_food_;}

        void setIndexColor(const int& index) {index_color_ = index;}
        int getIndexColor() const {return index_color_;}

        void setWidth(const int& width){width_ = width;}
        int getWidth() const {return width_;}

        void setHeight(const int& height) {height_ = height;}
        int getHeight() const {return height_;}

        void displayFood();
        void update();

    private:
        int x_; // tọa độ x của thức ăn
        int y_; // tọa độ y của thức ăn
        int width_;
        int height_;
        char c_food_; // kí tự thức ăn
        int index_color_; // màu thức ăn

};

#endif // FOOD_H
