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
}
