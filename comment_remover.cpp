#include<bits/stdc++.h>
using namespace std;
class Comment_Remover{
    public:
        int del = 0;
        bool m_comment=false;
        bool s_comment=false;

        string remove_comments(string str){
            int n=str.length();

            string res="";

            for (int i=0;i<n;i++){
                if(str[i]=='/' && str[i+1]=='/'){
                    m_comment=true;
                    del++;
                    break;
                }
                else if(str[i]=='/' && str[i+1]=='*'){
                    m_comment=true;
                    del++;
                    i++;
                }
                else if(str[i]== '*' && str[i+1]=='/'){
                    m_comment=false;
                    i++;
                    s_comment=false;
                }
                else if(s_comment==false && m_comment==false){
                    res+=str[i];
                }
            }
        }


};
int main(){
    string file_name;
    cout << "Enter the file name: ";
    cin >> file_name;
    ofstream file(file_name,ios::app);
    cin.ignore();

    if(file.is_open()){
        cout<<"wrtie to the file to quit type('quit'): "<<endl;
        string line;

        while(true){
            getline(cin,line);

            if (line=="quit"){
                break;
                file.close();
            }

            file<<line<<endl;
        }

    }
    ifstream file_read(file_name);
    Comment_Remover cm;
    if(file_read.is_open()){
        string line;
        while(getline(file_read,line)){
           string comment_removed_lines=cm.remove_comments(line);
           file<<comment_removed_lines<<endl;

        }
        
    }

    

    
}