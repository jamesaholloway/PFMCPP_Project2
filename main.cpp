#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 char
 bool
 float
 double
 void
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int count = 1;
    int type = 5;

    char whatIsMyName = 'j';
    char synthesizerType = 'R';
    char houseName = 'T';

    bool isItAFlag = true;
    bool doIKnowWhatImDoing = false;
    bool canWeFixIt = true;

    float myHeight = 189.2f;
    float howLongIsIt = 1234.5f;
    float filterValue = 0.67f;

    double highPrecision = 0.1234567;
    double scalingFactor = 1.23456;
    double oscillatorShift = 345.23456;
    
    ignoreUnused(number, count, type, whatIsMyName, synthesizerType, houseName, isItAFlag, doIKnowWhatImDoing, canWeFixIt, myHeight, howLongIsIt, filterValue, highPrecision, scalingFactor, oscillatorShift); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int playANote(int pitch, float duration = 1.0f)
{
    ignoreUnused(pitch, duration);
    return{};
}

/*
 2)
 */
bool doILikeIT(int whatIsIt, bool isItNice = true)
{
    ignoreUnused(whatIsIt, isItNice);
    return {};
}

/*
 3)
 */
bool catchAFish(bool doIhaveARod = true, float baitType = 1.5f, bool areThereFish = true)
{
    ignoreUnused(doIhaveARod, baitType, areThereFish);
    return{};
}

/*
 4)
 */
void watchTV(bool switchedOn = true, int channelNo = 1, float speakerVolume = 1.0f)
{
    ignoreUnused(switchedOn, channelNo, speakerVolume);
}

/*
 5)
 */
double measureMyHeight(int person = 1, char units = 'c')
{
    ignoreUnused(measureMyHeight, person, units);
    return {};
}

/*
 6)
 */
int lengthOfPandemic(bool vaccineExists = false, float rFactor = 1.0f, float populationDensity = 1000.0f)
{
    ignoreUnused(vaccineExists, rFactor, populationDensity);
    return{};
}

/*
 7)
 */
void doIlikeThisSong(int musicGenre, int myFavouriteGenre = 5, bool isItGood = true)
{
    ignoreUnused(musicGenre, myFavouriteGenre, isItGood);
}

/*
 8)
 */
float lengthOfJump(float runSpeed = 0.0f, float jumpHeight = 0.0f, float jumperWeight = 0.0f)
{
    ignoreUnused(runSpeed, jumpHeight, jumperWeight);
    return {};
}

/*
 9)
 */
float distanceDriven(float speedOfTravel = 0.0f, float timeOfTravel = 0.0f)
{
    ignoreUnused(speedOfTravel, timeOfTravel);
    return {};
}

/*
 10)
 */
bool isThisTheLastOne(int lengthOfList = 10, int listCount = 1)
{
    ignoreUnused(lengthOfList, listCount);
    return{};
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto notePlayed = playANote(440, 1.0f);
    //2)
    auto amIHappy = doILikeIT(5, true);
    //3)
    auto canWeEatFish = catchAFish(true, 2.0f, false);
    //4)
    watchTV(true, 100, 9.0f);
    //5)
    auto myHeight = measureMyHeight(5, 'i');
    //6)
    auto howLongIndoors = lengthOfPandemic(false, 0.9f, 1000.0f);
    //7)
    doIlikeThisSong(4, 4, false);
    //8)
    auto howFarDidIJump = lengthOfJump(10.0f, 1.5f, 85.4f);
    //9)
    auto howFarDriven = distanceDriven(56.5f, 1834.6f);
    //10)
    auto amIDone = isThisTheLastOne(10, 10);
    
    ignoreUnused(carRented, notePlayed, amIHappy, canWeEatFish, myHeight, howLongIndoors, howFarDidIJump, howFarDriven, amIDone);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
