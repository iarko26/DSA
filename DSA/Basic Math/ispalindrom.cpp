bool ispal(string s){
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if(tolower(s[l])!=tolower(s[r])){
            return false;
        }
        if(!isalnum(s[l])){
            l++;
        }
            if(!isalnum(s[r])){
            r++;
        }
        else{
            l++;
            r--;
            }
    }
    return true;
    

    

}


int main(){
   bool res=ispal("ABBC");
   if(res==true){
       cout<<"Palindrome"<<endl;

   }
    else{
        cout<<"Not Palindrome"<<endl;
        
}
}