#pragma once

#include "MarkdownFile.hpp"
#include "maddy/parser.h"

namespace md
{
    class MarkdownReader
    {
    private:
        md::MarkdownFile file;
        maddy::Parser parser;
        std::vector<const md::MarkdownFile&> fileArray;

    public:
        MarkdownReader(const md::MarkdownFile& file) : file(file)
        {
            fileArray.push_back(file);
        };
        MarkdownReader(const std::string& filePath) : file(filePath) {};
        void read();
        void addFile(md::MarkdownFile newFile);
    };
}
