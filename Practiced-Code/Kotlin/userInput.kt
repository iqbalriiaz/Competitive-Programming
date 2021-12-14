fun main()
{
    userInputToUppercase()
    userInputToLowerCase()

}


fun userInputToUppercase() {
    /*readLine() library function
     returns a string value
     which can be null,
     so making sure it's not null*/
    val userInput = readLine()
    if (userInput != null) {
        println(userInput.uppercase())
        println(userInput.lowercase())
    }
}

fun userInputToLowerCase() {
    /*readLine() library function
     returns a string value
     which can be null,
     so making sure it's not null*/
    val userInput = readLine()
    if (userInput != null) {
        println(userInput.lowercase())
    }
}