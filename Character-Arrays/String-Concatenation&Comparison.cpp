#include<iostream>
#include<cstring>
using namespace std;
bool compare(char a[],char b[]){
    int i=0,j=0;
    int lena=strlen(a);
    int lenb=strlen(b);
    while(i<lena and j<lenb){
        if(a[i]!=b[j])return false;
        i++,j++;
    }
    if(a[i]!='\0' || b[i]!='\0')
        return false;
    return true;
}
void concat(char a[],char b[]){
    int i=strlen(a);
    int lenb=strlen(b);
    for(int j=0;j<=lenb;j++){
        a[i]=b[j];
        i++;
    }
}
int main(){
    //Assumption: a[] can take input of at max 1000 characteres only
    char a[2000];
    char b[1000];
    cin.getline(a,1000);
    cin.getline(b,1000);
    cout<<"Before Concatenation. a:"<<a<<endl;
    cout<<"Before Concatenation b:"<<b<<endl;
    // concat(a,b);
    // strcat(a,b);//it will append string b to string a
    cout<<"After Concatenation a:"<<a<<endl;
    cout<<"After Concatenation b:"<<b<<endl;

    if(compare(a,b)==true){
        cout<<"Match"<<endl;
    }else{
        cout<<"Not Match"<<endl;
    }
    if(strcmp(a,b)==0 ){//strcmp return 0 if match 
        cout<<"Match"<<endl;
    }else{//return 1 if not match
        cout<<"Not Match"<<endl;
    }
     


}