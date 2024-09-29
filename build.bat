cmake -S . -B build/ -G "Visual Studio 17 2022" -A x64 -DCMAKE_BUILD_TYPE=Release
cmake --build build/ --config Release
.\build\Release\MarkdownToPPTX.exe