<html>
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <style>
    body {
      margin: 0;
      box-sizing: border-box;
    }

    /* CSS for header */
    .header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      background-color: white;
      height: 100px;
    }

    .logoimage {
      margin-left: 30px;
      max-width: 180px;
    }

    .nav-items {
      font-size: 25px;
      display: flex;
      justify-content: space-around;
      align-items: center;
      background-color: white;
      margin-right: 0px;
      margin-left: 750px;
      height: 100px;
    }

    .nav-items a {
      text-decoration: none;
      color: #000;
      padding: 35px 20px;
      display: inline-block;
      position: relative;
    }
    .nav-items a:hover {
      text-decoration: underline;
      font-size: 27px;
    }

    /* CSS for main body*/
    .heading {
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
      width: 100%;
      height: 520px;
      background: linear-gradient(to bottom, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.5) 100%), url("https://bbdniit.ac.in/wp-content/uploads/2020/09/banner-background-without-image-min.jpg");
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat;
      opacity: 0.95;
    }
    .clogo {
      width: 120px;
    }
    .heading h1 {
      font-family: sans-serif;
      font-size: 60px;
      color: #fff;
      font-weight: bold;
      margin: 0;
    }
    .heading p {
      font-size: 20px;
      color: white;
      text-transform: uppercase;
      margin: 20px;
      text-align: center;
      margin-left: 200px;
      margin-right: 200px;
    }
    
    .flex{
      display: flex;
      flex-direction: row;
    }
    .topics {
      overflow: scroll;
      width: 250px;
      height: 735px;
    }
    .link{
      background-color: #6d94a4;
      color: white;
      padding-top: 13px;
      padding-bottom: 13px;
      text-align: left;
      text-decoration: none;
      display: inline-block;
      font-size: 20px;
      transition-duration: 0.4s;
      cursor: pointer;
      width: 200px;
    }
    .link:hover{
      background-color: #ffffff;
      color: black;
    }
    .content {
      margin-left: 50px;
      overflow: scroll;
      height: 750px;
      width: 1500px;
    }
    .content h1 {
      font-size: 40px;
    }
    .content p {
      font-size: 25px;
    }
    /* CSS for footer */
    .footer {
      display: flex;
      justify-content: space-between;
      align-items: center;
      background-color: #302f49;
      padding: 4px 80px;
    }

    .websitename {
      color: #fff;
      font-size: 60px;
    }

    .bottom-links {
      display: flex;
      justify-content: space-around;
      align-items: center;
      padding: 40px 0;
    }

    .links {
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
      padding: 0 40px;
    }

    .links span {
      font-size: 20px;
      color: #fff;
      text-transform: uppercase;
      margin: 10px 0;
    }

    .links a {
      text-decoration: none;
      color: #a1a1a1;
      padding: 10px 20px;
    }
    .instasocial {
      max-width: 25px;
    }
    .linkedinsocial {
      max-width: 25px;
    }
    .twittersocial {
      max-width: 25px;
    }

        /* CSS for the dropdown */
.dropdown {
  position: relative;
  display: inline-block;
}

.dropbtn {
  background-color: white;
  color: #000;
  padding: 35px 20px;
  text-decoration: none;
  font-size: 25px;
  display: inline-block;
  position: relative;
  border: none;
  cursor: pointer;
}

.dropdown-content {
  display: none;
  position: absolute;
  background-color: white;
  min-width: 130px;
  box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.2);
  z-index: 1;
}

.dropdown-content a {
  color: #000;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
}

.dropdown-content a:hover {
  background-color: #f1f1f1;
}

.dropdown:hover .dropdown-content {
  display: block;
}

.dropdown:hover .dropbtn {
  background-color: #f1f1f1;
}
  </style>
</head>

<body>
  <header class="header">
    <a href="feeprojecthomepage.html" class="logo"> <img src="C:\Users\dipan\OneDrive\Documents\logowhite.jpg" class="logoimage"></a>
    <nav class="nav-items">
      <a href="feeprojecthomepage.html">Home</a>
      <div class="dropdown">
        <button class="dropbtn">Courses</button>
        <div class="dropdown-content">
          <a href="coursehtml.html">HTML</a>
          <a href="coursecss2.html">CSS</a>
          <a href="coursepython2.html">Python</a>
          <a href="coursejava.html">JavaScript</a>
          <a href="coursec.html">C</a>
          <a href="coursec++.html">C++</a>
        </div>
      </div>
      <a href="#ABOUT">About</a>
      <a href="loginpageproject.html">Login</a>
    </nav>
  </header>
  <main>
    <div class="heading">
        <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" class="clogo">
      <h1>
        C Programming
      </h1>
      <p>
        C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. C programming is an excellent language to learn to program for beginners.
        Our C tutorials will guide you to learn C programming one step at a time.
      </p>
    </div>
    <div class="flex">
    <p class="topics">
      <a href=#introduction class="link">C Introduction</a><br>
      <a href=#output class="link">C Outputs</a><br>
      <a href=#comments class="link">C Comments</a><br>
      <a href=#variables class="link">C Variables</a><br>
      <a href=#datatypes class="link">C Data Types</a><br>
      <a href=#constants class="link">C Constants</a><br>
      <a href=#operators class="link">C Operators</a><br>
      <a href=#ifelse class="link">C If Else</a><br>
      <a href=#while class="link">C While Loop</a><br>
      <a href=#for class="link">C For Loop</a><br>
      <a href=#for class="link">C Arrays</a><br>
      <a href=#for class="link">C Strings</a><br>
      <a href=#for class="link">C Input</a><br>
      <a href=#for class="link">C Functions</a><br>
      <a href=#for class="link">C Recursion</a><br>
      <a href=#for class="link">C Files</a><br>
      <a href=#for class="link">C Examples</a>
    </p>
    <div class="content">
      <h1 id="introduction">C Tutorial</h1>
      <p><b>Learn C</b><br>
        C is a general-purpose programming language, developed in 1972, and still quite popular.<br>
        C is very powerful; it has been used to develop operating systems, databases, applications, etc.</p>
        <P><b>Examples in Each Chapter</b><br>
          Our "Try it Yourself" editor makes it easy to learn C. You can edit code and view the result in your browser:</P>
          <p><b>Examples</b></p>
          <h2>#include < stdio.h ><br>
            int main() {<br>
              printf("Hello World!");<br>
              return 0;<br>
            }</h2>
            <P><b>What is C?</b><br>
              C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.<br>
              It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.<br>
              C is strongly associated with UNIX, as it was developed to write the UNIX operating system.</P>
              <P><b>Why Learn C?</b><br>
                It is one of the most popular programming language in the world<br>
                If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar<br>
                C is very fast, compared to other programming languages, like Java and Python<br>
                C is very versatile; it can be used in both applications and technologies</P>
                <p><b>Difference between C and C++</b><br>
                  C++ was developed as an extension of C, and both languages have almost the same syntax<br>
                  The main difference between C and C++ is that C++ support classes and objects, while C does not</p>
                  <P><b>Get Started With C</b><br>
                    To start using C, you need two things:<br>
                    A text editor, like Notepad, to write C code<br>
                    A compiler, like GCC, to translate the C code into a language that the computer will understand<br>
                    There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).</P>
                    <p><b>C Install IDE</b><br>
                      An IDE (Integrated Development Environment) is used to edit AND compile the code.<br>
                      Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C code.<br>
                      Note: Web-based IDE's can work as well, but functionality is limited.<br>
                      We will use Code::Blocks in our tutorial, which we believe is a good place to start.</p>
                      <p><b>C Quickstart</b><br>
                        Let's create our first C file.<br>
                        Open Codeblocks and go to File > New > Empty File.<br>
                        Write the following C code and save the file as myfirstprogram.c (File > Save File as):</p>
                        <h2>#include < stdio.h ><br>
                          int main() {<br>
                            printf("Hello World!");<br>
                            return 0;<br>
                          }</h2>
                          <p>Don't worry if you don't understand the code above - we will discuss it in detail in later chapters. For now, focus on how to run the code.</p>
                          <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-05 231021.png">
                          <P><b>Learning C At Elearnx</b><br>
                            When learning C at W3Schools.com, you can use our "Try it Yourself" tool, which shows both the code and the result. This will make it easier for you to understand every part as we move forward:</P>
                            <h2>#include < stdio.h ><br>

                              int main() {<br>
                                printf("Hello World!");<br>
                                return 0;<br>
                              }<br>
                              </h2>
                              <h1 id="output">C Output</h1>
                              <p><b>Output (Print Text)</b><br>
                                To output values or print text in C, you can use the printf() function:</p>
                                <h2>#include < stdio.h ><br>
                                  int main() {<br>
                                    printf("Hello World!");<br>
                                    return 0;<br>
                                  }</h2>
                                  <P>You can use as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:</P>
                                  <h2>#include < stdio.h ><br>
                                    int main() {<br>
                                      printf("Hello World!");<br>
                                      printf("I am learning C.");<br>
                                      return 0;<br>
                                    }</h2>
                                    <h1 id="comments">C Comments</h1>
                                    <p><b>Comments in C</b><br>
                                      Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.<br>
                                      Comments can be singled-lined or multi-lined.</p>
                                      <p><b>Single-line Comments</b>
                                        Single-line comments start with two forward slashes (//).<br>
                                        Any text between // and the end of the line is ignored by the compiler (will not be executed).<br>
                                        This example uses a single-line comment before a line of code:</p>
                                        <h2>// This is a comment<br>
                                          printf("Hello World!");</h2>
                                          <p><b>C Multi-line Comments</b><br>
                                            Multi-line comments start with /* and ends with */.<br>
                                            Any text between /* and */ will be ignored by the compiler:</p>
                                            <h2>/* The code below will print the words Hello World!<br>
                                              to the screen, and it is amazing */<br>
                                              printf("Hello World!");</h2>
                                              <h1 id="variables">C Variables</h1>
                                              <p>Variables are containers for storing data values, like numbers and characters.<br>
                                                In C, there are different types of variables (defined with different keywords), for example:<br>
                                                int - stores integers (whole numbers), without decimals, such as 123 or -123<br>
                                                float - stores floating point numbers, with decimals, such as 19.99 or -19.99<br>
                                                char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes</p>
                                                <p><b>Declaring (Creating) Variables</b><br>
                                                  To create a variable, specify the type and assign it a value:</p>
                                                  <h2>type variableName = value;</h2>
                                                  <p><b>Output Variables</b><br>
                                                    You learned from the output chapter that you can output values/print text with the printf() function:<br>
                                                    </p>
                                                    <p><b>Format Specifiers</b><br>
                                                      Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.<br>
                                                      A format specifier starts with a percentage sign %, followed by a character.<br>
                                                      For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:</p>
                                                      <h2>int myNum = 15;<br>
                                                        printf("%d", myNum);  // Outputs 15</h2>
                                                        <p>To print other types, use %c for char and %f for float:</p>
                                                        <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 013718.png">
                                                        <p><b>Change Variable Values</b></p>
                                                        <h2>int myNum = 15;  // myNum is 15<br>
                                                          myNum = 10;  // Now myNum is 10<br>
                                                          </h2>
                                                          <p>You can also assign the value of one variable to another:</p>
                                                          <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 013918.png">
                                                          <p><b>C Variable Names</b><br>
                                                            All C variables must be identified with unique names.<br>
                                                            These unique names are called identifiers.<br>
                                                            Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).<br>
                                                            Note: It is recommended to use descriptive names in order to create understandable and maintainable code:</p>
                                                            <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 014027.png">
                                                            <p><b>Real-Life Example</b><br>
                                                              Often in our examples, we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types etc). This is done to avoid confusion.<br>
                                                              However, if you want a real-life example on how variables can be used, take a look at the following, where we have made a program that stores different data of a college student:</p>
                                                              <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 014124.png">
                                                              <h1 id="datatypes">C Data Types</h1>
                                                              <p><b>Data Types</b><br>
                                                                As explained in the Variables chapter, a variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it:</p>
                                                                <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 014323.png">
                                                                <p><b>Basic Data Types</b><br>
                                                                  The data type specifies the size and type of information the variable will store.<br>
                                                                  In this tutorial, we will focus on the most basic ones:</p>
                                                                  <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 015115.png">
                                                                  <p><b>Basic Format Specifiers</b><br>
                                                                    There are different format specifiers for each data type. Here are some of them:</p>
                                                                    <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 015226.png">
                                                                    <p><b>Set Decimal Precision</b><br>
                                                                      You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:</p>
                                                                      <h2>float myFloatNum = 3.5;<br>
                                                                        double myDoubleNum = 19.99;<br>
                                                                        printf("%f\n", myFloatNum); // Outputs 3.500000<br>
                                                                        printf("%lf", myDoubleNum); // Outputs 19.990000</h2>
                                                                        <p><b>Real-Life Example</b><br>
                                                                          Here's a real-life example of using different data types, to calculate and output the total cost of a number of items:
                                                                          </p>
                                                                          <p><b>Examples</b></p>
                                                                          <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 015501.png">
                                                                          <h1 id="constants">C Constants</h1>
                                                                          <p><b>Constants</b><br>
                                                                            If you don't want others (or yourself) to change existing variable values, you can use the const keyword.<br>
                                                                            This will declare the variable as "constant", which means unchangeable and read-only:</p>
                                                                            <h2>const int myNum = 15;  // myNum will always be 15<br>
                                                                              myNum = 10;  // error: assignment of read-only variable 'myNum'</h2>
                                                                              <p><b>Notes On Constants</b><br>
                                                                                When you declare a constant variable, it must be assigned with a value:</p>
                                                                                <h2>const int minutesPerHour = 60;</h2>
                                                                                <p><b>Good Practice</b><br>
                                                                                  Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:</p>
                                                                                  <p><b>Examples</b></p>
                                                                                  <h2>const int BIRTHYEAR = 1980;</h2>
                                                                                  <h1 id="operators">C Operators</h1>
                                                                                  <p><b>Operators</b><br>
                                                                                    Operators are used to perform operations on variables and values.<br>
                                                                                    In the example below, we use the + operator to add together two values:</p>
                                                                                    <h2>int myNum = 100 + 50;</h2>
                                                                                    <p>Although the + operator is often used to add together two values, like in the example above, it can also be used to add together a variable and a value, or a variable and another variable:

                                                                                    </p>
                                                                                    <h2>int sum1 = 100 + 50;        // 150 (100 + 50)<br>
                                                                                      int sum2 = sum1 + 250;      // 400 (150 + 250)<br>
                                                                                      int sum3 = sum2 + sum2;     // 800 (400 + 400)</h2>
                                                                                      <p><b>Arithmetic Operators</b><br>
                                                                                        Arithmetic operators are used to perform common mathematical operations.</p>
                                                                                        <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 020255.png">
                                                                                        <p><b>Assignment Operators</b><br>
                                                                                          Assignment operators are used to assign values to variables.<br>
                                                                                          In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:</p>
                                                                                          <h2>int x = 10;</h2>
                                                                                          <p>The addition assignment operator (+=) adds a value to a variable:</p>
                                                                                          <h2>int x = 10;<br>
                                                                                            x += 5;</h2>
                                                                                            <p>A list of all assignment operators:</p>
                                                                                            <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 020803.png">
                                                                                            <p><b>Comparison Operators</b><br>
                                                                                              Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.<br>
                                                                                              The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values, and you will learn more about them in the Booleans and If..Else chapter.<br>
                                                                                              In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:</p>
                                                                                              <h2>int x = 5;
                                                                                                int y = 3;
                                                                                                printf("%d", x > y); // returns 1 (true) because 5 is greater than 3</h2>
                                                                                                <p>A list of all comparison operators:</p>
                                                                                                <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 020957.png">
                                                                                                <p><b>Logical Operators</b><br>
                                                                                                  You can also test for true or false values with logical operators.<br>
                                                                                                  Logical operators are used to determine the logic between variables or values:</p>
                                                                                                  <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 021056.png">
                                                                                                  <h1 id="ifelse">C If Else</h1>
                                                                                                  <p><b>Conditions and If Statements</b><br>
                                                                                                    You have already learned that C supports the usual logical conditions from mathematics:<br>
                                                                                                    Less than: a < b<br>
                                                                                                    Less than or equal to: a <= b<br>
                                                                                                    Greater than: a > b<br>
                                                                                                    Greater than or equal to: a >= b<br>
                                                                                                    Equal to a == b<br>
                                                                                                    Not Equal to: a != b</p>
                                                                                                    <p>C has the following conditional statements:<br>
                                                                                                      Use if to specify a block of code to be executed, if a specified condition is true<br>
                                                                                                      Use else to specify a block of code to be executed, if the same condition is false<br>
                                                                                                      Use else if to specify a new condition to test, if the first condition is false<br>
                                                                                                      Use switch to specify many alternative blocks of code to be executed</p>
                                                                                                      <P><b>The if Statement</b><br>
                                                                                                        Use the if statement to specify a block of code to be executed if a condition is true.</P>
                                                                                                        <h2>if (condition) {<br>
                                                                                                          // block of code to be executed if the condition is true<br>
                                                                                                        }</h2>
                                                                                                        <p><b>The else Statement</b><br>
                                                                                                          Use the else statement to specify a block of code to be executed if the condition is false.</p>
                                                                                                          <h2>if (condition) {<br>
                                                                                                            // block of code to be executed if the condition is true<br>
                                                                                                          } else {<br>
                                                                                                            // block of code to be executed if the condition is false<br>
                                                                                                          }</h2>
                                                                                                          <p><b>The else if Statement</b><br>
                                                                                                            Use the else if statement to specify a new condition if the first condition is false.</p>
                                                                                                            <h2>
                                                                                                              if (condition1) {<br>
                                                                                                                // block of code to be executed if condition1 is true<br>
                                                                                                              } else if (condition2) {<br>
                                                                                                                // block of code to be executed if the condition1 is false and condition2 is true<br>
                                                                                                              } else {<br>
                                                                                                                // block of code to be executed if the condition1 is false and condition2 is false<br>
                                                                                                              }<br>
                                                                                                            </h2>
                                                                                                            <p><b>Another Example</b><br>
                                                                                                              This example shows how you can use if..else to find out if a number is positive or negative:</p>
                                                                                                              <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 021701.png">
                                                                                                              <h1 id="while">C While Loop</h1>
                                                                                                              <p><b>Loops</b><br>
                                                                                                                Loops can execute a block of code as long as a specified condition is reached.<br>
                                                                                                                Loops are handy because they save time, reduce errors, and they make code more readable.</p>
                                                                                                                <p><b>While Loop</b><br>
                                                                                                                  The while loop loops through a block of code as long as a specified condition is true:</p>
                                                                                                                  <h2>while (condition) {<br>
                                                                                                                    // code block to be executed<br>
                                                                                                                  }</h2>
                                                                                                                  <p>In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:</p>
                                                                                                                  <h2>int i = 0;<br>
                                                                                                                    while (i < 5) {<br>
                                                                                                                      printf("%d\n", i);<br>
                                                                                                                      i++;<br>
                                                                                                                    }</h2>
                                                                                                                    <p><b>The Do/While Loop</b><br>
                                                                                                                      The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.</p>
                                                                                                                      <h2>do {<br>
                                                                                                                        // code block to be executed<br>
                                                                                                                      }<br>
                                                                                                                      while (condition);</h2>
                                                                                                                      <p>The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:</p>
                                                                                                                      <p><b>Examples</b></p>
                                                                                                                      <h2>int i = 0;<br>
                                                                                                                        do {<br>
                                                                                                                          printf("%d\n", i);<br>
                                                                                                                          i++;<br>
                                                                                                                        }<br>
                                                                                                                        while (i < 5);</h2>
                                                                                                                        <p><b>Real-Life Examples</b><br>
                                                                                                                          To demonstrate a practical example of the while loop, we can create a simple "countdown" program:</p>
                                                                                                                          <h2>int countdown = 3;<br>
                                                                                                                            while (countdown > 0) {<br>
                                                                                                                              printf("%d\n", countdown);<br>
                                                                                                                              countdown--;<br>
                                                                                                                            }<br>
                                                                                                                            printf("Happy New Year!!\n");</h2>
                                                                                                                            <h1 id="for">C For Loop</h1>
                                                                                                                            <p><b>For Loop</b><br>
                                                                                                                              When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:</p>
                                                                                                                              <p><b>Syntax</b></p>
                                                                                                                              <h2>for (statement 1; statement 2; statement 3) {<br>
                                                                                                                                // code block to be executed<br>
                                                                                                                              }</h2>
                                                                                                                              <p>Statement 1 is executed (one time) before the execution of the code block.<br>
                                                                                                                                Statement 2 defines the condition for executing the code block.<br>
                                                                                                                                Statement 3 is executed (every time) after the code block has been executed.<br>
                                                                                                                                The example below will print the numbers 0 to 4:</p>
                                                                                                                                <P><b>Another Example</b><br>
                                                                                                                                  This example will only print even values between 0 and 10:</P>
                                                                                                                                  <h2>for (i = 0; i <= 10; i = i + 2) {<br>
                                                                                                                                    printf("%d\n", i);<br>
                                                                                                                                  }</h2>
                                                                                                                                  <P><b>Nested Loops</b><br>
                                                                                                                                    It is also possible to place a loop inside another loop. This is called a nested loop.<br>
                                                                                                                                    The "inner loop" will be executed one time for each iteration of the "outer loop":</P>
                                                                                                                                    <p><b>Examples</b></p>
                                                                                                                                    <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 023036.png">

    </div>
    </div>
    </main>
    <footer class="footer">
      <div class="websitename"> Elearnx</div>
      <div class="bottom-links">
        <div class="links">
          <span>Courses</span>
          <a href="coursehtml.html" id="ABOUT">Html</a>
          <a href="coursecss2.html">Css</a>
          <a href="coursepython2.html">Python</a>
          <a href="coursejava.html">Javascript</a>
          <a href="coursec.html">C</a>
          <a href="coursec++.html">C++</a>
        </div>
        <div class="links">
          <span>Social Links</span>
          <a href="https://www.instagram.com/heyitsdipanshu/"> <img src="C:\Users\dipan\Downloads\logo-ig-png-32464.png" class="instasocial"> </a>
          <a href=""> <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADgAAAA4CAMAAACfWMssAAAAYFBMVEUAd7X///8Ac7NGlMRGk8QAdrUAbLAAbrDZ7PXV6fPy+fw9ir/p9Pkugbo0hr3D2umz0ORUnMh3q9C72eplocoIe7dsps6dxN6lyeCDs9TL4u+WwNzg7vVTmMYhg7uy1OcLxWtDAAABaklEQVRIie3W7Y6CMBAFUBxohwIK8qEIgu//lltou7TortNu9p83MRGSIzgzlEaHwETyU51jr5wrBWsODDzCgNcLrHjkHV5JOIE/hEnCOATGEiYhMHGgLBELgdi1lxlJ1IH8uvS17CjShtiriRCekM1mlm7oBaE2sCEMhA1vBg5+kCUG9n63GmGqXJYTqmNDlhcrrAkXdPsIx3FI+4TidpPDkHNOm7ndrP6U9TH/5VZxDewPsEvaS5t0CK8h9qXKSd4tq9T3EaC73rOl2EVp/X0bcqcddzMMU7YtbFuHHShsqH+lnJwlsUIqFIW7mLZAhPuYOfaGh5nR4fBotgLVQIWik+PE+11h38NCLUGmV+Ypfw9HdQU0j/lAhfr9AKafggizXHc81/VJibA4qvKzk4HE4nzgB/4jfLU8UiA26RqxQn0wfEOhTjTPMEIdZh9EOsw9QXzpPOdvMHgTGLztDN7oBm+twzfzYfkCChobmnKthiYAAAAASUVORK5CYII=" class="linkedinsocial"> </a>
          <a href="https://twitter.com/home"> <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADgAAAA4CAMAAACfWMssAAAAV1BMVEX///8dofIAmvEAnPH2+/4GnvI0p/O22vq93vre7/3v+P7M5vvW6vwAmPHs9v6m0/mZzfiHxfdzvfbk8v1Bq/NpufUAlfGOyPcAkfBRsPR+wfZdtPTH4/udz3kPAAABLklEQVRIie2U2ZaDIAxAScLiVnHBOm39/++c0toptAZ65nHG+4bmSkwgQuzs/HuqZvyNZjUi0nBzx5qLWpaXB9IReBQaUUxHyYkTNvEDrWCFiI4Fm9f1fZTNTPBEGdmVjIgAaIN16IF2Xx23ow+kU/tY1pEIB9YT7l6I86qaSFSG9YR91HAq5JsIvOers36dyJ3trD4WxyBUUew5XpPYdXFw+IuXVKbEeqDmhNjzHhB/bq4XAXkRq1RxzIHN9JTyfOtoW6RE+2/ITm+bGc9ot72hzYgCtgurc54oNwuL7NAITHgvD6Wa/8S6l/pQ6rRFxCc218IfFh0li0NO8He3qudYU5hthJA9XodgnCVePhrjbR/eXkU4NXlpZekdoYf0YNjJzVCVTdnmw3Z2/jjfQWEJXwOeKIcAAAAASUVORK5CYII=" class="twittersocial"> </a>
        </div>
      </div>
    </footer>
</body>
</html>
