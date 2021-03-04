# vscode-trie-cpp
Basic VSCode C++ runtime &amp; debugging demonstration on Windows

This VSCode workspace project intentionally injects a segmentation violation in order to have VSCode show its debugging prowess

0. If your Windows system doesn't have C++ libraries and compiler, install the MingW64 executables (for a bash shell) 
and then download the appropriate package for your system @ http://mingw-w64.org/doku.php/download
(Do not try to install Dev-C++ - it fails on all compiles)
1. Verify install of MicroSoft's VSCode or go install it @ https://code.visualstudio.com/download. 
Choose your application installation area if you have one and a new VSCode subdirectory (i.e. 'Projects').
2. Create any shell aliases pointing to the installed  Code.exe (i.e. for Windows)
3. Run VSCode in this directory and open trie.cpp
4. VSCode may prompt you to install a C++ plug-in - follow its instructions
5. You may have to show the launch panel in the top left of VSCode via View->Run. Be sure to choose 'Launch Trie Segvio' from the drop down
   This will show the debugger's call stack window in a bottom left VSCode panel (will show up as 'CALL STACK')
6. Run main.cpp via Run->Run Without Debugging
7. If you're prompted by VSCode to install the .Net Framework, then be sure to choose only the version it requires (may not be the latest)
8. During or after running trie.cpp, the DEBUG CONSOLE tab in the bottom window will display something like:
Program received signal SIGSEGV, Segmentation fault.
0x0000000000401626 in insert (word=..., kaboom=false) at trie.cpp:41
41			current->child[letter]->prefix_count++;

9. If you did not get the above exception results, you'll need to Google for resolutions to your issues before moving on
10. Run trie.cpp via  Run->Start Debugging
11. The debugger should stop at the segmentation violation in the main code window and show you the line of code causing the fault.
12. To show the debugger's call stack window, choose View->Run. Window will show up as CALL STACK. Any exception will stop debugging
at the top of the call stack (i.e. #0)

# NOTES
1. If you add more source code files to this VSCode workspace, you'll need to add a launch configuration for it in launch.json-reference
and add a new build task for it in tasks.json. VSCode (thru the command palette) can help you with those things.

2. I also tried CDT plugin with Eclipse using the Cygwin g++ compiler, which uses the same g++ from 2015.
There was no surprise in getting similar [Seg Vio] results to VSCode.


# Debugging Notes
A good article on basics of runing the VSCode debugger:
https://code.visualstudio.com/docs/cpp/config-mingw#_debug-helloworldcpp

https://github.com/microsoft/vscode-cpptools/issues/106
The above explains how to run basic GDB commands when the project is enabled for it. For example, use -exec bt on the debugConsole

GDB cheat sheet:
https://in-addr.nl/mirror/GDB%20Cheat%20Sheet.pdf

Configuring VSCode for C++ debugging:
https://code.visualstudio.com/docs/cpp/launch-json-reference
(If you need to add env variables or args, this is the place to do it)

### GitHub Codespaces
Follow these steps to open this sample in a Codespace:
1. Click the Code drop-down menu and select the **Open with Codespaces** option.
2. Select **+ New codespace** at the bottom on the pane.

For more info, check out the [GitHub documentation](https://docs.github.com/en/free-pro-team@latest/github/developing-online-with-codespaces/creating-a-codespace#creating-a-codespace).

## Contributing

This project welcomes contributions and suggestions. Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.microsoft.com.

When you submit a pull request, a CLA-bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., label, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## License

Copyright © Microsoft Corporation All rights reserved.<br />
Licensed under the MIT License. See LICENSE in the project root for license information.
