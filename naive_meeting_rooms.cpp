#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMeetingRooms(vector<pair<int,int>>& meetings) {
    int n = meetings.size();
    
    if (n == 0) return 0;
    
    vector<int> start(n), end(n);
    
    for (int i = 0; i < n; i++) {
        start[i] = meetings[i].first;
        end[i]   = meetings[i].second;
    }
    
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    
    int i = 0;
    int j = 0;
    int current = 0;
    int maxRooms = 0;
    
    while (i < n) {
        if (start[i] < end[j]) {
            current++;
            maxRooms = max(maxRooms, current);
            i++;
        } else {
            current--;
            j++;
        }
    }
    
    return maxRooms;
}

void printMeetings(vector<pair<int,int>>& meetings) {
    cout << "Meeting Schedule:" << endl;
    for (int i = 0; i < meetings.size(); i++) {
        int start = meetings[i].first;
        int end = meetings[i].second;
        
        cout << "  Meeting " << (i + 1) << ": ";
        cout << (start / 100) << ":" 
             << (start % 100 < 10 ? "0" : "") << (start % 100);
        cout << " - ";
        cout << (end / 100) << ":" 
             << (end % 100 < 10 ? "0" : "") << (end % 100);
        cout << endl;
    }
}

int main() {
    cout << "=== Meeting Rooms Problem ===" << endl << endl;
    
    vector<pair<int,int>> meetings1 = {
        {900, 910}, {940, 1200}, {950, 1120},
        {1100, 1130}, {1500, 1900}, {1800, 2000}
    };
    
    cout << "Test Case 1:" << endl;
    printMeetings(meetings1);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings1) << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    vector<pair<int,int>> meetings2 = {
        {900, 930}, {1000, 1030}, {1100, 1130}
    };
    
    cout << "Test Case 2 (No overlap):" << endl;
    printMeetings(meetings2);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings2) << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    vector<pair<int,int>> meetings3 = {
        {900, 1200}, {930, 1130}, {1000, 1100}, {1030, 1230}
    };
    
    cout << "Test Case 3 (All overlap):" << endl;
    printMeetings(meetings3);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings3) << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    vector<pair<int,int>> meetings4 = {
        {900, 1000}, {1000, 1100}, {1100, 1200}
    };
    
    cout << "Test Case 4 (Back-to-back):" << endl;
    printMeetings(meetings4);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings4) << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    vector<pair<int,int>> meetings5 = {
        {900, 1000}
    };
    
    cout << "Test Case 5 (Single meeting):" << endl;
    printMeetings(meetings5);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings5) << endl;
    
    cout << "\n" << string(50, '-') << "\n" << endl;
    vector<pair<int,int>> meetings6 = {
        {830, 900}, {900, 930}, {915, 945},
        {930, 1000}, {1000, 1030}, {1015, 1045}
    };
    
    cout << "Test Case 6 (Complex schedule):" << endl;
    printMeetings(meetings6);
    cout << "Minimum rooms required: " << minMeetingRooms(meetings6) << endl;
    
    return 0;
}