#include<iostream>
using namespace std;
int n,i,j,ans;
char s[5][5];
int c_put(int n,int m)
{
    for(i=n-1;i>=0;i--)//���� ��ǰѰ��
    {
        if(s[i][m]=='O')//����еﱤ�������ͻ
            return 0;
        if(s[i][m]=='X')//����������ﱤ֮ǰ������ǽ�� ����Է� ֱ������ѭ��
            break;
    }
    for(j=m-1;j>=0;j--)//���� ��ǰѰ��
    {
        if(s[n][j]=='O')//����еﱤ�������ͻ
            return 0;
        if(s[n][j]=='X')//����������ﱤ֮ǰ������ǽ�� ����Է� ֱ������ѭ��
            break;
    }
    return 1;
}
 
void dfs(int k,int num)
{
    int x,y;
    if(k==n*n)//������������һ��
    {
        if(num>ans)//��ô�ȽϷ��ø���
            ans=num;
        return ;//����
    }
    else
    {
        x=k/n;//����
        y=k%n;//����
        //�����Ԫ����Է���
        if(s[x][y]=='.'&&c_put(x,y))//�ж��Ƿ�Ϊ�ﱤ �Ƿ������ͻ
        {
            s[x][y]='O';//��ֹ�ﱤ,���ұ��
            dfs(k+1,num+1);
            s[x][y]='.';
        }
        //�����Ԫ�񲻿��Է���
        dfs(k+1,num);//��������¼���Ѱ��;
    }
}
int main()
{
    while(cin>>n&&n)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>s[i][j];
        }
        dfs(0,0);
        cout<<ans<<endl;
    }
}

