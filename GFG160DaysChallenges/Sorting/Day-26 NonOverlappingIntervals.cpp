// C++ program to minimum number of intervals required to
// be removed to make remaining intervals non-overlapping
// Using sorting by starting value

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minRemoval(vector<vector<int>>& intervals) {
  	int cnt = 0;
  
    // Sort by minimum starting point
    sort(intervals.begin(), intervals.end());

    int end = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++) {

        // If the current starting point is less than
        // the previous interval's ending point
        // (ie. there is an overlap)
        if (intervals[i][0] < end) {
          
            // Increase cnt and remove the interval
            // with the higher ending point
          	cnt++;
            end = min(intervals[i][1], end);
        }
      	
      	// Incase of no overlapping, this interval is 
      	// not removed and 'end' will be updated
        else
            end = intervals[i][1];
    }

    return cnt;
}

int main() {
    vector<vector<int> > intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << minRemoval(intervals) << endl;
}