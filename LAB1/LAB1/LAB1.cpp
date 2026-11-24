#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    Console::WriteLine(L"Zav 1==============================");
    Console::WriteLine();

    const double L = 25 + 10;
    const double W = 25 + 5;
    const double C = 25;

    double area = L * W;
    double totalPrice = area * C;

    Console::WriteLine(L"Dovzhyna kimnaty: {0:F2} m", L);
    Console::WriteLine(L"Shyryna kimnaty: {0:F2} m", W);
    Console::WriteLine(L"Price za m2: {0:F2} grn", C);
    Console::WriteLine(L"Area kimnaty: {0:F2} m2", area);
    Console::WriteLine(L"Total price: {0:F2} grn", totalPrice);

    Console::WriteLine();

    Console::WriteLine(L"Zav 2==============================");
    Console::WriteLine();
    Console::WriteLine(L"Merge 2 lines");
    Console::WriteLine();

    Console::Write(L"Enter first line: ");
    String^ firstString = Console::ReadLine();
    Console::Write(L"Enter second line: ");
    String^ secondString = Console::ReadLine();

    String^ combinedString = firstString + L" " + secondString;

    Console::WriteLine();
    Console::WriteLine(L"Merged line: {0}", combinedString);
    Console::WriteLine();

    Console::WriteLine(L"Zav 3==============================");
    Console::WriteLine();
    Console::WriteLine(L"Comparing two strings");
    Console::WriteLine();

    Console::Write(L"Enter first string: ");
    String^ compareString1 = Console::ReadLine();

    Console::Write(L"Enter second string: ");
    String^ compareString2 = Console::ReadLine();

    int compareResult = String::Compare(compareString1, compareString2);

    Console::WriteLine();

    if (compareResult < 0)
    {
        Console::WriteLine(
            L"First line is smaller than second."
        );
    }
    else if (compareResult > 0)
    {
        Console::WriteLine(
            L"First line is larger than second."
        );
    }
    else
    {
        Console::WriteLine(
            L"Lines are equal."
        );
    }

    Console::WriteLine(L"Result: {0}", compareResult);
    Console::WriteLine();

    Console::WriteLine(L"Zav 4==============================");
    Console::WriteLine();
    Console::WriteLine(L"Adding 'begin' and 'end'");
    Console::WriteLine();

    Console::Write(L"Enter string: ");
    String^ originalString = Console::ReadLine();

    String^ modifiedString =
        L"begin " + originalString + L" end";

    Console::WriteLine();
    Console::WriteLine(L"Generated string: {0}", modifiedString);
    Console::WriteLine(
        L"Length of generated string: {0}",
        modifiedString->Length
    );
    Console::WriteLine();

    Console::WriteLine(L"Zav 5==============================");
    Console::WriteLine();
    Console::WriteLine(L"String in reverse order");
    Console::WriteLine();

    Console::Write(L"Enter string: ");
    String^ reverseSource = Console::ReadLine();

    String^ reversedString = L"";

    for (int i = reverseSource->Length - 1; i >= 0; i--)
    {
        reversedString += reverseSource[i];
    }

    Console::WriteLine();
    Console::WriteLine(L"Entering line: {0}", reverseSource);
    Console::WriteLine(L"Reversed line: {0}", reversedString);
    Console::WriteLine();

    Console::WriteLine(L"Zav 6==============================");
    Console::WriteLine();
    Console::WriteLine(L"Finding the longer line");
    Console::WriteLine();

    Console::Write(L"Enter first line: ");
    String^ lengthString1 = Console::ReadLine();

    Console::Write(L"Enter second line: ");
    String^ lengthString2 = Console::ReadLine();

    int length1 = lengthString1->Length;
    int length2 = lengthString2->Length;

    Console::WriteLine();
    Console::WriteLine(
        L"First line length: {0} symbols",
        length1
    );
    Console::WriteLine(
        L"Second line length: {0} symbols",
        length2
    );

    if (length1 > length2)
    {
        Console::WriteLine(L"First line is longer.");
    }
    else if (length1 < length2)
    {
        Console::WriteLine(L"Second line is longer.");
    }
    else
    {
        Console::WriteLine(L"Lines have same length.");
    }

    return 0;
}
