# Simple-number-guessing-game

<h3 id="intro"> About the program</h3>

Here are two versions of simple number guessing game written by C and python respectively. <br />

For that written in C, open the compiled program, it prints "guess a No. Maximum guess No. is n", the n, maximum guess number is controlled by maxGuess, default is 10. The number to guess will be generated by using the present time as the seed. It will generate an int number between 0 to maxNumber, default is 10. To guess the number, type the number and press enter. If the number is correct, it prints "correct, goodbye!" then sleep for 5 seconds and returns. If not, it prints "try again. x guess remains" where x is the remained guess number. When x is 0, it prints "all try allowed used, byebye" sleep for 5 seconds and return.
<br /><br />


For that written in python, must sure python 3 (3.7 tested) is installed first. Then open it. It will first ask for minimum then maximum int number, input respectively. Then it will random generate a int number between them and themselfs. Then, user can guess it by inputing int. If guess correct, "Well done. You got it in {} tries!" will be printed
