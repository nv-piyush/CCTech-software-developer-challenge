#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;

    vector<vector<pair<float, float>>> b(n), visit;

    pair<float, float> s;
    float x,y,x1,x2,y1,y2,len=0,slope=0;

    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;;
        b[i].push_back(make_pair(x1,y1));
        b[i].push_back(make_pair(x2,y2));
    }
     

    cin>>x>>y;
    s=make_pair(x,y);

    /*if(x1>s.first && x2>s.first){
        len=(abs(y1-y2)+abs(x1-x2));
    }*/

    for(int i=0;i<n;i++){
        if(b[i][0].first < s.first && b[i][1].first > s.first){   //x1<s.first && x2>s.first
            if(b[i][0].second < s.second && b[i][1].second < s.second){ //y1<s.second && y2<s.second
                len+=abs(b[i][0].first-b[i][1].first);
            }
        }
        else if(b[i][0].first > s.first && b[i][1].first > s.first)
        {
            //slope=abs(b[i][1].first-s.first)/abs(b[i][1].second-s.second);
            float a= s.second - b[0][1].second;
            float c= b[0][1].first - s.first;
            float d= a*(b[0][1].first) +c*(b[0][1].second); //Equation of line

            len+=(abs(b[i][0].second-b[i][1].second)+abs(b[i][0].first-b[i][1].first));
            //cout<<len<<endl;
        }
        else
        {
            
        }
        
    }
    cout<<len<<endl;
    
    /*


    float ymin;
    for(int i=0;i<4;i++){
        if(b[i].first > s.first){
            visit.push_back(make_pair(b[i].first,b[i].second));
        }

        if(b[i].first > s.first){
            visit.push_back(make_pair(b[i].first,b[i].second));
        }

        if(b[i].first > s.first){
            visit.push_back(make_pair(b[i].first,b[i].second));
        }
    }*/
    /*for(int i=0;i<n;i++){
        cout << b[i].first << " "<< b[i].second << endl; 
    }
    cout<<s.first<<" "<<s.second<<endl;*/


    return 0;
}
