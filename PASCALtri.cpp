#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;
    printf("Input row n��");
    scanf("%d",&n);
    for(i=0;i<100;i++)                                //��ʼ������
    {
        for(j=0;j<100;j++)
            a[i][j]=0;
    }
    for(i=0;i<n;i++)                                  //ʹ����ĵ�һ�ж�Ϊ1
        a[i][0]=1;
    for(i=1;i<n;i++)                                  //��i��j��Ԫ�ص��ڵ�i-1��j�к͵�i-1��j-1��Ԫ�صĺ�,a[13][13]=a14,14=a13,13+(a13,14)=1+0
        for(j=1;j<=i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<n;i++)                                  //������������
    {
        for(j=0;j<=i;j++)
            printf("%5.0d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
