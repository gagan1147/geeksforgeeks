#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int main(int argc, char const *argv[])
{
    fstream new_file;

    new_file.open("temp2.txt",ios::in);
    int max_len = 0;
    if(new_file.is_open()){
        string tp;
        auto start = high_resolution_clock::now();

        while(getline(new_file,tp)){
            // cout<<tp<<endl;
            max_len = max_len>tp.length()?max_len:tp.length();
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    
    }
    
    new_file.close();
    cout<<max_len<<endl;
    return 0;
}
