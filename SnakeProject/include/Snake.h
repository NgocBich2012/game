#ifndef SNAKE_H
#define SNAKE_H

#include "Node.h"
#include "Frame.h"

const int g_LENGTH_SNAKE = 3;

class Snake
{
    public:
        Snake();
        ~Snake();
        void setLengthSnake(const int& length_snake) {length_snake_ = length_snake;}
        int getLengthSnake() const {return length_snake_;}

        void setListNode(Node* list_node) {list_node_ = list_node;}
        Node* getListNode() const {return list_node_;}

        void setIsMove(const bool& is_move) {is_move_ = is_move;}
        bool getIsMove() const {return is_move_;}

        void initSnake(); // hàm khởi tạo
        void displaySnake(); // hàm hiển thi rắn lên màn hình
        void handleInput(const char& key); // hàm bắt phím sự kiện
        void update(); // hàm cập nhật trạng thái
        void handleMove(); // hàm xử lí di chuyển
        void checkIsMove(); // hàm kiểm tra

        Node* list_node_;



    private:
        bool is_move_;

        int status_snake_;
        enum StatusSnake{
            right = 0,
            left = 1,
            up = 2,
            down = 3,
        };
        int length_snake_;
//        Node* list_node_;

};

#endif // SNAKE_H
