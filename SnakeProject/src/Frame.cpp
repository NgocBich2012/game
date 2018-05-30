#include "Frame.h"

Frame::Frame()
{
    width_ = g_WIDTH_FRAME;
    height_ = g_HEIGHT_FRAME;
    c_frame_ = '*';
    index_color_ = 7;
}

Frame::~Frame()
{
    //dtor
}
/*
*Input : khong co gi
*Output : Hien thi frame len man hinh
*/
void Frame::displayFrame()
{
    PublicFunction public_function;

    for (int i = 1 ; i <= width_ ; ++i){
        public_function.gotoxy(i,1);
        public_function.textColorChar(c_frame_,index_color_);
        public_function.gotoxy(i,height_);
        public_function.textColorChar(c_frame_,index_color_);
    }
    for (int i = 0 ; i <= height_ ; ++i){
        public_function.gotoxy(1,i);
        public_function.textColorChar(c_frame_,index_color_);
        public_function.gotoxy(width_,i);
        public_function.textColorChar(c_frame_,index_color_);
    }

}
