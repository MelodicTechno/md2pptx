#pragma once

#include "maddy/parser.h"
#include <string>
#include <regex>

// i want to name the namespace as page but i would cause trouble
namespace maddy
{
    class PageParser : public LineParser
    {
    private:
        int pageNo;
    public:
        PageParser() : pageNo(1) {}
        void Parse(std::string &line) override
        {
            // new page with +++
            static const std::regex re(R"(^\s*+++\s*$)", std::regex_constants::ECMAScript);
            // <page number="pageNo"\>
            std::string replacement = "<page number=\"" + std::to_string(pageNo) + "\">";

            line = std::regex_replace(line, re, replacement);
            pageNo++;
        }
    };
}