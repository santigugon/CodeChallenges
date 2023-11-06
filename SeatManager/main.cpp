#include <iostream>
#include <queue>

class SeatManager {
public:
std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    SeatManager(int n) {
        for (int i=1;i<=n;i++){
            minHeap.push(i);
        }
    }

    int reserve() {
        int elUlt= minHeap.top();
        this->minHeap.pop();
        return elUlt;
    }

    void unreserve(int seatNumber) {
        this->minHeap.push(seatNumber);
    }
};

