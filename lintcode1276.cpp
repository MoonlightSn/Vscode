#include <cstdio>
int getSum(int a, int b) {
        int sum=a^b; //异或 计算不进位的和
        int carry=(a&b)<<1; //按位与 然后左移一位，计算进位
        while(carry)  { //进位不为零
            int tmp=carry; //计算进位与不进位的和是否再次进位
            carry=(sum&carry)<<1;
            sum=sum^tmp;
        }
        return sum;
    }
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",getSum(a,b));
    return 0;
}