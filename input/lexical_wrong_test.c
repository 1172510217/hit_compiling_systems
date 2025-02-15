/*
* 创建者：张景润
* 描述：这是一个针对词法分析的错误测试
*/

// 非法字符测试
int a = 1@; // 非法字符测试
char c = '张'; // 非法的字符常量

// 错误常数测试
int b = 08; // 错误的8进制常数
int c = 0x12h; // 错误的16进制数
float d = -1E; // 错误的科学计数法
float e = .1e-1a; // 错误的科学计数法
float f = .; // 错误的浮点数定义

// 封闭性测试
char c = '\n; // 字符常量未封闭
char * c = "测试\n\t\r\0; // 字符串常量未封闭
/*
* 多行注释未封闭
*