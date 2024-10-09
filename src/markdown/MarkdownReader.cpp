#include "markdown/MarkdownReader.hpp"
#include "maddy/parser.h"

void md::MarkdownReader::read()
{
    file.readFile();
}

void md::MarkdownReader::addFile(md::MarkdownFile newFile)
{
    fileArray.push_back(newFile);
}