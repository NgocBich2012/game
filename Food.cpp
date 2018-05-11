#include "Food.h"

Food::Food()
{
    x_ = 0;
    y_ = 0;
    c_food_ = '@';
    index_color_ = 7;
}

Food::~Food()
{
    //dtor
}

void Food::displayFood()
{
    PublicFunction public_function;
    public_function.gotoxy(x_,y_);
    public_function.textColorChar(c_food_,index_color_);
}

void Food::update()
{
    PublicFunction public_function;
    Frame frame;
    x_ = public_function.randomNumber(2,frame.getWidth() - 1);
    y_ = public_function.randomNumber(2,frame.getHeight() - 1);
}
