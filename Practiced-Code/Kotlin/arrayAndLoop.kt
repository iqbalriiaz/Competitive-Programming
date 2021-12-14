fun main() {
//    arrayOfString()
//    decreaseValueFromUserGivenRange()
    powerOf()
}

fun arrayOfString() {
    val myArray = arrayOf("I", "am", "Riaz")
    val arrayLength = myArray.size
    var i = 0
    while (i < arrayLength) {
        println(myArray[i])
        i++
    }
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

fun powerOf()
{
    var result=1
    var finalResult=0
    println("Enter the base number:")
    val base = readLine()?.toInt()
    println("Enter the base number:")
    var power = readLine()?.toInt()

    var i = power
    if (i != null) {
        while (i>=0){
            result = result.times(power!!)
            i--
        }
        if (base != null) {
            finalResult= base.times(result)
        }
        println("$base to the power $power is: $finalResult ")

    }
}
