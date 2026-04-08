//
// Created by ray on 9/14/23.
//
#include "Document.h"

Document::Document(const std::vector<std::string>& lines) : lines(lines) {}

const std::vector<std::string>& Document::getLines() const {
    return lines;
}