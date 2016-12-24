#ifndef MODEL
#define MODEL

#include "model/AbstractModel.h"
#include "view/AbstractViewModel.h"

class Model : public AbstractModel, public AbstractViewModel
{
public:
    Model();
    void placeBlock();
    void reset();
    bool isPlaying();
    bool blockAtPosition(int x, int y);
    int getWidth();
    int getHeight();
};

#endif
