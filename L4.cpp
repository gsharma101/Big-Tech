#include <bits\stdc++.h>
using namespace std;

int maxArea (vector<int>& heights){
        int length = heights.size();
        int maxArea = 0;
        int a,b,area;
        for(a = 0; a<=length-1; a++){
            for(b = a+1;b<=length; b++){
                int height = min(heights[a], heights[b]);
                int width = b - a;
                area = height * width;
                maxArea = max(maxArea, area);
            }
        }
        
        return maxArea;
}




int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int result;
    result = maxArea(height);
    cout<< result <<" is the max area";
}