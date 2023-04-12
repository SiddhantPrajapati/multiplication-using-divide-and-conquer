//Multiply using divide and conquer method
#include<stdio.h>
int conquer(int w, int x, int y, int z);

int conquer(int w, int x, int y, int z)
{
    int p,q,r,ans;
    p=w*y;
    q=x*z;
    r=(w+x)*(y+z);
    ans=10000*p + 100*(r-p-q) + q;
    return ans;
}
int main(){
    int a,b,w,x,y,z,ans;
    printf("Enter first no;");
    scanf("%d",&a);
    printf("Enter second no;");
    scanf("%d",&b);
    if(a<10000 && b<10000){
        w = a / 100;
        x = a % 100;
        y = b / 100;
        z = b % 100;
        ans = conquer(w, x, y, z);
        printf("Ans = %d",ans);
    }
    else
        printf("Enter valid number");

}
