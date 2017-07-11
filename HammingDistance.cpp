class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> XBin = ConvertToBinary(x);
        vector<int> YBin = ConvertToBinary(y);
        int HamDis = 0;
        for(int i = 0; i < XBin.size() || i < YBin.size(); i++)
            if(XBin[i] != YBin[i])
                HamDis++;
        return HamDis;
    }
    vector<int> ConvertToBinary(int integer)
    {
        vector<int> Binary;
        for(; integer > 0; integer /= 2)
        {
            if(integer % 2 == 0)
                Binary.insert(Binary.begin(), 1);
            else
                Binary.insert(Binary.begin(), 0); 
        }
        return Binary;
    }
};