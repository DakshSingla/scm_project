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
    .cpluslogo {
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
        <img src="https://brandslogos.com/wp-content/uploads/thumbs/c-logo-vector.svg" class="cpluslogo">
      <h1>
        C++ Programming
      </h1>
      <p>
        C++ is a powerful general-purpose programming language. It can be used to develop operating systems, browsers, games, and so on. C++ supports different ways of programming like procedural, object-oriented, functional, and so on. This makes C++ powerful as well as flexible.
        Our C++ programming tutorial will guide you to learn C++ programming one step at a time.
      </p>
    </div>
    <div class="flex">
    <p class="topics">
      <a href=#introduction class="link">C++ Tutorial</a><br>
      <a href=#syntax class="link">C++ syntax</a><br>
      <a href=#output class="link">C++ Output</a><br>
      <a href=#comments class="link">C++ Comments</a><br>
      <a href=#Variables class="link">C++ Variables</a><br>
      <a href=#datatypes class="link">C++ Data Types</a><br>
      <a href=#operators class="link">C++ Operators</a><br>
      <a href=#strings class="link">C++ Strings</a><br>
      <a href=#while class="link">C++ While Loop</a><br>
      <a href=#for class="link">C++ For Loop</a><br>
      <a href=#for class="link">C++ Break</a><br>
      <a href=#for class="link">C++ Continue</a><br>
      <a href=#for class="link">C++ Arrays</a><br>
      <a href=#for class="link">C++ Functions</a><br>
      <a href=#for class="link">C++ Classes and Objects</a><br>
      <a href=#for class="link">C++ Files</a><br>
      <a href=#for class="link">C++ Examples</a>
    </p>
    <div class="content">
      <h1 id="introduction">C++ Tutorial</h1>
      <p><b>Learn C++</b><br>
        C++ is a popular programming language.<br>
        C++ is used to create computer programs, and is one of the most used language in game development.</p>
        <p><b>Examples in Each Chapter</b><br>
          Our "Try it Yourself" editor makes it easy to learn C++. You can edit C++ code and view the result in your browser.</p>
          <h2>#include < iostream ><?<br>
            using namespace std;<br>
            int main() {<br>
              cout << "Hello World!";<br>
              return 0;<br>
            }</h2>
            <p><b>C++ Introduction</b></p>
            <p><b>What is C++?</b><br>
              C++ is a cross-platform language that can be used to create high-performance applications.<br>
              C++ was developed by Bjarne Stroustrup, as an extension to the C language.<br>
              C++ gives programmers a high level of control over system resources and memory.<br>
              The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.</p>
              <p><b>Why Use C++</b><br>
                C++ is one of the world's most popular programming languages.<br>
                C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.<br>
                C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.<br>
                C++ is portable and can be used to develop applications that can be adapted to multiple platforms.<br>
                C++ is fun and easy to learn!<br>
                As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.</p>
                <p><b>C++ Get Started</b><br>
                  To start using C++, you need two things:<br>
                  A text editor, like Notepad, to write C++ code<br>
                  A compiler, like GCC, to translate the C++ code into a language that the computer will understand<br>
                  There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).</p>
                  <p><b>C++ Install IDE</b><br>
                    An IDE (Integrated Development Environment) is used to edit AND compile the code.<br>
                    Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C++ code.<br>
                    Note: Web-based IDE's can work as well, but functionality is limited.<br>
                    We will use Code::Blocks in our tutorial, which we believe is a good place to start.<br>
                    You can find the latest version of Codeblocks at http://www.codeblocks.org/. Download the mingw-setup.exe file, which will install the text editor with a compiler.</p>
                    <p><b>C++ Quickstart</b><br>
                      Let's create our first C++ file.<br>
                      Open Codeblocks and go to File > New > Empty File.<br>
                      Write the following C++ code and save the file as myfirstprogram.cpp (File > Save File as):</p>
                      <h2>#include < iostream ><br>
                        using namespace std;<br>
                        int main() {<br>
                          cout << "Hello World!";<br>
                          return 0;<br>
                        }</h2>
                        <p>Don't worry if you don't understand the code above - we will discuss it in detail in later chapters. For now, focus on how to run the code.</p>
                        <img src="https://www.w3schools.com/cpp/codeblocks2020.png">
                        <p><b>Learning C++ At Elearnx</b><br>
                          When learning C++ at W3Schools.com, you can use our "Try it Yourself" tool, which shows both the code and the result. This will make it easier for you to understand every part as we move forward:</p>
                          <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 031428.png">
                          <h1 id="syntax">C++ Syntax</h1>
                          <p><b>C++ Syntax</b><br>
                            Let's break up the following code to understand it better:</p>
                            <h2>#include < iostream ><br>
                              using namespace std;<br>
                              int main() {<br>
                                cout << "Hello World!";<br>
                                return 0;<br>
                              }</h2>
                              <p><b>Example explained</b><br>
                                Line 1: #include < iostream > is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.<br>
                                Line 2: using namespace std means that we can use names for objects and variables from the standard library.<br>
                                Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.<br>
                                Line 4: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.<br>
                                Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".<br>
                                Note: Every C++ statement ends with a semicolon ;.<br>
                                Note: The body of int main() could also been written as:<br>
                                int main () { cout << "Hello World! "; return 0; }<br>
                                Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.<br>
                                Line 6: return 0 ends the main function.<br>
                                Line 7: Do not forget to add the closing curly bracket } to actually end the main function.<br>
                              </p>
                              <p><b>Omitting Namespace</b><br>
                                You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:</p>
                                <p><b>Examples</b></p>
                                <h2>#include < iostream ><br>
                                  int main() {<br>
                                    std::cout << "Hello World!";<br>
                                    return 0;<br>
                                  }</h2>
                          <h1 id="output">C++ Output</h1>
                          <p><b>C++ Output (Print Text)</b><br>
                            The cout object, together with the << operator, is used to output values/print text:</p>
                            <h2>#include < iostream ><br>
                              using namespace std;<br>
                              int main() {<br>
                                cout << "Hello World!";<br>
                                return 0;<br>
                              }</h2>
                              <p>You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:</p>
                              <h2>#include < iostream ><br>
                                using namespace std;<br>
                                int main() {<br>
                                  cout << "Hello World!";<br>
                                  cout << "I am learning C++";<br>
                                  return 0;<br>
                                }</h2>
                                <h1 id="comments">C++ Comments</h1>
                                <p><b>C++ Comments</b><br>
                                  Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.</p>
                                  <p><b>Single-line Comments</b><br>
                                    Single-line comments start with two forward slashes (//).<br>
                                    Any text between // and the end of the line is ignored by the compiler (will not be executed).<br>
                                    This example uses a single-line comment before a line of code:</p>
                                    <h2>// This is a comment<br>
                                      cout << "Hello World!";</h2>
                                      <p><b>C++ Multi-line Comments</b><br>
                                        Multi-line comments start with /* and ends with */.<br>
                                        Any text between /* and */ will be ignored by the compiler:</p>
                                        <h2>/* The code below will print the words Hello World!<br>
                                          to the screen, and it is amazing */<br>
                                          cout << "Hello World!";</h2>
                                          <h1 id="Variables">C++ Variables</h1>
                                          <p><b>C++ Variables</b><br>
                                            Variables are containers for storing data values.</p>
                                            <p>In C++, there are different types of variables (defined with different keywords), for example:<br>
                                              int - stores integers (whole numbers), without decimals, such as 123 or -123<br>
                                              double - stores floating point numbers, with decimals, such as 19.99 or -19.99<br>
                                              char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes<br>
                                              string - stores text, such as "Hello World". String values are surrounded by double quotes<br>
                                              bool - stores values with two states: true or false</p>
                                              <P><b>Declaring (Creating) Variables</b><br>
                                                To create a variable, specify the type and assign it a value:</P>
                                                <h2>type variableName = value;</h2>
                                                <p><b>Other Types</b><br>
                                                  A demonstration of other data types:</p>
                                                  <p><b>Examples</b></p>
                                                  <h2>int myNum = 5;               // Integer (whole number without decimals)<br>
                                                    double myFloatNum = 5.99;    // Floating point number (with decimals)<br>
                                                    char myLetter = 'D';         // Character<br>
                                                    string myText = "Hello";     // String (text)<br>
                                                    bool myBoolean = true;       // Boolean (true or false)</h2>
                                                    <p><b>Display Variables</b><br>
                                                      The cout object is used together with the << operator to display variables.\<br>
                                                      To combine both text and a variable, separate them with the << operator:</p>
                                                      <p><b>Examples</b></p>
                                                      <h2>int myAge = 35;<br>
                                                        cout << "I am " << myAge << " years old.";</h2>
                                                        <p><b>Add Variables Together</b><br>
                                                          To add a variable to another variable, you can use the + operator:</p>
                                                          <P><b>Examples</b></P>
                                                          <h2>int x = 5;<br>
                                                            int y = 6;<br>
                                                            int sum = x + y;<br>
                                                            cout << sum;</h2>
                                                            <h1 id="datatypes">C++ Data Types</h1>
                                                            <p><b>C++ Data Types</b><br>
                                                              As explained in the Variables chapter, a variable in C++ must be a specified data type:</p>
                                                              <p><b>Example</b></p>
                                                              <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 034407.png">
                                                              <p><b>Basic Data Types</b><br>
                                                                The data type specifies the size and type of information the variable will store:</p>
                                                                <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 034452.png">
                                                                <h1 id="operators">C++ Operators</h1>
                                                                <p><b>C++ Operators</b>
                                                                  Operators are used to perform operations on variables and values.<br>
                                                                  In the example below, we use the + operator to add together two values:</p>
                                                                  <p><b>Examples</b></p>
                                                                  <h2>int x = 100 + 50;</h2>
                                                                  <p>Although the + operator is often used to add together two values, like in the example above, it can also be used to add together a variable and a value, or a variable and another variable:</p>
                                                                  <p><b>Examples</b></p>
                                                                  <h2>int sum1 = 100 + 50;        // 150 (100 + 50)<br>
                                                                    int sum2 = sum1 + 250;      // 400 (150 + 250)<br>
                                                                    int sum3 = sum2 + sum2;     // 800 (400 + 400)</h2>
                                                                    <p>C++ divides the operators into the following groups:<br>
                                                                      Arithmetic operators<br>
                                                                      Assignment operators<br>
                                                                      Comparison operators<br>
                                                                      Logical operators<br>
                                                                      Bitwise operators</p>
                                                                      <p><b>Arithmetic Operators</b><br>
                                                                        Arithmetic operators are used to perform common mathematical operations.</p>
                                                                        <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 034841.png">
                                                                        <h1 id="strings">C++ Strings</h1>
                                                                        <p>Strings are used for storing text.<br>
                                                                          A string variable contains a collection of characters surrounded by double quotes:</p>
                                                                          <p><b>Examples</b>
                                                                            Create a variable of type string and assign it a value:</p>
                                                                            <h2>string greeting = "Hello";</h2>
                                                                            <p>To use strings, you must include an additional header file in the source code, the < string > library:</p>
                                                                            <p><b>Examples</b></p>
                                                                            <h2>// Include the string library<br>
                                                                              #include < string ><br>
                                                                              // Create a string variable<br>
                                                                              string greeting = "Hello";</h2>
                                                                              <h1 id="while">C++ While Loop</h1>
                                                                              <p><b>C++ Loops</b><br>
                                                                                Loops can execute a block of code as long as a specified condition is reached.<br>
                                                                                Loops are handy because they save time, reduce errors, and they make code more readable.<br>
                                                                                </p>
                                                                                <p><b>C++ While Loop</b><br>
                                                                                  The while loop loops through a block of code as long as a specified condition is true:</p>
                                                                                  <p><b>Syntax</b></p>
                                                                                  <h2>while (condition) {<br>
                                                                                    // code block to be executed<br>
                                                                                  }</h2>
                                                                                  <p>In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:</p>
                                                                                  <p><b>Examples</b></p>
                                                                                  <h2>int i = 0;<br>
                                                                                    while (i < 5) {<br>
                                                                                      cout << i << "\n";<br>
                                                                                      i++;<br>
                                                                                    }</h2>
                                                                                    <h1 id="for">C++ For Loop</h1>
                                                                                    <p>When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:</p>
                                                                                    <p><b>Syntax</b></p>
                                                                                    <h2>for (statement 1; statement 2; statement 3) {<br>
                                                                                      // code block to be executed<br>
                                                                                    }</h2>
                                                                                    <p>Statement 1 is executed (one time) before the execution of the code block.<br>
                                                                                      Statement 2 defines the condition for executing the code block.<br>
                                                                                      Statement 3 is executed (every time) after the code block has been executed.<br>
                                                                                      The example below will print the numbers 0 to 4:</p>
                                                                                      <h2>for (int i = 0; i < 5; i++) {<br>
                                                                                        cout << i << "\n";<br>
                                                                                      }</h2>
                                                                                      <p><b>Another Example</b><br>
                                                                                        This example will only print even values between 0 and 10:</p>
                                                                                        <h2>for (int i = 0; i <= 10; i = i + 2) {<br>
                                                                                          cout << i << "\n";<br>
                                                                                        }</h2>
                                                                                        <p><b>Nested Loops</b><br>
                                                                                          It is also possible to place a loop inside another loop. This is called a nested loop.<br>
                                                                                          The "inner loop" will be executed one time for each iteration of the "outer loop":</p>
                                                                                          <p><b>Examples</b></p>
                                                                                          <img src="C:\Users\dipan\OneDrive\Pictures\Screenshots\Screenshot 2023-12-06 035843.png">
                                                                                          <p><b>The foreach Loop</b><br>
                                                                                            There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):</p>

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
