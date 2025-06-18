/*
You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. Your task is to transform this absolute path into its simplified canonical path.

The rules of a Unix-style file system are as follows:

A single period '.' represents the current directory.
A double period '..' represents the previous/parent directory.
Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.
Any sequence of periods that does not match the rules above should be treated as a valid directory or file name. For example, '...' and '....' are valid directory or file names.
The simplified canonical path should follow these rules:

The path must start with a single slash '/'.
Directories within the path must be separated by exactly one slash '/'.
The path must not end with a slash '/', unless it is the root directory.
The path must not have any single or double periods ('.' and '..') used to denote current or parent directories.
Return the simplified canonical path.
*/

string simplifyPath(string path) {
    vector<string> dir_stack;
    string temp;
    string result = "";
    int start = 1;
    for(int i = 1; i < path.length(); i++){
        start = i;
        while(path[i] != '/' && i < path.length()) {
            i++;
        }
        temp = path.substr(start, (i-start));
        if(temp.empty() || temp == ".") {
            continue;
        }
        if(temp == "..") {
            if(!dir_stack.empty()) {
                dir_stack.pop_back();
            }
            continue;
        }
        dir_stack.push_back(temp);
    }
    if(dir_stack.empty()) {
        return "/";
    }
    for(string dir: dir_stack) {
        result = result + "/" + dir;
    }
    return result;
}