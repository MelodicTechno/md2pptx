#pragma once

#include "MarkdownFile.hpp"
namespace md
{
    class MarkdownReader
    {
    private:
        md::MarkdownFile file;

    public:
        MarkdownReader(const md::MarkdownFile& file) : file(file) {};
        MarkdownReader(const std::string& filePath) : file(filePath) {};
        void read();
    };
}
