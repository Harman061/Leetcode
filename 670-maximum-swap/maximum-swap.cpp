class Solution {
public:
    int maximumSwap(int num) {

        string num_str_sorted = to_string(num), num_str = to_string(num);

        sort(num_str_sorted.begin(), num_str_sorted.end(), greater<int>());

        for(int i=0; i<num_str_sorted.size(); i++){

            if(num_str_sorted[i] != num_str[i]){
                for(int j=num_str.size()-1; j>-1; j--){

                    if(num_str_sorted[i] == num_str[j]){
                        char temp = num_str[i];
                        num_str[i] = num_str_sorted[i];
                        num_str[j] = temp;
                        break;
                    }
                }
                break;
            }
        }

        return stoi(num_str);
    }
};