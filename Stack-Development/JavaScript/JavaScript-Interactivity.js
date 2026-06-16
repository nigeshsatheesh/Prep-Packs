// JAVASCRIPT //

//COMMENT LINES:
    //Single line comment: //
    //Multiline comment  : /* */

/*
#DELIMITER : ';'

#VARIBLE DECLARATION: var <identifier> = <value>;
    var : to declare a variable and to assign value to it
    eg  : var name = "Lakshmi";

#OUTPUT SYNTAX : console.log("");
    ##MULTIPLE WORDS IN OUTPUT:
        console.log("<text1>"+"<text2>"+...);
        console.log("<text1>","<text2>",...);

    ##STYLING : console.log("%c<text>","<inline-css>");
        %c : to style the console output
        eg : console.log("%cHello World","font-size:10px; color:blue");
        
    ##OUTPUT WITH IDENTIFIERS
        console.log("Dear",name);
#DATATYPES
    1. String ("" or '' or ``(modern way))
        -> Template literals: using `` for declaring strings, with the help of template literals an expression defined by ${} can be embedded by placeholder.
        It can be used for multiline string declaration
            i.e. value outside {} are treated as strting and values inside {} treated as javascript 
            eg: var a = 'hi';
                var b = 'lakshmi';
                console.log(`${a} ${b}`)
        ##STRING CONCATENATION
            eg: "Lakshmi"+" "+"Nigesh" = "Lakshmi Nigesh"
            eg: type coercion -> 1+"2" = "12" (converts number to string for concatenation)
        ##STRING FUNCTIONS
            1. str1.concat(str2)     -> combines both str1 and str2
            2. str.length            -> return length of the string
            3. str.charAt(index)     -> returns character at the specific index position
            4. str.indexOf('c')      -> returns the index of the specified character from the given string
            5. str.lastIndexOf('c')  -> returns the last matched index of the character from the given string
            6. str.split('c')        -> splita the given string into elements of the array based on the character
                "h-h-h-h".split('-') -> ['h','h','h','h']
            7. str.toUpperCase()     -> converts the case of entire string into uppercase
            8. str.toLowerCase()     -> converts the case of the entire string into lowercase
            9. str.match(/c/)        -> used to  return the information of the matching character from the string (i.e. [character(c),index:,input:(original string),groups:(undefined)])

    2. Number (both integers and decimal values)
    3. Boolean (True/False)
    4. Null (no value)
    5. Undefined (holds "undefined" value,when value is not assigned to a variable)
    6. BigInt (larger symbols)
    7. Symbol

#OPERATORS
    1. Assignment operator (=)
    2. Arithmetic operator (+,-,*,/,%,**)
    3. Comparison operator (<,>,<=,>=,==,===,!=,!==)
        Equality operator        : == (does not check the datatype)
            eg: 100=="100"    -> true
        Strict equality operator : === (checks both value and datatype)
            eg: 100==="100"   -> false

        Inequality operator        : != (does not check the datatype)
            eg: 100!="100"    -> false
        Strict inequality operator : !== (checks both value and datatype)
            eg: 100!=="100"   -> true
    4. Logical operator (&&,||,!)
    5. Compound assignment operator (+=,-=,*=,/=,%=,**=)
    6. typeOf operator        -> evaluates the given parameter and returns the data type as string
            eg: typeof(value) -> "<datatype>"
                datatype : string/number(both whole & decimal number)/boolean/object(both arrays & objects)/function

#OPERATOR PRECEDENCE & ASSOCIATIVITY
    ##ASSOCIATIVITY
        1. Left-to-Right Associativity (eg: >, etc..)
        2. Right-to-Left Associativity (eg: =, etc..)

#CONDITIONAL STATEMENTS

    ##IF-ELSE IF-ELSE STATEMENTS
        if (condition == true) {
        //Statement to be executed 
        }
        else if (conditon == true) {
        //Statement to be executed
        }
        else {
        //Statement to be executed 
        }
    
    ##SWITCH STATEMENT
       switch (<variable to be checked>) {
            case "<value1>":
                //statement
                break;
            case "<value2>":
                //statement
                break;
            .
            .
            .
            default:
                //statement
       }

#LOOPING STATEMENTS
    ##FOR LOOP
        for (var counter(i) = init_value; condition ; increment/decrement) {
            //statement to be executed
        }
        ###FOR OF LOOP (does not let access prototypes)
            It iterates over the values of an iterable data structure(arrays, string, sets, maps). It is similar to for each loop in C++ and Java.
                eg: for (var <variable_name> of <iterable_structure>) {
                        //code
                    }
        ###FOR IN LOOP (lets access the prototypes)
            It iterates over the values of an iterable data structure(arrays, string, sets, maps). It is similar to for each loop in C++ and Java.
                eg: for (var <variable_name> in <iterable_structure>) {
                        //code
                    }
        
    ##WHILE LOOP
        var counter(i)=value;
        while (condition) {
            //statement
        }
    
    ##NESTED LOOPS
        for (var counter(i) = init_value; condition ; increment/decrement of i)     -> Outer Loop
        {
            for (var counter(j) = init_value; condition ; increment/decrement of j) -> Inner Loop
            {
                //statement to be executed
            }
        }

        var counter(i)=value;
        var counter(j)=value;
        while (condition of i)     -> Outer Loop
        {
            while (condition of j) -> Inner Loop
            {
                //statement
            }
        }

#FUNCTIONS
    ##DECLARATION
        function <function_name>(parameters) {
            //code
            return; -> return value to the function call
        }
            function : function declaration keyword
    ##FUCNTION CALL
        <function_name>(arguments);

#ARRAYS (also an object)
    ##DECLARATION
        var <array_name> = []; -> empty array
        var arr = [1,2,3,4,5];
    ##INDEXING (starts from 0 to n-1)
        arr[0 to n-1];
    ##BUILT-IN FUNCTIONS (push & pop)
        arr.push(<value>); -> appending elements
        arr.pop();         -> just removes last element(i.e recently added value) from the array
        arr1.concat(arr2)  -> concatenates two arrays (or) arr1 + arr2 

#OBJECTS AND LITERALS (DICTIONARY IN PYTHON i.e key value pair and each pair can be accessed by keys / )
    ##DECLARATION (objects can contain properties and methods)
        var <object_name> = {}; -> empty object
        var <object_name> = {
            property1:value, property2:value, property3:value,...
        };
        ###PROPERTY DECLARATION
            <object_name>.<property1> = value; (<property1>: property key, value: property value)
            <object_name>.<property2> = value;
            <object_name>.<property3> = value;
            .
            .
            .

            <object_name>["property1"] = value;
            <object_name>["property2"] = value;
            <object_name>["property3"] = value;
            .
            .
            .
        ##METHODS DECLARATION
            ###METHOD DEFINTION
                <object_name>.<method_name> = function() {
                    //code
                }
            ###METHOD CALL
                <object_name>.<method_name>();
    ##ACCESSING
        <object_name>[<property>];
    ##BUILT-IN OBJECTS
        Math,Date,Object,Function,Boolean,Symbol,Array,Map,Set,Promise,JSON
        ###MATH OBJECT
            1.Number constants
                Math.PI                               -> returns  pi value
                Math.E                                -> return euler's value
                Math.LN2                              -> return value of natural log of 2
            2.Rounding Methods
                Math.ceil(x)                          -> returns smallest integer greater than x
                Math.floor(x)                         -> returns largest integer smaller than x
                Math.round(x)                         -> rounds the number to closest integer (i.e. if decimal >= .5 next integer else previous integer)
            3.Arithmetic and calculus method
                Math.pow(x,y)                         -> x to the power y
                Math.sqrt(x)                          -> square root of x
                Math.cbrt(x)                          -> cube root of x
                Math.abs(x)                           -> returns absolute value of x
                Math.log(x)/Math.log2(x)/Math.log(10) -> computes respective logarithmic value
                Math.min(x,y,z)                       -> returns min value among x, y & z
                Math.max(x,y,z)                       -> returns max value among x, y & z
                Math.sin()/Math.cos/Math.tan()        -> computes respective trigonometric calculations
            
            4.Random method
                Mathr.random()                        -> returns random number between 0 and 0.99
    ##BUILT-IN OBJECT FUNCTIONS
        ->Since objects are not iterable we use these functions.

        Object.create(<object_name>)  -> creates an object
        Object.keys(<object_name>)    -> returns keys(i.e. properties) of the object as elements of array.
        Object.values(<object_name>)  -> returns values of the object as elements of array.
        Object.entries(<object_name>) -> returns the key value pairs as array elements of array.
            eg: [[key,value]....]
    ##ITERATING OBJECTS
        1.For in loop
            eg: for (var <variable> in <object>) {
                    <variable>; //keys
                    <object>[<variable>]; //values
                }
        2.For of loop
            eg: for (var <variable> of Object.keys(<object>)/Object.values(<object>)/Object.entries(<object>)) {
                    //code
                }
        

#ERRORS & BUGS
    -> Error causes the program to gets terminated
        1. SyntaxError    -> occurs due to incorrect syntax of program
        2. TypeError      -> incorrect use of datatypes
        3. ReferenceError -> occurs when unndefined values are processed
        4. RangeError     -> occurs in out of range situation
        5. AggregateError
        6. Error
        7. InternalError
        8. URIError
    -> Bugs causes the program to behave in undesired manner
    ##ERROR HANDLING
        ###TRY & CATCH METHOD (keeps the program running even when error occurs i.e. gives the error statement and also executes the program)
            try {
                //CODE THAT MAY RESULT IN ERROR
            }
            catch (//error_object eg:err) {
                //ALTERNATIVE CODE THAT SHOULD BE EXECUTED INSTEAD OF THE ERROR
            }
        ###ERROR OBJECT PROPERTIES IN CATCH BLOCK
            try {
                //code
            }
            catch (error/err/e -> error object) {
                error.name    -> returns name of the error (WHO)
                error.message -> returns description of the error (WHAT)
                error.stack   -> a stack trace showing where the error occurred (WHERE)
            }
        ###THROW (to throw an error from the try block to the catch block so that error statement is not executed)
            try {
                throw new <error_name>();
            }
            catch {
                //code
            }

#TYPES OF EMPTY VALUES
    1. null value         -> absence of a value
    2. undefined datatype -> holds the value undefined to the declared variables/functions whose value is not mentioned

#PROGRAMMING PARADIGMS
    Different ways of solving problems via code
    ##FUNCTIONAL PROGRAMMING
        The program is divided into datas and functions
        ###RECURSIVE FUNCTIONS
            Those functions whose function calls are within the function definition
                eg: function <function_name> () {
                        //code
                        //base line(breaks the recursion)
                    }
        ###HIGHORDER FUNCTION
            Those functions that contains other functions has it's parameters
                eg: function <function1> {
                        //code
                    }
                    function <function2> {
                        //code
                    }
                    function <highOrder_function> (<function1>,<function2>) {
                        //code containing function calls of function1 & function2
                    }

        ###SCOPE OF VARIABLES
            -> A variable that is only accessible in the function where it is declared is called local scope
            -> A variable that is accessible globally where it is declared and defined outside the function is called global scope
            -> A variable that is accessible within a certain block where it is declared and defined is called block scope
                keywords: let & const
                -> By using the keyword const variables can't be redeclared and it is scoped to its respective block.
                -> By using the keyword let varibles can be redeclared and its is scoped to its respective block 
                ##COMPARISON BETWEEN VAR,LET & CONST
                -----------------------------------------------------------------------------------------------------------------
                |   |             var                  |              let                   |             const                 |
                |---|----------------------------------|------------------------------------|-----------------------------------|
                | 1.| we can access a varible before   | we cannot access a varible         | The varible must be initialized   |
                |   | initialization as long as it is  | before we declare it.              | on declaration.                   |
                |   | eventually initialized anywhere  | eg: console.log(text); //ERROR     | eg: const num=1608;               |
                |   | in the code.                     |     let text = "Hi";               |                                   |
                |   | eg: console.log(text); //'Hi'    |                                    |                                   |
                |   |     var text="Hi";               |                                    |                                   |
                |---|----------------------------------|------------------------------------|-----------------------------------|
                | 2.| we redeclare the same variable   | we can declare as unassigned       | we cannot access the the varible  |
                |   | using var keyword.               | varible.                           | before declaration & intializtion.|
                |   | eg: var text = "Hi";             | eg: let text;                      | eg: console.log(text); //ERROR    |
                |   |     var text = "Hello";          |     console.log(text); //undefined |     text = 'hi' ;                 |
                |   |     console.log(text); //'Hello' |                                    |                                   |
                |---|----------------------------------|------------------------------------|-----------------------------------|
                | 3.|                                  | we cannot redeclare a varible.     | we cannot redeclare the variable. |
                |   |                                  | eg: let text = 'hi';               | eg: const text = 'hi';            |
                |   |                                  |     let text = 'hello'; //ERROR    |     text = 'hello'; //ERROR       |
                |---|----------------------------------|------------------------------------|-----------------------------------|
                | 4.|                                  | we can reassign the varible.       |                                   |
                |   |                                  | eg: let text='hi';                 |                                   |
                |   |                                  |     text = 'hello';                |                                   |
                -----------------------------------------------------------------------------------------------------------------

    ##OBJECT ORIENTED PROGRAMMING (OOPs)
        The program implemented by objects consisting of properties and methods
            eg: var <object_name> = {
                <property1> = <value>,
                <property2> = <value>,
                ...
                <method_name> = function(parameters) {
                        this.<property1>
                        this.<property2>
                    }
                }
                <object_name>.<property1>;
                <object_name>.<property2>;
                <object_name>.<method_name>();

            this keyword -> an alias used to refer to the object itself without using its actual name
        ##CLASSES  
            Classes are blueprint of objects that are used to build more objects
                eg: //class declaration
                    class <class_name> {
                        constructor(properties....) {
                            //assignment
                        }
                        <method_name> () { //no need of the keyword function
                            //code
                        }
                    }
                    //object creation
                    const/var/let <object_name> = new <class_name>(constructor_parameters...);
                        (or)
                    const/var/let <object_name> = Object.create(<class_name>);

                constructor -> the initally assign passed parameters when objects are created
            ##CONSTRUCTORS
                To use constructor functions of built-in objects the keyword 'new' must be used
                    eg: new Error(), new Map()new Set(),new Date() -> returns cuurent date and time
                
        ##PRINCIPLES OF OOPs
            1. Inheritance 
                The properties & methods of parent class is inherited by child class.
                    eg: class <parentClass>  {....};
                        class <childClass> extends <parentClass> {....};
                        class <subsequentClass> extends <childClass> {....};

                        extendss keyword -> to make inheritance
                        super keyword    -> calls parent methods and properties in the  child class
            2. Encapsulation
                Preventing the  use of properties & methods of a certain class to be used by other classes
            3. Abstraction
                Making the classes more generalized
            4. Polymorphism (multiple forms)
                Classes containing functions with same names but same or different functionalities will be treated differently
                    eg: class Class1 {
                            function() {
                                //code
                            }    
                        }
                        class Class2 {
                            function() {
                                //code
                            }
                        }
                        Class1.function() //different output
                        Class2.function() //different output

#DESTRUCTURING ARRAYS AND OBJECTS
    Destructuring is the process of extracting the properties of an object/array and making them independent of the original
        eg: {<an original element from the object/element} = <object>;
            <element> = value; (reassigning);
            let {PI} = Math;
            PI === Math.PI; //true
            PI = 1;
            PI === Math.PI; //false
    
#DATASTRUCTURES 
        Way of representing datas
        eg: array, map, sets, objects
        ##ARRAYS []
            Iterable list of indexed elements
            ###METHODS
                1. forEach()
                    It accepts a function as paramters that loops over each member of the array
                        eg: array.forEach(function(i, index) {
                                console.log(`${index}:${i}`)
                            });
                2. filter()
                    It accepts a function and filters the array based on a specific condition
                        eg: array.filter(function(<variable_to_acces_array_items> {
                                return //condition;
                                console.log(result);
                            });
                3. map()
                    It accepts a function and maps the functionality of the function to the array elements
                        eg: array.map(function(<variable>) {
                                return //functionality eg: <variable>/10;
                                });
                4.spread operator (...)
                    Helps to spread all the elements of the array so there is no need of listing all the array items
                    eg: ...array;
                5.rest operator  (...)
                    Helps to spread remaining array items into a new sub array
                    Also used for destructing arrays
                        eg: array[0],array[1],array[2],...<sub_array_name>
                            let [first, ...rest] = array;

            ##OBJECTS {}
            Non iterable structure of key-value pairs
            ###METHODS
                1. forEach()
                    forEach() method in object can be used in the similar way that is used in arrays
                    eg: var <obj> = {
                            keys: values;
                            ...
                        }
                        const keys = Object.keys(<obj>); //array consisting of keys
                        keys.forEach(function(i) {
                            console.log(i,<obj>[i]);
                        })
                2.spread operator (...)
                    Helps to spread all the elements of the object so there is no need of listing all the object items
                    Declared left side
                    eg: ...array;
                3.rest operator  (...)
                    Helps to spread remaining array items into a new sub array
                    Also used for destructing arrays
                    Declared right side
                        eg: array[0],array[1],array[2],...<sub_array_name>
                            let [first, ...rest] = array;

        ##MAPS {}
            Iterable data structure which consists of key-value pairs where any value can be key (including numbers)
            Similar to objects but no inheritance and no prototypes
            eg: let <map_variable> = new Map(); -> constructor
                <map_variable>.set(key1,value1);
                <map_variable>.set(key2,value2);
                <map_variable>.set(key3,value3);
                .
                .
                .
                console.log(<map_variable>) //Map(n) {key1 => value1, key2 => value2, key3 => value3,...}
            ->Accessing the key value pairs of map
                eg: <map_variable>.get(<key>);
        ##SET {}
            Iterable structure of unique values (no error will be thrown when duplicate values are entered)
            Array in object structure
            eg: let <set_variable> = new Set(); -> constructor
                <set_variable>.set('value');
                <set_variable>.set('value');
                .
                .
                .
        ##QUEUES
        ##LINKED LISTS
        ##TREES
        ##GRAPHS

#MODULES IN JAVASCRIPT

#DOM MANIPULATION
    ->To create document object
        document.<method>;
        methods = createElement(<html_element>), setAttribute(<html_attribute_type>,<html_attribute_value>), innerText
        eg: const h2 = document.createElement('h2');
            h2.innerText = "Lakshmi";
            h2.setAttribute('id','sub-heading');
            h2.setAttribute('class','secondary');
            //html translation <h2 id="sub-heading" class="secondary">Lakshmi</h2>
    ->To append document object in the webapge
        document.body.appendChild(h2);
    ##JAVASCRIPT SELECTORS
        ->To select specific html selector
            document.querySelector(<html_element>)
        ->To select all specific html selector
            document.querySelectorAll(<html_element>)
        ->To access an element by id
            document.getElementById(<id>)
        ->To access elements by class name
            document.getElementsByClassName(<class_name>)
    ##EVENTS
        User's interaction that triggers an action in the webpage. The function that captures events and manages is known as event handler
        eg: to add an event that records user's mouse click
            const target = document.querySelector('body');
            function handleClick() {
                console.log('User clicked!');
            }
            target.addEventListener('click',handleClick);
            (or html way)
            <h1 onclick='handleClick()'></h1>
        ->To add an event to the html selector
            <html_selector>.addEventListener(<string_value>,<eventHandle_function>)
            (or)
            <html_element onclick = <js_eventHandler>></html_element>
        ->To capture user input
            prompt(<message>)

#JSON
    json is a datatype that is in the stringified format of javascript objects
        eg: '{'color':'red'}'
    ->converting json datas into js objects is called parsing. It is achieved by
        JSON.parse(<stringified js objects>)
    ->To convert js objects into json datas 
        JSON.stringify(<js_object>)

#HTML WITH JAVASCRIPT
    <script type="text/javascript"></script>

#CSS WITH JAVASCRIPT
    ->To apply css style to a text we use "%c". It is JS format specifier that tells how the text should be styled
        console.log("%c"+text, style);
    ->To apply css rules we use $. This symbol instructs JS that the text shouldn't be treated as plain text instead css styling as a plugin.
        color: ${value};
        
#NODE & NPM
    ->Node.js is a Javascript environment that can run on any settings command line,etc..
    ->npm is a packet manager that lets us use Node.js libraries and frameworks
    ->The file created by npm init is called package.js

#TESTING
    To test the code with multiple testcases. There are many javascript frameworks for testing that neglects the use of comments line
    The syntax of the testing frameworks becomes the expectations of the testing.
    eg: in JEST (a javascript testing framework),
        expect(concatString("a","b").toBe("ab"));
    ##REFACTORING
        Changing the code without affecting the actual result
    ##TYPES
        1. e2e Testing(end-end testing)
            Testing an program from the perspective of the user
            eg: WebdriverJS, Protractor, Cypress
        2. Integration Testing
            Testing how different parts of code works together
            eg: React Testing Library, Enzyme
        3. Unit  Testing
            Testing small units of the program individually
        
        High Speed/Lowest cost ------------ Lowest Speed/Highest Cost
        Unit Testing > Integration Testing > e2e Testing

    ->JavaScript does not have built-in functions for testing. Created testing libraries are Jasmine, Mocha, Karma, qUnit

#JEST
    -> To test plain js code, react.js, Babel, TypeScript, Node, Angular, Vue
    -> CODE COVERAGE is the amount % of testing code is contained in a program
        code coverage = 1/hours of testing
    ##MOCKING
        To separate the code from its related dependencies during testing
    ##SNAPSHOT TESTING
        To ensure that there are no regressions in the DOM
    eg: { default: TestRunner } = require("<test eg: jest-runner>");
        module.export = //code -> to export code from node.js for testing
        require(`./ <//code>`) -> to import the exported code from node.js
        test("<print_test>", () => {expect(//code).toBe(<output>);})
#TEST DRIVEN DEVELOPMENT (TDD)
    Streamlined process of writing code tbat will satisfy some requirements
*/