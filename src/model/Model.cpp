#include "model/Model.hpp"

Model::Model(int width, int height, int levels) : width(width), height(height)
{
    number_of_levels = levels;
    blocks = new bool*[width];
    for (int i; i < width; i++) {
        blocks[i] = new bool[height];
        for (int j = 0; j < height; j++) {
            blocks[i][j] = false;
        }
    }
}

void Model::placeBlock()
{
}

void Model::reset()
{
    if (!playing) {
        playing = true;
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
               blocks[i][j] = false;
            }
        }   
    }
}

bool Model::isPlaying()
{
    return playing;
}

bool Model::blockAtPosition(int x, int y)
{
    if ((x >= 0) && (x < width) && (y >= 0) && (y < height)) {
        return blocks[x][y];
    } else {
        return false;
    }
}

int Model::getWidth()
{
    return width;
}

int Model::getHeight()
{
    return height;
}
