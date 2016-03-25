#include <iostream>

using namespace std;

bool isPalindrome(string str){

    int left=0;
    int right=str.size()-1;

    while(left<right){

        if(!isalnum(str[left])){
            left++;
            continue;
        }

        if(!isalnum(str[right])){
            right--;
            continue;
        }

        if(tolower(str[left])==tolower(str[right])){
            left++;
            right--;
        }
        else {
            return false;
        }
    }

    return true;

}


int main() {
    cout << "Hello, World!" << endl;

    cout<<"\n";

    string str="abc __d c ba";

    bool ret=isPalindrome(str);

    if(ret) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}