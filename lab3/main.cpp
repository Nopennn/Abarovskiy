#include "figure.h"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"

int main()
{
    std::cout << "Enter triangle:\n";
    Triangle trngl(std::cin);
    trngl.Print(std::cout);
    std::cout << "The number of vertexes: " << trngl.VertexesNumber() << "\n";
    std::cout << "Area: " << trngl.Area() << "\n\n";

    std::cout << "Enter square:\n";
    Square sqr(std::cin);
    sqr.Print(std::cout);
    std::cout << "The number of vertexes: " << sqr.VertexesNumber() << "\n";
    std::cout << "Area: " << sqr.Area() << "\n\n";

    std::cout << "Enter rectangle:\n";
    Rectangle rect(std::cin);
    rect.Print(std::cout);
    std::cout << "The number of vertexes: " << rect.VertexesNumber() << "\n";
    std::cout << "Area: " << rect.Area() << "\n";
    return 0;
}
