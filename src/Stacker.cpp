#include <iostream>

#include "model/Model.hpp"

int main(int argc, char** argv)
{
    Model model(5, 15, 5);
    std::cout << "This game of stacker is " << model.getWidth() << " blocks wide and "
        << model.getHeight() << " blocks high" << std::endl;
    return 0;
}
