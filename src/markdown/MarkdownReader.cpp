#include "../../include/markdown/MarkdownFile.hpp"
bool MarkdownFile::readFile()
{
    std::ifstream inFile(filePath);
    if (!inFile)
    {
        std::cerr << "Error: could not open the file: " << filePath << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inFile, line))
    {
        content.push_back(line);
    }

    inFile.close();
    return true;
}