#include "markdown/MarkdownReader.hpp"
#include "maddy/parser.h"

void md::MarkdownReader::read()
{
    file.readFile();
    std::vector<std::string> fileContent = file.output();
}

void md::MarkdownReader::addFile(md::MarkdownFile newFile)
{
    fileArray.push_back(newFile);
}