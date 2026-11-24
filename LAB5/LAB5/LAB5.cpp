#include "pch.h"
#include <iostream>

using namespace System;
using namespace System::Globalization;
using namespace System::Text;


double ReadDouble(String^ message)
{
    double value;

    while (true)
    {
        Console::Write(message);

        String^ text = Console::ReadLine()->Trim();

        text = text->Replace(',', '.');

        if (Double::TryParse(
            text,
            NumberStyles::Float,
            CultureInfo::InvariantCulture,
            value))
        {
            return value;
        }

        Console::WriteLine("Error! Enter correct value.");
    }
}

int ReadPositiveInt(String^ message)
{
    int value;

    while (true)
    {
        Console::Write(message);

        if (Int32::TryParse(Console::ReadLine(), value) && value > 0)
        {
            return value;
        }

        Console::WriteLine("Error! Enter positive integer.");
    }
}

void PrintMatrix(array<double, 2>^ matrix)
{
    int rows = matrix->GetLength(0);
    int columns = matrix->GetLength(1);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            Console::Write("{0,10:F2}", matrix[i, j]);
        }

        Console::WriteLine();
    }
}

void Task1()
{
    Console::Clear();

    Console::WriteLine("ZAV 1");
    Console::WriteLine("Calc electric field strength");
    Console::WriteLine("E = F / q");
    Console::WriteLine();

    int n = ReadPositiveInt("Enter number of measurements n: ");

    array<double>^ force = gcnew array<double>(n);
    array<double>^ charge = gcnew array<double>(n);
    array<double>^ field = gcnew array<double>(n);

    Console::WriteLine();
    Console::WriteLine("Entering experimental data:");

    for (int i = 0; i < n; i++)
    {
        Console::WriteLine();
        Console::WriteLine("Measurement {0}", i + 1);

        while (true)
        {
            force[i] = ReadDouble("F = ");

            if (force[i] >= 0)
            {
                break;
            }

            Console::WriteLine(
                "Error! Force value cant be negative."
            );
        }

        while (true)
        {
            charge[i] = ReadDouble("q = ");

            if (charge[i] > 0)
            {
                break;
            }

            Console::WriteLine(
                "Error! Charge q must be > than 0."
            );
        }

        // Перевірка q > 0 вище виключає ділення на нуль; результат зберігається в масиві field.
        field[i] = force[i] / charge[i];
    }

    Console::WriteLine();
    Console::WriteLine("Results");
    Console::WriteLine();

    Console::WriteLine(
        "{0,-5}{1,-18}{2,-18}{3,-18}",
        "N",
        "F",
        "q",
        "E"
    );

    Console::WriteLine(
        "-----------------------------------------------------------"
    );

    for (int i = 0; i < n; i++)
    {
        Console::WriteLine(
            "{0,-5}{1,-18:F6}{2,-18:E6}{3,-18:E6}",
            i + 1,
            force[i],
            charge[i],
            field[i]
        );
    }

    Console::WriteLine();
    Console::WriteLine("Press Enter to return to menu...");
    Console::ReadLine();
}

void Task2()
{
    Console::Clear();

    Console::WriteLine("ZAV 2");
    Console::WriteLine("Matrix Transposition");
    Console::WriteLine();

    int n = ReadPositiveInt(
        "Enter the size of square matrix N: "
    );

    array<double, 2>^ matrix =
        gcnew array<double, 2>(n, n);

    Console::WriteLine();
    Console::WriteLine("Entering matrix elements:");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            String^ message =
                "A[" +
                (i + 1).ToString() +
                "," +
                (j + 1).ToString() +
                "] = ";

            matrix[i, j] = ReadDouble(message);
        }
    }

    Console::WriteLine();
    Console::WriteLine("Initial matrix:");
    Console::WriteLine();

    PrintMatrix(matrix);

    // Обмін лише над головною діагоналлю: кожна пара елементів міняється місцями один раз.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double temp = matrix[i, j];

            matrix[i, j] = matrix[j, i];
            matrix[j, i] = temp;
        }
    }

    Console::WriteLine();
    Console::WriteLine("Transposed matrix:");
    Console::WriteLine();

    PrintMatrix(matrix);

    Console::WriteLine();
    Console::WriteLine("Press Enter to return to menu...");
    Console::ReadLine();
}

int main(array<String^>^ args)
{
    Console::OutputEncoding = Encoding::UTF8;
    Console::InputEncoding = Encoding::UTF8;

    while (true)
    {
        Console::Clear();

        Console::WriteLine("LAB No5");
        Console::WriteLine("V13");
        Console::WriteLine();
        Console::WriteLine("1 - ZAV 1");
        Console::WriteLine("2 - ZAV 2");
        Console::WriteLine("0 - Exit");
        Console::WriteLine();

        Console::Write("Choise: ");

        String^ choice = Console::ReadLine();

        if (choice == "1")
        {
            Task1();
        }
        else if (choice == "2")
        {
            Task2();
        }
        else if (choice == "0")
        {
            break;
        }
        else
        {
            Console::WriteLine();
            Console::WriteLine("Invalid menu item.");
            Console::WriteLine("Press Enter...");
            Console::ReadLine();
        }
    }

    return 0;
}