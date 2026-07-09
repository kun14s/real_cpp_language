<h1>真正的C++语言</h1>
<h1>Real C++ Language</h1>

<h2>中文版 - Chinese</h2>
- 这是一个由C/c混淆的C++方言，由宏构成（见real_cpp_lang.h）
- 编译方法（需要C++编译器）：
```bash
g++ "-O3 -std=c++11" real_cpp_lang.h <your_file> -o <your_EXE>" -static"
# 双引号内的指令自选
```
- 示例
见pi.cpp，real_cpp.exe是pi.cpp编译后的EXE文件

<h2>英文版 - English</h2>
- This is a C++ dialect that obfuscates C/C++ using macros (see `real_cpp_lang.h`).
- Compilation (requires a C++ compiler):
  ```bash
  g++ "-O3 -std=c++11" real_cpp_lang.h <your_file> -o <your_EXE>" -static"
  # The options inside the double quotes are optional.
  ```
- Example: See `pi.cpp`; `real_cpp.exe` is the EXE file compiled from `pi.cpp`.
