//#include"Header3,3.h"
//float scanNum(char ch) {
//    int value;
//    value = ch;
//    return float(value - '0');
//}
//int isOperator(char ch) {
//    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
//        return 1;
//    return -1;
//}
//int isOperand(char ch) {
//    if (ch >= '0' && ch <= '9')
//        return 1;
//    return -1;
//}
//float operation(int a, int b, char op) {
//
//    if (op == '+')
//        return b + a;
//    else if (op == '-')
//        return b - a;
//    else if (op == '*')
//        return b * a;
//    else if (op == '/')
//        return b / a;
//    else if (op == '^')
//        return pow(b, a);
//    else
//        return INT_MIN;
//}