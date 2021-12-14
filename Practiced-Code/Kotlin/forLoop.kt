fun main() {

    powerOf()
}

fun powerOf()
{

    var finalResult=1
    println("Enter the value of base:")
    val base = readLine()?.toInt()
    println("Enter the value of power:")
    var power = readLine()?.toInt()

    for(i in 1 ..power!!)
    {
        val value = finalResult
        finalResult *= base!!
    }
    println("$base to the power $power is: $finalResult ")


}
