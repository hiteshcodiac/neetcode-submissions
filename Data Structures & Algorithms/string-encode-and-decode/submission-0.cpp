class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_string;

        for (const string& s: strs) {
            encoded_string += s + "#" + "&" + "#";
        }

        return encoded_string;
    }

    vector<string> decode(string encoded_string) {

        vector<string> decoded_strs;
        string s;
        int len = encoded_string.size();
        
        for (int i=0; i < len - 2; ++i) {
            if (encoded_string[i] == '#' &&
                encoded_string[i+1] == '&' &&
                encoded_string[i+2] == '#') {
                decoded_strs.push_back(s);
                s = "";
                i += 2;
            }
            else {
                s += encoded_string[i];
            }
        }

        if (s != "") {
            decoded_strs.push_back(s + encoded_string[len - 2] + encoded_string[len - 1]);
        }

        return decoded_strs;
    }
};
