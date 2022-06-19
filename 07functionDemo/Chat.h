#ifndef CHAT_H
#define CHAT_H
#include <iostream>
#include <cmath>

using namespace std;
/**
 * 跟某人聊天    - 负责字符串的拼接（聊天格式）
 * @param toName    聊天对象的名称
 * @param content   聊天的内容
 * @return          按某规定的格式拼接聊天信息后的字符串
 */
string chatTo(const string&, const string&);

string chatFrom(const string&, const string&);


string chatTo(const string& toName, const string& content)
{
    string msg = "※ 你悄悄地对 [" + toName + "] 说：" + content;
    return msg;
}

string chatFrom(const string& froName, const string& content)
{
    string msg = "※ [" + froName + "] 悄悄地对你说：" + content;
    return msg;
}

#endif // CHAT_H
