#ifndef ABSTRACT_MODEL
#define ABSTRACT_MODEL

class AbstractModel
{
public:
    virtual void placeBlock() = 0;
    virtual void reset() = 0;
    virtual bool isPlaying() = 0;
};

#endif
