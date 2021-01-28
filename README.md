repo for [this issue](https://github.com/embree/embree/issues/315)

OS: Windows
Embree package version: 3.11

```sh
$ mkdir build
$ cd build
$ cmake -Dembree_DIR="C:/Program Files/Intel/Embree3" ..
$ cmake --build .
$ ./Debug/myexe.exe
```
