// Fundamental Datatypes
//  data types are used to define the type of data that a variable can hold. They specify the size and format of the data to be stored in memory, and they determine the operations that can be performed on the data.

// Integer Types:

// Integers are used to represent whole numbers.
// Examples of integer types include int, short, long, and long long.
// Each integer type has a different size and range, depending on the compiler and system architecture.
// Examples:

// int age = 30;

// short distance = 1000;

// long population = 1000000;

// long long largeNumber = 9999999999;



// Floating-Point Types:

// Floating-point types are used to represent real numbers with decimal points.
// Examples of floating-point types include float, double, and long double.
// Precision and range increase with the type (float < double < long double).
// Examples:

// float weight = 65.5;

// double pi = 3.14159;

// long double largeDecimal = 123456.7890123456789;

// Character Types:

// Characters are used to represent individual characters such as letters, digits, and symbols.
// The char type is used to represent characters.
// Characters can be specified using ASCII values or character constants enclosed in single quotes.
// Examples:

// char grade = 'A';

// char symbol = '$';

// char newline = '\n'; // Escape sequence for newline character

// Void Type:



// The void type indicates the absence of type.

// It is commonly used in function declarations to specify that a function does not return any value.

// Examples:

// void greet() {

//  printf("Hello, world!\n");

// }

// Boolean Type:

// Boolean type represents true or false values.
// It's defined using stdbool.h header file.
// bool is the type, and true and false are the constants.
// Examples:

// bool isRaining = true;

// bool hasPassedExam = false;


// Example: 

 

//   Int age =20;

// So what happens at the memory level when we write the above code?

// The compiler allocates memory space for the variable age based on its data type, which is an integer (int).
// For an int variable, typically 4 bytes (32 bits) of memory are allocated.
// The = 20 part initializes the variable age with the value 20. if it is not initialised, garbage value will be given.
// At this stage, the value 20 is stored in the memory location reserved for the variable age.
// The variable age is associated with a specific memory address, which is the location in RAM where its value is stored.
// This memory address can be accessed using the address-of operator &, for example: &age    
// Variables 

// a variable is a named memory location used to store data. It's called a "variable" because the data stored in it can vary or change during the execution of the program.

// Rules for naming a variable:

// Validity: Variable names must be valid identifiers, which means they must start with a letter (uppercase or lowercase) or an underscore (_). They cannot start with a digit.
// Characters: After the first character, variable names can contain letters, digits, or underscores.
// Case Sensitivity: C is case-sensitive, so uppercase and lowercase letters are treated as distinct. For example, count, Count, and COUNT are considered different variables.
// Reserved Keywords: Variable names cannot be the same as C keywords or reserved words. For example, you cannot name a variable int, while, for, if, etc.
// Length Limitation: The length of a variable name is limited, typically to 31 characters. However, only the first 31 characters are significant. That means myVariable and myVariable12345678901234567890 are treated as the same variable.
// Meaningful Names: It's a good practice to choose variable names that are meaningful and descriptive of their purpose. This enhances code readability and maintainability. 