#include "Adapter.h"
#include "betterParser.h"

int main() {
    betterParser *betterParserPtr = new betterParser;
    Iparser *adapter = new Adapter(betterParserPtr);
    adapter->parser();
    adapter->parse();
    return 0;
}
