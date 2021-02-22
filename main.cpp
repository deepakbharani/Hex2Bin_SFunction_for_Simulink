{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled1.ipynb",
      "provenance": [],
      "authorship_tag": "ABX9TyMuEmXz5i8xPX7HWjqQlIMm",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/deepakbharani/Hex2Bin_SFunction_for_Simulink/blob/main/main.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "ss7cE15JdbJr",
        "outputId": "5f0c22b0-26cc-4d6d-ad80-5816535aa9c8"
      },
      "source": [
        "%%writefile test.cpp\r\n",
        "\r\n",
        "// C++ program to convert Hexadecimal number to Binary\r\n",
        " \r\n",
        "#include <bits/stdc++.h>\r\n",
        "\r\n",
        "using namespace std;\r\n",
        " \r\n",
        "int main()\r\n",
        "{\r\n",
        "    char hexdec[100] = \"fb\";      // Hexadecimal number\r\n",
        "    string king;\r\n",
        "    long int i = 0;\r\n",
        "    // Run while for every text in Hex input\r\n",
        "    while (hexdec[i])\r\n",
        "     {\r\n",
        "        \r\n",
        "        switch (hexdec[i]) \r\n",
        "        {\r\n",
        "        case '0':\r\n",
        "            king = king + \"0000\";\r\n",
        "            break;\r\n",
        "        case '1':\r\n",
        "            king = king + \"0001\";\r\n",
        "            break;\r\n",
        "        case '2':\r\n",
        "            king = king + \"0010\";\r\n",
        "            break;\r\n",
        "        case '3':\r\n",
        "            king = king + \"0011\";\r\n",
        "            break;\r\n",
        "        case '4':\r\n",
        "            king = king + \"0100\";\r\n",
        "            break;\r\n",
        "        case '5':\r\n",
        "            king = king + \"0101\";\r\n",
        "            break;\r\n",
        "        case '6':\r\n",
        "            king = king + \"0110\";\r\n",
        "            break;\r\n",
        "        case '7':\r\n",
        "            king = king + \"0111\";\r\n",
        "            break;\r\n",
        "        case '8':\r\n",
        "            king = king + \"1000\";\r\n",
        "            break;\r\n",
        "        case '9':\r\n",
        "            king = king + \"1001\";\r\n",
        "            break;\r\n",
        "        case 'A':\r\n",
        "        case 'a':\r\n",
        "            king = king + \"1010\";\r\n",
        "            break;\r\n",
        "        case 'B':\r\n",
        "        case 'b':\r\n",
        "            king = king + \"1011\";\r\n",
        "            break;\r\n",
        "        case 'C':\r\n",
        "        case 'c':\r\n",
        "            king = king + \"1100\";\r\n",
        "            break;\r\n",
        "        case 'D':\r\n",
        "        case 'd':\r\n",
        "            king = king + \"1101\";\r\n",
        "            break;\r\n",
        "        case 'E':\r\n",
        "        case 'e':\r\n",
        "            king = king + \"1110\";\r\n",
        "            break;\r\n",
        "        case 'F':\r\n",
        "        case 'f':\r\n",
        "            king = king + \"1111\";\r\n",
        "            break;\r\n",
        "        default:\r\n",
        "            king = king + \"0000\";\r\n",
        "        }\r\n",
        "        i++;\r\n",
        "    \r\n",
        "    }\r\n",
        "    long double val = stoi(king);             // Convert String result into int\r\n",
        "    cout << \"\\nEquivalent Binary value is : \";\r\n",
        "    cout<< val;\r\n",
        "}"
      ],
      "execution_count": 162,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "Overwriting test.cpp\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Hhp0fyStdush",
        "outputId": "6decfe7c-806f-4d60-9d60-da368f05d1f0"
      },
      "source": [
        "%%script bash\r\n",
        "\r\n",
        "g++ test.cpp -o test\r\n",
        "ls -laX\r\n",
        "./test\r\n"
      ],
      "execution_count": 163,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "total 40\n",
            "drwxr-xr-x 1 root root  4096 Feb 16 16:35 sample_data\n",
            "-rwxr-xr-x 1 root root 17560 Feb 22 19:13 test\n",
            "drwxr-xr-x 1 root root  4096 Feb 22 19:13 .\n",
            "drwxr-xr-x 1 root root  4096 Feb 22 15:57 ..\n",
            "drwxr-xr-x 1 root root  4096 Feb 16 16:35 .config\n",
            "-rw-r--r-- 1 root root  1807 Feb 22 19:13 test.cpp\n",
            "\n",
            "Equivalent Binary value is : 1.1111e+07"
          ],
          "name": "stdout"
        }
      ]
    }
  ]
}