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

    public:
        MarkdownReader(const md::MarkdownFile& file) : file(file) {};
        MarkdownReader(const std::string& filePath) : file(filePath) {};
        void read();
    };
}
