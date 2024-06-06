#import <string>
#import <vector>

using namespace std;

class Token {
    private:
        string text;
        int line;
        int column;
        string type;

    public:
        Token(int startLine, int startColumn, string tokenType, string tokenText) {
            text = tokenText;
            line = startLine;
            column = startColumn;
            type = tokenType;
        }

        string getType() { return type; }

        void setType(string tokenType) { type = tokenType; }

        string getText() { return text; }

        void setText(string tokenText) { text = tokenText;  }

        void appendText(char character) { text += character; }

        void appendText(string appendableText) { text += appendableText; }

        vector<int> getStartLocation() { return { line, column }; }
};