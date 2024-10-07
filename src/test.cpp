/*
Test the code
*/

#include "markdown/MarkdownFile.hpp"

int main()
{
    std::string path = "assets/foo.md";
    md::MarkdownFile file(path);
    file.readFile();
    file.displayContent();
    std::cout << file.getFilePath() << std::endl;
    // file.appendLine("\nHello, world!");
    // file.readFile();
    // file.displayContent();
}