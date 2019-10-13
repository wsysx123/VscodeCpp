# Vscode下调试C++代码的模板程序

- 如果不需要在中文路径下调试，launch.json中"preLaunchTask": "Build"
- 为了实现在中文路径下调试，自动复制代码到E:\VscodeTemp\ 路径可在配置文件修改

## 未解决的问题
- 如果单步调试进行到最后一步，会提示
  - 无法打开“crtexe.c”: 无法读取文件(Error: 找不到文件(\home\ruben\mingw-w64\src\mingw-w64\mingw-w64-crt\crt\crtexe.c))。