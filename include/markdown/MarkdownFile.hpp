#pragma once

#include <string>
#include <vector>
#include <fstream>

class MarkdownFile
{
private:
    std::string file_path;
    std::vector<std::string> content;
public:
    MarkdownFile(std::string& path) : file_path(path) {};
    ~MarkdownFile();

    bool readFile();
    bool writeFile();
    void appendLine(const std::string& line);
    void clearContent();
    void displayContent() const;
    std::string getFilePath() const;
    void setFilePath(const std::string& path);
};

MarkdownFile::~MarkdownFile()
{
}
