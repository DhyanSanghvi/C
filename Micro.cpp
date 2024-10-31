#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#define MAX 100
#include<fstream>
using namespace std;

// Char Stack**********************************************************************************************************************
class charStack {
private:
    int top;
    char items[MAX];
public:
    charStack() {
        top = -1;
    }
    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }
    void push(char ele) {
        if (isFull()) {
            cout << "\nStack Overflow!!";
            return;
        }
        items[++top] = ele;
    }
    char pop() {
        if (isEmpty()) {
            cout << "\nThere is Nothing to pop";
            return '\0';
        }
        return items[top--];
    }
    char peek() {
        if (isEmpty()) {
            cout << "Nothing to peek";
            return '\0';
        }
        return items[top];
    }
};

// Int Stack***************************************************************************************************************************
class IntStack {
private:
    int top;
    int items[MAX];
public:
    IntStack() {
        top = -1;
    }
    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }
    void push(int ele) {
        if (isFull()) {
            cout << "\nStack Overflow!!";
            return;
        }
        items[++top] = ele;
    }
    int pop() {
        if (isEmpty()) {
            cout << "\nThere is Nothing to pop";
            return 0;
        }
        return items[top--];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Nothing to peek";
            return 0;
        }
        return items[top];
    }
};

// TO Postfix*************************************************************************************************************************
class CONVERT : public charStack {
private:
    int getType(char symbol) {
        if (isalpha(symbol))
            return 1; // operand
        switch (symbol) {
        case '(': return 2;
        case ')': return 3;
        case '+': // OR
        case '-': // NOR
        case '*': // AND
        case '/': // NAND
        case '%': // EXOR
        case '^': // EXNOR
        case '!': // NOT
            return 4; // operator
        default:
            return -1;
        }
    }
    int getPrec(char op) {
        switch (op) {
        case '+': return 1; // OR
        case '-': return 1; // NOR
        case '*': return 2; // AND
        case '/': return 2; // NAND
        case '%': return 3; // EXOR
        case '^': return 3; // EXNOR
        case '!': return 4; // NOT
        case '(': return 0;
        default:
            return -1;
        }
    }

public:
    void infixToPostfix(char infix[], char postfix[]) {
        int i = 0, p = 0;
        char symbol, poppedElement;
        while (infix[i] != '\0') {
            symbol = infix[i];
            int type = getType(symbol);
            switch (type) {
            case 2: // Left parenthesis
                push(symbol);
                break;
            case 3: // Right parenthesis
                while ((poppedElement = pop()) != '(')
                    postfix[p++] = poppedElement;
                break;
            case 1: // Operand
                postfix[p++] = symbol;
                break;
            case 4: { // Operator
                int prec = getPrec(symbol);
                while (!isEmpty() && prec <= getPrec(peek()))
                    postfix[p++] = pop();
                push(symbol);
                break;
            }
            }
            i++;
        }
        while (!isEmpty())
            postfix[p++] = pop();
        postfix[p] = '\0';
    }
};

// Operations' class
class operations {
public:
    int AND(int a, int b) { return a & b; }
    int OR(int a, int b) { return a | b; }
    int NOT(int a) { return !a; }
    int NAND(int a, int b) { return !(a & b); }
    int NOR(int a, int b) { return !(a | b); }
    int EXOR(int a, int b) { return a ^ b; }
    int EXNOR(int a, int b) { return !(a ^ b); }
};

// POSTFIX EVALUATION
class Evaluation : public operations, public CONVERT, public IntStack {
public:
    int evaluatePostfix(char expression[], map<char, int>& varMap) {
        int len = 0;
        while (expression[len] != '\0') 
		len++;
        for (int i = 0; i < len; i++) {
            if (isblank(expression[i])) continue;
            else if (isalpha(expression[i])) {
                IntStack::push(varMap[expression[i]]);
            } else {
                int num1 = IntStack::pop();
                int num2 = (expression[i] != '!') ? IntStack::pop() : 0;
                switch (expression[i]) {
                case '+': IntStack::push(OR(num1, num2)); break;
                case '-': IntStack::push(NOR(num1, num2)); break;
                case '*': IntStack::push(AND(num1, num2)); break;
                case '/': IntStack::push(NAND(num1, num2)); break;
                case '%': IntStack::push(EXOR(num1, num2)); break;
                case '^': IntStack::push(EXNOR(num1, num2)); break;
                case '!': IntStack::push(NOT(num1)); break;
                default: cout << "Unknown operator: " << expression[i] << endl;
                }
            }
        }
        return IntStack::pop();
    }
};

class RESULT : public Evaluation {
public:
    void calculate(char postfix[], const vector<char>& vars, int numVars) {
        ofstream fout;
        fout.open("MicroP.txt",ios::app);
		int numRows = pow(2, numVars);
        for (int i = 0; i < numRows; i++) {
            map<char, int> varMap;
            for (int j = 0; j < numVars; j++) {
                varMap[vars[j]] = (i >> (numVars - j - 1)) & 1;
            }
            fout << "|";
            for (int j = 0; j < numVars; j++) {
                fout << "   " << varMap[vars[j]] << "   |";
            }
            fout << "   " << evaluatePostfix(postfix, varMap) << "   |" << endl;
        }
    }

    void display(char postfix[], const vector<char>& vars) {
        ofstream fout;
        fout.open("MicroP.txt");
		int numVars = vars.size();
        fout << "Truth TABLE:" << endl;
        for (int i = 0; i < numVars; i++) {
            fout << "|   " << vars[i] << "   ";
        }
        fout << "|   Y   |" << endl;
        fout << setfill('-') << setw((numVars * 7) + 9) << "" << setfill(' ') << endl;
        calculate(postfix, vars, numVars);
    }
};

vector<char> extractVariables(const string& expr) {
    set<char> varSet;
    for (size_t i = 0; i < expr.length(); ++i) {
        if (isalpha(expr[i])) {
            varSet.insert(expr[i]);
        }
    }
    return vector<char>(varSet.begin(), varSet.end());
}

int main() {
	 ofstream fout;
    fout.open("MicroP.txt",ios::app);
	cout<<setw(100)<<"--------------------------Notes While Entering the Expression--------------------------";
	cout<<"\n1.Enter Space After Every Term.";
	cout<<"\nOPERATORS:\n1. + : OR\n2. * : AND\n3. - : NOR\n4. / : NAND\n5. % : EXOR\n6. ^ : EXNOR\n7. ! : NOT\n";
    while (true) {
        char Expr[MAX], postfix[MAX];
        cout << "\nEnter Expression (or type 'exit' to quit): ";
        cin.getline(Expr, MAX);

        if (string(Expr) == "exit") break; 

        // Extract variables from expression
        vector<char> variables = extractVariables(Expr);
        fout << "Variables detected: ";
        for (size_t i = 0; i < variables.size(); ++i) {  
            fout << variables[i] << " ";
        }
        fout << endl;

        CONVERT c;
        c.infixToPostfix(Expr, postfix);
        fout << "Postfix Expression: " << postfix << endl;

        RESULT r;
        r.display(postfix, variables);
        cout<<"\nExecuted Successfully !";
        cout<<"\nCheck The Output in the text file!";
    }
    return 0;
}

