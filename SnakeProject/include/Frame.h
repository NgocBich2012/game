// khung snake
#ifndef FRAME_H
#define FRAME_H
#include <time.h>
#include "PublicFunction.h"

const int g_WIDTH_FRAME = 100;
const int g_HEIGHT_FRAME = 30;

class Frame
{
    public:
        Frame();
        ~Frame();
        void setCFrame(const char& c) {c_frame_ = c;}
        char getCFrame() const {return c_frame_;}

        void setIndexColor(const int& index) {index_color_ = index;}
        int getIndexColor() const {return index_color_;}

        void setWidth(const int &width) {width_ = width;}
        int getWidth() const {return width_;}

        void setHeight(const int &height) {height_ = height;}
        int getHeight() const {return height_;}

        void displayFrame();

        //void setting();

    private:
        char c_frame_; // kí tự của khung
        char index_color_; // màu cho khung
        int width_; // chiều rộng
        int height_; // chiều cao
};

#endif // FRAME_H
