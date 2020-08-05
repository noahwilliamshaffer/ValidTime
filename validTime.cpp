bool validTime(std::string time) {
    string number = "";
    int numb = 0;
    for (int i = 0; i < time.size(); i++){
        if(isdigit(time[i])){
            number.push_back(time[i]);
            
        }
    }
    std::cout << number << endl;
    
   
        numb = stoi(number);
    
    if( numb >= 2400 || numb < 0)
        return false;
        
    if(numb % 100 > 60)
        return false;
        
    return true;
}
