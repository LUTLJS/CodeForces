#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int> typesOfFourCourses(4);
        for(int i=0;i<4;i++)scanf("%d",&typesOfFourCourses[i]);
        vector<vector<int>> costOfEachTypeOfDish(4);
        for(int i=0;i<4;i++){
            costOfEachTypeOfDish[i].resize(typeOfFourCourses[i]);
            for(int j=0;j<typesOfFourCourses[i];j++){
                scanf("%d",&costOfEachTypeOfDish[i][j]);
            }
        }
        // for storing the all groups of relations
        // there are three groups of relations here: 1-2,2-3,3-4
        /*
          the first sub-array is dontGoWell[i], 
          
          dontGoWell[i][j][k]: i for which group you want to use, it's either 1-2, or 2-3 or 3-4
                               j for the number of dish from 2,3,4 that doesn't go well with k from 1,2,3, respectively.
                               k for the number of dish from 1,2,3 that doesn't go well with j from 2,3,4, respectively.
          So, if I want to find out which dish from course 1 doesn't go well with dish from course 2, then i would be 0. Similarly, i==1 if 2-3, i==2 if 3-4
          Then, determine the value of j, which records the number of dish from course 2,3 and 4. That means if dish 5 from course 2 goes well with all dishes
          from 1, then dontGoWell[i][5].size()==0. Otherwise, there will be elements that are not compatible with dish 5 from course 2.
          It's a graph. There are 3 graphs in this case.
          Graph 1: 1-2
          Graph 2: 2-3
          Graph 3: 3-4
        */
        vector<vector<vector<int>>> dontGoWell(3);
        for(int i=0;i<3;i++){
            // adjust the size of dontGoWell to be the size of array of second, third and fourth courses
            dontGoWell[i].resize(typesOfFourCourse[i+1]);
            int m;scanf("%d",&m);
            // recording all these non-compatible pairs of dishes.
            /*
            For 1-2, there are m1 pairs
            for 2-3, there are m2 pairs
            for 3-4, there are m3 pairs
            */
            for(int j=0;j<m;j++){
                /*
                x would be the number of first course, second and third respectively.
                */
                int x,y;scanf("%d %d",x,y);
                x--;y--;
                // x is the type of first, second and third course.
                // y is the number of second, third and fourth course.
                dontGoWell[i][y].push_back(x);
            }
        }
        /*
        dp[i][j]: i would be the course number, i==0 means for first course, i==1 means second course and so on
                  j would be the cost for each type of dish from course i
        */
        vector<vector<int>> dp(4);
        /*
        Initially, for the first course,the cost would be the same as the original cost of each type of dish from course 1.
        For dp[0+1], which stands for course 2, there are p=typesOfFourseCourses[0+1] cost obviously, namely there are p elements in vector dp[1].
        We can store p elements int dp[1]. So we resize it to make it fit for storing all elements of cost from course 2.
        */
        dp[0]=costOfEachTypeOfDish[0];
        for(int i=0;i<3;i++){
             
                dp[i+1].resize(typesOfFourCourses[i+1]);
                // could be used for storing elements with the same value
                multiset<int> s;
                for(int j=0;j<typesOfFourCourses[i];j++){
                        /*
                        i==0, the number of types of dishes from course 1
                        */
                        s.insert(dp[i][j]);
                }
                for(int j=0;j<typesOfFourCourse[i+1];j++){
                        for(auto k: dontGoWell[i][j]){
                                s.erase(s.find(dp[i][k]));
                        }
                        if(s.empty()){
                                dp[i+1][j]=int(4e8+43);              
                        }else 
                }
        }
}
