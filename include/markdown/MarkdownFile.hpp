#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

namespace md
{
    class MarkdownFile
    {
    private:
        std::string filePath;
        std::vector<std::string> content;

    public:
        MarkdownFile(std::string &path) : filePath(path) {};

        bool readFile();
        // bool writeFile();
        // void appendLine(const std::string &line);
        // void clearContent();
        void displayContent() const;
        // std::string getFilePath() const;
        // void setFilePath(const std::string &path);
    };
}
