#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;
    printf("Input row n：");
    scanf("%d",&n);
    for(i=0;i<100;i++)                                //初始化数组
    {
        for(j=0;j<100;j++)
            a[i][j]=0;
    }
    for(i=0;i<n;i++)                                  //使数组的第一列都为1
        a[i][0]=1;
    for(i=1;i<n;i++)                                  //第i行j列元素等于第i-1行j列和第i-1行j-1列元素的和,a[13][13]=a14,14=a13,13+(a13,14)=1+0
        for(j=1;j<=i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<n;i++)                                  //输出杨辉三角形
    {
        for(j=0;j<=i;j++)
            printf("%5.0d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
