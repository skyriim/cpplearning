# cpplearning how to run it by vscode:
1. cli：g++ main.cpp src/Gun.cpp src/Soldier.cpp -Iinclude -o main_exe

2. cmake：F5 调用cmake tools

    camke tools 是 vscode 中的一个插件，顾明思意，它和cmake有关，他是vscode中编译工程的工具。
    linux中使用cmake编译工程的一般过程:
    在Linux中，一般的构建工程是直接使用cmake,通过cmake调用cmakelist.txt文件，生成makefile文件（Generator），然后通过make命令调用makefile(generator)进行build,生成库文件、可执行文件，如果需要将库文件和头文件安装到特定目录（需要在cmakelist.txt中配置目标以及安装路径）可以执行install命令。

    vscode and cmake:
    在vscode中没有直接使用cmake,而是在cmake之上再构建了一个工具，也就是cmake tools,再使用cmake tools之前需要在vscode中指定一个kits(套件)， kit 代表toolchain: A set of compilers, linkers, or other tools that will be used to build a project.
    首先kit（kit 有配置文件）确定了toolchain，并且kit会生成一个工具链文件，这个工具链文件指导cmake tools(应该是cmake tools读取工具链文件)调用cmake,选择合适generator(在Ubuntu中一般是makefile),进行configuration即根据cmakelist.txt生成makefile。最后build即根据makefile生成库文件、可执行文件的过程。