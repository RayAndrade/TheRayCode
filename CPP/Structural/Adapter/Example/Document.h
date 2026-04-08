//
// Created by ray on 9/14/23.
//

#ifndef EXAMPLE_DOCUMENT_H
#define EXAMPLE_DOCUMENT_H

#include <vector>
#include <string>

class Document {
public:
    Document(const std::vector<std::string>& lines);
    const std::vector<std::string>& getLines() const;
private:
    std::vector<std::string> lines;
};

#endif //EXAMPLE_DOCUMENT_H
