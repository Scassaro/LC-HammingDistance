class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> XBin = ConvertTobinary(x);
        vector<int> YBin = ConvertTobinary(y);
        int HamDis = 0;
        for(int i = 0; i < XBin.size() || i < YBin.size(); i++)
            if(XBin[i] != YBin[i])
                HamDis++;
        return HamDis;
    }
    vector<int> ConvertToBinary(int integer)
    {
        bool odd = false;
        vector Binary<int>;
        while(integer > 1)
        {
            if(integer % 2 = 0)
            {
                integer / 2;
                Binary.push_back(1)
            }
            else
            {
                odd = true;
                integer -= 1;
            }
        }
        if (odd)
            Binary.push_back(1);
        else
            Binary.push_back(0);
        return Binary;
    }
};