//Question Link -   https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#

// Required Function

char* reverse(char *S, int len)
{
    stack<char>s;
    for(int i=0; i<=len-1; i++)
    {
    s.push(S[i]);
    }
    for(int i=0; i<=len-1; i++)
    {
    S[i]=s.top();
    s.pop();
    }
    return S;
}