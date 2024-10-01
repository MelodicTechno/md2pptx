#include "markdown/MarkdownFile.hpp"
bool md::MarkdownFile::readFile()
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

void md::MarkdownFile::displayContent() const
{
    for (const auto& line : content)
    {
        std::cout << line << std::endl;
    }
}

std::string md::MarkdownFile::getFilePath() const
{
    return filePath;
}

void md::MarkdownFile::appendLine(const std::string &line)
{
    std::ofstream outFile(filePath, std::ios::app);
    if (!outFile)
    {
        std::cerr << "Error: could not open the file: " << filePath << std::endl;
        return;
    }
    outFile << line;
    outFile.close();
    std::cout << "Wrote: " << line << " successfully" << std::endl;
}