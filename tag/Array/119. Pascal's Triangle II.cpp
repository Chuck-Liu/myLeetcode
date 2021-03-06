class Solution {
public:
    vector<int> getRow(int rowIndex){
    	rowIndex++;
    	vector<int> ret(rowIndex, 0);
    	ret[0] = 1;
    	for(int i = 1; i < rowIndex; i++){
    		for(int j = i; j >= 1; j--){
    			ret[j] += ret[j - 1];
    		}
    	}
    	return ret;
    }

};