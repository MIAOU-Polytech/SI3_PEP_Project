#define opA *(&placeholder + 2)
#define opB *(&placeholder + 3)
#define cmd *(&placeholder + 4)
#define res *(&placeholder + 6)

int main() {
	int placeholder = 0;
	int ADD = 0;
	int SUB = 1;
	int MUL = 2;
	int LSL = 3;

	while (1) {
		if (cmd == ADD)
			res = opA + opB;
		if (cmd == SUB)
			res = opA - opB;
		if (cmd == MUL)
			res = opA * opB;
		if (cmd == LSL)
			res = opA << opB;
	}
}
