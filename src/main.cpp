#include "markdown/MarkdownFile.hpp"

int main()
{
    std::string path = "assets/foo.md";
    md::MarkdownFile file(path);
    file.displayContent();
    std::cout << "hello";
}