#include <stdio.h>
//Gọi biến ra trước "Có lẽ là do C thấy Float lớn hơn Int nên khi để Int trước thì Float phía sau bị error"
float division(int a,int b);
main() {
//    In ra hiệu 2 số
    printf("%i\n",minus(5,4));
//    In ra tổng 2 số
    printf("%i\n", plus(5,4));
//    in ra kết quả phép nhân 2 số
    printf("%i\n", multiply(4,2));
//    in ra kết quá phép chia 2 số
    printf("%.2f\n", division(3,2));
    return 0;
}
//    hàm của hiệu 2 số
int minus(int a, int b){
    return a-b;
}
//Hàm của tổng 2 số
int plus(int a, int b){
    return a+b;
}
//Hàm của phép nhân 2 số
int  multiply(int a,int b){
    return a*b;
}
//Hàm của phép chia 2 số
float division(int a,int b){
    return (float) a/b;
}
//test