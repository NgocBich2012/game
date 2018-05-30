#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "PublicFunction.h"
#include "Node.h"
#include "Snake.h"
#include "Frame.h"
#include "Food.h"
#include "Menu.h"

#define SPEED_SNAKE 50

using namespace std;
bool checkCollision(Node &head ,Food& food );

int main()
{


    Food food;
    food.update();
     // update thức ăn
    Frame frame;
    Node* list_node = new Node[10000];
    Snake* snake = new Snake();
    snake->setListNode(list_node);
    snake->initSnake();

    char key = 77; // gán cho ban đầu rắn đi từ trái sang phải
    char check_key = 77;
    int score = 0;


    PublicFunction public_function; // chức năng công cộng
    Menu menu; // menu
    menu.snake2018();
    MenuMain : // Nhan goto
    menu.menuMain();

    if (menu.getMenuMain() == 1){
        system("cls");
        frame.displayFrame(); //  vẽ khung cho game
        food.displayFood();
        while(snake->getIsMove()){
            //food.displayFood(); // hiển thi thức ăn
            snake->displaySnake(); // hiển thị rắn
            Sleep(SPEED_SNAKE);

            if (kbhit()){
                key = _getch();
                if((key == 77 && check_key == 75)
                        ||(key == 75 && check_key == 77)
                        ||(key == 72 && check_key == 80)
                        ||(key == 80 && check_key == 72)
                        ||(key != 75 && key != 72 && key != 77 && key != 80))
                {
                    key = check_key;
                }
                check_key = key;
                snake->handleInput(key); //   di chuyển rắn
            }
            snake->update(); // câp nhật trạng thái rắn
            snake->handleMove();
            // kiem tra va cham


//            if (snake->getListNode()[0].getGoor().x == food.getX() && snake->getListNode()[0].getGoor().y == food.getY())
//                {
//
//                food.update();
//                snake->getListNode()[snake->getLengthSnake()].setGoor(snake->getListNode()[snake->getLengthSnake() -1].getGoor().x , snake->getListNode()[snake->getLengthSnake() -1].getGoor().y);
//                snake->setLengthSnake(snake->getLengthSnake() + 1);
//                score++;
//            }

            if(checkCollision(snake->getListNode()[0],food) == true){
                food.update();
                food.displayFood();
                snake->getListNode()[snake->getLengthSnake()].setGoor(snake->getListNode()[snake->getLengthSnake() -1].getGoor().x , snake->getListNode()[snake->getLengthSnake() -1].getGoor().y);
                snake->setLengthSnake(snake->getLengthSnake() + 1);
                score++;
            }
            snake->checkIsMove(); // kiểm tra rắn sống hay chết

        // Handle snake dead(rắn chết)
            if (snake->getIsMove() == false){
                while(true){
                    public_function.gotoxy(35,15);
                    public_function.textColorString("Game over! Ban co muon choi tiep khong (Y/N)",public_function.randomNumber(1,15));
                    if (kbhit()){
                        snake->setIsMove(true);
                        snake->initSnake();
                        system("cls");
                        frame.displayFrame();
                        food.update();

                        key = 77;
                        check_key = 77;
                        score = 0;
                        snake->handleInput(key);
                        char c = _getch();
                        if (c == 'y' || c == 'Y'){
                            food.displayFood();
                            break;

                        }else if (c == 'n' || c == 'N'){
                            goto MenuMain;
                        }
                    }
                    Sleep(100);
                }
            }
        // display score
            public_function.gotoxy(103,1);
            public_function.textColorString("Score : ",public_function.randomNumber(8,15));
            cout << score;
        }
    }
    if (menu.getMenuMain() == 2){ // cài đặt
        menu.setting();
        if (menu.getIndexSetting() == 1){
            system("cls");
            public_function.gotoxy(40,15);
            public_function.textColorString("Nhap vao ki tu cua con ran : " ,10);
            int c;
            std::cin >> c;
            snake->getListNode()[0].setCNode(c);
            public_function.gotoxy(40,17);
            public_function.textColorString("Nhap vao chi so mau cua con ran : " ,10);
            int index = 0;
            std::cin >> index;
            snake->getListNode()[0].setIndexColor(index);


            goto MenuMain;
        }
        if(menu.getIndexSetting() == 2){
            system("cls");
            public_function.gotoxy(40,19);
            public_function.textColorString("Nhap vao ki tu cua khung : " ,10);
            int c;
            std:: cin >> c;
            frame.setCFrame(c);
            public_function.gotoxy(40,20);
            public_function.textColorString("Nhap vao chi so mau cua khung : " ,10);
            int index = 0;
            std :: cin >> index;
            frame.setIndexColor(index);
            goto MenuMain;
        }
        if(menu.getIndexSetting() == 3)
        {
            system("cls");
            public_function.gotoxy(40,19);
            public_function.textColorString("Nhap vao ki tu cua thuc an : " ,10);
            int c;
            std :: cin >> c;
            food.setCFood(c);
            public_function.gotoxy(40,20);
            public_function.textColorString("Nhap vao ki tu cua thuc an : " ,10);
            int index = 0;
            std:: cin >> index;
            food.setIndexColor(index);
            goto MenuMain;
        }
        if(menu.getIndexSetting() == 4){
            goto MenuMain;
        }

    }
    if (menu.getMenuMain() == 3){
        return 0;
    }


    return 0;
}



bool checkCollision(Node &head ,Food& food )
{
    for (int i = 0 ; i < food.getHeight(); ++i){
        for (int j = 0 ; j < food.getWidth() ; ++j){
            if ((head.getGoor().x == (food.getX() + j)) && (head.getGoor().y == (food.getY() + i))){
                return true;
            }
        }
    }
    return false;
}


























