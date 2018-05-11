#ifndef NODE_H
#define NODE_H

// struct toa do cua moi dot snake
struct Goor{
    int x;
    int y;
};

class Node
{
    public:
        Node();
        ~Node();
        void setGoor(const int &x , const int& y) {goor_.x = x; goor_.y = y;}
        Goor getGoor() const {return goor_;}

        void setCNode(const char& c_node) {c_node_ = c_node;}
        char getCNode() const {return c_node_;}

        void setIndexColor(const int& index) {index_color_ = index;}
        int getIndexColor() const {return index_color_;}


    private:
        Goor goor_; // đốt rắn
        char c_node_; // kí tự đốt rắn
        int index_color_; // màu của đốt rắn


};

#endif // NODE_H
