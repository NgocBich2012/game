#include "Food.h"

Food::Food()
{
    x_ = 0;
    y_ = 0;

    width_ = WIDTH_FOOD;
    height_ = HEIGHT_FOOD;
    c_food_ = '@';
    index_color_ = 7;
}

Food::~Food()
{
    //dtor
}

void Food::displayFood()
{
    PublicFunction public_function;                              //(x,y);
//    public_function.gotoxy(x_,y_);                               @ @
//    public_function.textColorChar(c_food_,index_color_);         @ @
    for (int i = 0 ; i < height_ ; ++i){
        for (int j = 0; j < width_ ; ++j){
            public_function.gotoxy(x_ + j , y_ + i);
            public_function.textColorChar(c_food_,index_color_);
        }
    }

}

void Food::update()
{


    PublicFunction public_function;
    for (int i = 0 ; i < height_ ; ++i){
        for (int j = 0; j < width_ ; ++j){
            public_function.gotoxy(x_ + j , y_ + i);
            public_function.textColorChar(' ',index_color_);
        }
    }

    Frame frame;
    x_ = public_function.randomNumber(2,frame.getWidth() - height_);
    y_ = public_function.randomNumber(2,frame.getHeight() - width_);

}
