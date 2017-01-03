#ifndef ABSTRACT_VIEW_MODEL
#define ABSTRACT_VIEW_MODEL

class AbstractViewModel
{
    public:
        virtual bool blockAtPosition(int x, int y) = 0;
        virtual int getWidth() = 0;
        virtual int getHeight() = 0;
};

#endif
