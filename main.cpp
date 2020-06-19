#include <iostream>

struct Tree{
    int val;
    Tree* left = nullptr;
    Tree* right = nullptr;

    Tree(int v){
        val = v;
    }
};

int smallerThan(Tree* tr, int a){
    if(tr == nullptr) return 0;

    int result = 0;
    if(tr->val < a) result++;
    result += smallerThan(tr->left, a) + smallerThan(tr->right, a);

    return result;
}

//int main() {
//    Tree tr(10);
//    tr.right = new Tree(6);
//    tr.left = new Tree(7);
//    tr.left->left = new Tree(3);
//    tr.left->right = new Tree(4);
//    tr.left->right->left = new Tree(1);
//
//    std::cout << smallerThan(&tr, 5);
//    return 0;
//}
