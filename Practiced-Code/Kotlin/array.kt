fun main() {
    arrayOfString()
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
