#include <iostream>
using namespace std;

int poly(int n, float *px, float *py, float x, float y)
{
  int c = 0;
  for (int i = 0,j = n-1; i < n; j = i++) {
    if ( ((py[i]>y) != (py[j]>y)) && (x < (px[j]-px[i]) * (y-py[i]) / (py[j]-py[i]) + px[i]) )
       c = !c;
  }
  return c;
}
int main() {
	int n;
    cin>>n;
    //array of x co-ordinates
    float *px=new float[n];
    //array of y co-ordinates
    float *py=new float[n];

    for(int i=0;i<n;i++){
        cin>>px[i]>>py[i];
    }
    float x,y;
    cin>>x>>y;
    int c=poly(n,px,py,x,y);

    if(c==1)    
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    
    return 0;
}
