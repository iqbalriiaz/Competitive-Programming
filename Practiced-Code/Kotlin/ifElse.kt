fun main()
{
    userInputToUppercase()
    stringInput()
    howOld()
}

fun userInputToUppercase() {
    /*readLine() library function
     returns a string value
     which can be null*/
    val userInput = readLine()
    if (userInput != null) {
        println(userInput.uppercase())
    }
}
fun stringInput()
{
    val userInput = readLine()?.toInt()
    if(userInput != null){
        if(userInput.toInt()>=50) {
            println(userInput.toInt() - 50)
        }
        else{
            println("userInput is less than 50")
        }
    }
}
fun howOld()
{
    println("Enter Your Age")
    val age = readLine()?.toInt()

    if (age != null) {
        if(age>=0) {
                if (age < 8) {
                println("You are a child")
                }
                else if (age in 8..18) {
                    println("You are a teenager")
                } else if (age in 19..34) {
                    println("You are young")
                } else if (age in 35..70) {
                    println("You are getting old")
                } else if (age > 70){
                    println("You are a too old")
                }
            }
            else{
                println("Age can't be negative")
            }
        }
    }
