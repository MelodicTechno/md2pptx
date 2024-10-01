#include "markdown/MarkdownFile.hpp"
#include "maddy/blockparser.h"

int main()
{
    std::string path = "assets/foo.md";
    md::MarkdownFile file(path);
    file.readFile();
    file.displayContent();
    std::cout << file.getFilePath();
}