// https://youtu.be/wJV-5_xk-10?t=267

#include "Adapter.h"
#include "betterParser.h"

int main() {
    betterParser *betterParserPtr = new betterParser;
    Iparser *adapter = new Adapter(betterParserPtr);
    adapter->parser();
    adapter->parse();
    return 0;
}
