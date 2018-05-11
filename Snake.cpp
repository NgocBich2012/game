#include "Snake.h"
#include "PublicFunction.h"

Snake::Snake()
{
    length_snake_ = g_LENGTH_SNAKE;
    status_snake_ = right;
    is_move_ = true;
}

Snake::~Snake()
{
    delete [] list_node_;
}
/*
*Input : khong co gi
*Output : khoi tao con ran voi 3 dot
*/
void Snake::initSnake()
{
    length_snake_ = g_LENGTH_SNAKE;
    list_node_[0].setGoor(10,10);
    list_node_[1].setGoor(9,10);
    list_node_[2].setGoor(8,10);

}
/*
*Input : ki tu key kieu char
*Output : cap nhap trang thai cua snake ( right , left ..v..v
*/
void Snake::handleInput(const char& key)
{
    if (key == 75){
        status_snake_ = left;
    }
    else if (key == 77){
        status_snake_ = right;
    }
    else if (key == 72 ){
        status_snake_ = up;
    }
    else if (key == 80) {
        status_snake_ = down;
    }
}
/*
*Input : ko co gi
*Output : xu ly con ran di chuyen
*/
void Snake::handleMove()
{
    if (status_snake_ == right){
        list_node_[0].setGoor(list_node_[0].getGoor().x + 1 , list_node_[0].getGoor().y);
    }
    else if (status_snake_ == left){
        list_node_[0].setGoor(list_node_[0].getGoor().x - 1 , list_node_[0].getGoor().y);
    }
    else if (status_snake_ == up){
        list_node_[0].setGoor(list_node_[0].getGoor().x , list_node_[0].getGoor().y - 1);
    }
    else {
        list_node_[0].setGoor(list_node_[0].getGoor().x , list_node_[0].getGoor().y + 1);
    }
}

/*
*Input : ko co gi
*Output : cap nhap toa do cac dot cua con ran
*/
void Snake::update()
{
    PublicFunction public_function;

    public_function.gotoxy(list_node_[length_snake_ - 1].getGoor().x,list_node_[length_snake_ - 1].getGoor().y);
    std::cout << " ";
    for (int i = length_snake_ - 1 ; i > 0 ; i--){
        list_node_[i].setGoor(list_node_[i-1].getGoor().x,list_node_[i-1].getGoor().y);
    }

}
/*
*Input : ko co gi
*Output : hien thi con ran len man hinh
*/
void Snake::displaySnake()
{
    PublicFunction public_function;

    for (int i = length_snake_ - 1 ; i >= 0 ; i--){
        public_function.gotoxy(list_node_[i].getGoor().x,list_node_[i].getGoor().y);
        public_function.textColorChar(list_node_[0].getCNode(),list_node_[0].getIndexColor());
    }

}

/*
*Input : ko co gi ca
*Output : kiem tra con ran chet chua
*/
void Snake::checkIsMove()
{
    Frame frame;

    for (int i = length_snake_ - 1 ; i > 0 ; --i){
        if (list_node_[0].getGoor().x == list_node_[i].getGoor().x && list_node_[0].getGoor().y == list_node_[i].getGoor().y){
            is_move_ = false;
        }
    }

    if (list_node_[0].getGoor().x == 1 || list_node_[0].getGoor().x == frame.getWidth()
        || list_node_[0].getGoor().y == 1 || list_node_[0].getGoor().y == frame.getHeight()){
            is_move_ = false;
    }

}
