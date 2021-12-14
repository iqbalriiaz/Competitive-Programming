fun main() {
    decreaseValueFromUserGivenRange()
}

fun decreaseValueFromUserGivenRange(){
    println("Enter Upper Range Number:")
    var upperRange = readLine()?.toInt()
    println("Enter Lower Range Number:")
    val lowerRange = readLine()?.toInt()

    println("Let's count from $upperRange to $lowerRange:")
    if (upperRange != null) {
        while (upperRange>= lowerRange!!) {
            println(upperRange)
            upperRange--
        }
    }

}