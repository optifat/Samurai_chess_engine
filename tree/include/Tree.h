#ifndef CHESS_ENGINE_TREE_H
#define CHESS_ENGINE_TREE_H

#include <queue>
#include "Node.h"

class Tree{
public:
    Tree(std::shared_ptr<Board> currentPosition);
    ~Tree();
    void generateTree(int maxDepth);
    int getPositionValue();
    void optimalSequence();
    int totalNodesGenerated();

private:
    int depth;
    std::shared_ptr<Node> root;
    std::queue<std::shared_ptr<Node>> queue;
    int totalNodes;
};

#endif //CHESS_ENGINE_TREE_H
