import CTest
import Foundation

var message: String? = String(cString: getMessage("12345678910111213141516171819202122232425jdfghdhghgdfhgdhghdfghdfhgdfgd"))
let msg: String? = String(cString: getLambda())

func printAddress<T>(of pointer: UnsafePointer<T>) {
    print(pointer)
}
 
printAddress(of: &message)
print(msg ?? 0)