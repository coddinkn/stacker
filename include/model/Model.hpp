#ifndef MODEL
#define MODEL

#include "model/AbstractModel.hpp"
#include "view/AbstractViewModel.hpp"

class Model : public AbstractModel, public AbstractViewModel
{
private:
    int current_level;
    int number_of_levels;
    int width;
    int height;
    bool playing;
    bool** blocks;
public:
    Model(int width, int height, int levels);
    void placeBlock();
    void reset();
    bool isPlaying();
    bool blockAtPosition(int x, int y);
    int getWidth();
    int getHeight();
};

#endif
