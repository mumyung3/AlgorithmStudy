#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";

    // answer의 길이(개수)
    int answersize = number.size() - k; 
    int startidx = 0;
    for(int i=0;i<answersize; ++i){
        char maxint =number[startidx];
        int maxidx = startidx;
        for(int j =startidx ; j <= k + i ; ++j){
            if(maxint < number[j]){
                maxint = number[j];
                maxidx = j;
            }
        }
        startidx = maxidx +1;
        answer += maxint;
    }


    return answer;
}

int main(void) {

    return 0;
}