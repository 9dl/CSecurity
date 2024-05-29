#include <iostream>
#include <thread>


void AntiDebug() {
    std::string Blacklisted[] =
    {
        "processh",
        "debug",
        "debugger",
        "hacker",
        "inject",
        "dump",
        "dumper",
        "deobfs",
        "deobfuscator",
        "dnspy",
        "de4dot",
        "dbg",
        "string",
        "decrypt",
        "decryptor",
        "detect it easy",
        "die",
        "unpack",
        "unpacker",
        "http",
        "syclla",
    };

    while (true) {
        for (std::string debug : Blacklisted) {
            std::string task = "taskkill /FI \"IMAGENAME eq " + debug + "*\" /IM * /F /T >nul 2>&1";
            system(task.c_str());
        }
    }
}

int main()
{
    // Im not C++ Developer but create a Thread that runs the method "AntiDebug();" in Background
    AntiDebug();
}