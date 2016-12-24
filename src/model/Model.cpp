#include "model/Model.h"

Model::Model()
{
}

void Model::placeBlock()
{
}

void Model::reset()
{
}

bool Model::isPlaying()
{
    return true;
}

bool Model::blockAtPosition(int x, int y)
{
    return x == y;
}

int Model::getWidth()
{
    return -1;
}

int Model::getHeight()
{
    return 1;
}
