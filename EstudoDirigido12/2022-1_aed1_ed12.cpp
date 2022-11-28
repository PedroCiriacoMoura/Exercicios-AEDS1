#include <iostream>
#include <fstream>
#include "io.hpp"
#include <iomanip>

using namespace std;

template <typename T>
class Matrix
{
private: // area reservada
    T optional;
    int rows;
    int columns;
    T **data;

public: // area aberta
    Matrix()
    {
        // definir valores iniciais
        this->rows = 0;
        this->columns = 0;
        // sem reservar area
        data = nullptr;
    } // end constructor
    Matrix(int rows, int columns, T initial)
    {
        // definir dado local
        bool OK = true;
        // definir valores iniciais
        this->optional = initial;
        this->rows = rows;
        this->columns = columns;
        // reservar area
        data = new T *[rows];
        if (data != nullptr)
        {
            for (int x = 0; x < rows; x = x + 1)
            {
                data[x] = new T[columns];
                OK = OK && (data[x] != nullptr);
            } // end for
            if (!OK)
            {
                data = nullptr;
            } // end if
        }     // end if
    }         // end constructor
    ~Matrix()
    {
        if (data != nullptr)
        {
            for (int x = 0; x < rows; x = x + 1)
            {
                delete (data[x]);
            } // end for
            delete (data);
            data = nullptr;
        } // end if
    }     // end destructor ( )
    void set(int row, int column, T value)
    {
        if (row < 0 || row >= rows ||
            column < 0 || column >= columns)
        {
            cout << "\nERROR: Invalid position.\n";
        }
        else
        {
            data[row][column] = value;
        } // end if
    }     // end set ( )
    T get(int row, int column)
    {
        T value = optional;
        if (row < 0 || row >= rows ||
            column < 0 || column >= columns)
        {
            cout << "\nERROR: Invalid position.\n";
        }
        else
        {
            value = data[row][column];
        } // end if
        return (value);
    } // end get ( )

    void print()
    {
        cout << endl;
        for (int x = 0; x < rows; x = x + 1)
        {
            for (int y = 0; y < columns; y = y + 1)
            {
                cout << data[x][y] << "\t";
            } // end for
            cout << endl;
        } // end for
        cout << endl;
    } // end print ( )

    void read()
    {
        cout << endl;
        for (int x = 0; x < rows; x = x + 1)
        {
            for (int y = 0; y < columns; y = y + 1)
            {
                cout << setw(2) << x << ", "
                     << setw(2) << y << " : ";
                cin >> data[x][y];
            } // end for
        }     // end for
        cout << endl;
    } // end read ( )

    void fprint(string fileName)
    {
        ofstream afile;
        afile.open(fileName);
        afile << rows << endl;
        afile << columns << endl;
        for (int x = 0; x < rows; x = x + 1)
        {
            for (int y = 0; y < columns; y = y + 1)
            {
                afile << data[x][y] << endl;
            } // end for
        }     // end for
        afile.close();
    } // end fprint ( )

    void fread(string fileName)
    {
        ifstream afile;
        int m = 0;
        int n = 0;
        afile.open(fileName);
        afile >> m;
        afile >> n;
        if (m <= 0 || n <= 0)
        {
            cout << "\nERROR: Invalid dimensions for matrix.\n"
                 << endl;
        }
        else
        {
            // guardar a quantidade de dados
            rows = m;
            columns = n;
            // reservar area
            data = new T *[rows];
            for (int x = 0; x < rows; x = x + 1)
            {
                data[x] = new T[columns];
            } // end for
            // ler dados
            for (int x = 0; x < rows; x = x + 1)
            {
                for (int y = 0; y < columns; y = y + 1)
                {
                    afile >> data[x][y];
                } // end for
            }     // end for
        }         // end if
        afile.close();
    } // end fread ( )

    Matrix &operator=(const Matrix<T> other)
    {
        if (other.rows == 0 || other.columns == 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            this->rows = other.rows;
            this->columns = other.columns;
            this->data = new T *[rows];
            for (int x = 0; x < rows; x = x + 1)
            {
                this->data[x] = new T[columns];
            } // end for
            for (int x = 0; x < this->rows; x = x + 1)
            {
                for (int y = 0; y < this->columns; y = y + 1)
                {
                    data[x][y] = other.data[x][y];
                } // end for
            }     // end for
        }         // end if
        return (*this);
    } // end operator= ( )

    bool isZeros()
    {
        bool result = false;
        int x = 0;
        int y = 0;
        if (rows > 0 && columns > 0)
        {
            result = true;
            while (x < rows && result)
            {
                y = 0;
                while (y < columns && result)
                {
                    result = result && (data[x][y] == 0);
                    y = y + 1;
                } // end for
                x = x + 1;
            } // end while
        }     // end if
        return (result);
    } // end isZeros ( )

    bool operator!=(const Matrix<T> other)
    {
        bool result = false;
        int x = 0;
        int y = 0;
        if (other.rows == 0 || rows != other.rows ||
            other.columns == 0 || columns != other.columns)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            x = 0;
            while (x < rows && !result)
            {
                y = 0;
                while (y < columns && !result)
                {
                    result = (data[x][y] != other.data[x][y]);
                    y = y + 1;
                } // end for
                x = x + 1;
            } // end for
        }     // end if
        return (result);
    } // end operator!= ( )

    Matrix &operator-(const Matrix<T> other)
    {
        static Matrix<T> result(1, 1, 0);
        int x = 0;
        int y = 0;
        if (other.rows == 0 || rows != other.rows ||
            other.columns == 0 || columns != other.columns)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            result.rows = rows;
            result.columns = other.columns;
            result.data = new T *[result.rows];
            for (int x = 0; x < result.rows; x = x + 1)
            {
                result.data[x] = new T[result.columns];
            } // end for
            for (int x = 0; x < result.rows; x = x + 1)
            {
                for (int y = 0; y < result.columns; y = y + 1)
                {
                    result.data[x][y] = data[x][y] - other.data[x][y];
                } // end for
            }     // end for
        }         // end if
        return (result);
    } // end operator- ( )

    Matrix &operator*(const Matrix<T> other)
    {
        static Matrix<T> result(1, 1, 0);
        int x = 0;
        int y = 0;
        int z = 0;
        int sum = 0;
        if (rows <= 0 || columns == 0 ||
            other.rows <= 0 || other.columns == 0 ||
            columns != other.rows)
        {
            cout << endl
                 << "ERROR: Invalid data." << endl;
            result.data[0][0] = 0;
        }
        else
        {
            result.rows = rows;
            result.columns = other.columns;
            result.data = new T *[result.rows];
            for (int x = 0; x < result.rows; x = x + 1)
            {
                result.data[x] = new T[result.columns];
            } // end for
            for (x = 0; x < result.rows; x = x + 1)
            {
                for (y = 0; y < result.columns; y = y + 1)
                {
                    sum = 0;
                    for (z = 0; z < columns; z = z + 1)
                    {
                        sum = sum + data[x][z] * other.data[z][y];
                    } // end for
                    result.data[x][y] = sum;
                } // end for
            }     // end for
        }         // end if
        return (result);
    } // end operator* ( )

    const int getRows()
    {
        return (rows);
    } // end getRows ( )
    const int getColumns()
    {
        return (columns);
    } // end getColumns ( )

    // Exemplo1212

    Matrix<T> escalar(int constante)
    {
        Matrix<T> resultado(rows, columns, 0);
        int x = 0;
        int y = 0;
        while (x < rows)
        {
            y = 0;
            while (y < columns)
            {
                resultado.data[x][y] = data[x][y] * constante;
                y++;
            }

            x++;
        }
        return resultado;
    }

    // Exemplo1213

    bool identidade()
    {
        bool resultado = true;
        int x = 0;
        int y = 0;
        while (resultado && x < rows)
        {
            y = 0;
            while (resultado && y < columns)
            {
                if ((x == y && data[x][y] != 1) || (x != y && data[x][y] != 0))
                {
                    resultado = false;
                }
            }
        }
        return resultado;
    }

    // Exemplo1214

    bool operator==(const Matrix<T> matriz2)
    {
        bool resultado = true;
        if (rows != matriz2.rows || columns != matriz2.columns)
        {
            resultado = false;
        }
        for (int x = 0; resultado && x < rows; x++)
        {
            for (int y = 0; resultado && y < columns; y++)
            {
                resultado = data[x][y] == matriz2.data[x][y];
            }
        }
        return resultado;
    }

    // Exemplo1215

    Matrix<T> operator+(const Matrix<T> matriz2)
    {
        Matrix<T> resultado(rows, columns, 0);
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                resultado.data[x][y] = data[x][y] + matriz2.data[x][y];
            }
        }
        return resultado;
    }

    // Exemplo1216

    void somarlinhas(int linha1, int linha2, int constante)
    {
        int x = 0;
        while (x < columns)
        {
            data[linha1][x] += data[linha2][x] * constante;
            x++;
        }
    }

    // Exemplo1217

    void somarcolunas(int coluna1, int coluna2, int constante)
    {
        int x = 0;
        while (x < rows)
        {
            data[x][coluna1] += data[x][coluna2] * constante;
            x++;
        }
    }

    // Exemplo1218

    int procurarlinhas(int procurar)
    {
        int x = 0;
        int y;
        while (x < rows)
        {
            y = 0;
            while (y < columns)
            {
                if (data[x][y] == procurar)
                {
                    return x;
                }
                y++;
            }
            x++;
        }
        return -1;
    }

    // Exemplo1219

    int procurarcolunas(int procurar)
    {
        int x = 0;
        int y;
        while (x < rows)
        {
            y = 0;
            while (y < columns)
            {
                if (data[x][y] == procurar)
                {
                    return y;
                }
                y++;
            }
            x++;
        }
        return -1;
    }

    // Exemplo1220

    void transpor()
    {
        int x = 0;
        int y = 0;
        cout << endl;
        while (x < columns)
        {
            y = 0;
            while (y < rows)
            {
                cout << data[y][x] << " ";
                y++;
            }
            cout << endl;
            x++;
        }
    }

}; // end class

void funcao11(int linhas, int colunas)
{
    int menor = 0;
    cout << "\nDigite o menor valor: ";
    cin >> menor;
    int maior = 0;
    cout << "\nDigite o maior valor: ";
    cin >> maior;
    Matrix<int> *matriz = new Matrix<int>(linhas, colunas, 0);

    srand(time(NULL));
    int x = 0;
    int y = 0;
    while (x < linhas)
    {
        y = 0;
        while (y < colunas)
        {
            matriz->set(x, y, menor + rand() % (maior - menor));
            y++;
        }
        x++;
    }
    matriz->fprint("Exemplo1211.txt");
}
void method11()
{
    int x, y;
    cout << "\nDigite o numero de linhas: ";
    cin >> x;
    cout << "\nDigite o numero de colunas: ";
    cin >> y;
    funcao11(x, y);
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method12()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    int a = 0;
    cout << "\nDigite a constante a ser utilizada: ";
    cin >> a;
    Matrix<int> resultado = matriz->escalar(a);
    resultado.print();
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method13()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    bool resultado = matriz->identidade();
    if (resultado)
    {
        cout << "\nA matriz eh identidade";
    }
    else
    {
        cout << "\nA matriz nao eh identidade";
    }
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method14()
{
    Matrix<int> *matriz = new Matrix<int>();
    Matrix<int> *matriz2 = new Matrix<int>();
    matriz->fread("ED12.txt");
    matriz2->fread("ED12.txt");
    bool resultado = *matriz == *matriz2;
    if (resultado)
    {
        cout << "\nAs 2 matrizes sao iguais";
    }
    else
    {
        cout << "\nAs 2 matrizes sao diferentes";
    }
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method15()
{
    Matrix<int> *matriz = new Matrix<int>();
    Matrix<int> *matriz2 = new Matrix<int>();
    matriz->fread("ED12.txt");
    matriz2->fread("ED12.txt");
    Matrix<int> resultado = *matriz + *matriz2;
    resultado.print();
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method16()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "\nDigite a constante a ser utilizada: ";
    cin >> a;
    cout << "\nDigite as linhas que irao ser somadas: ";
    cin >> b;
    cin >> c;
    matriz->somarlinhas(b, c, a);
    matriz->print();
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method17()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "\nDigite a constante a ser utilizada: ";
    cin >> a;
    cout << "\nDigite as colunas que irao ser somadas: ";
    cin >> b;
    cin >> c;
    matriz->somarcolunas(b, c, a);
    matriz->print();
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method18()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    int x;
    cout << "\nDigite um numero para ser procurado: ";
    cin >> x;
    int resultado = matriz->procurarlinhas(x);
    if (resultado != -1)
    {
        cout << "\nO valor foi encontrado na linha: " << resultado;
    }
    else
    {
        cout << "\nO valor nao foi encontrado em nenhuma linha";
    }
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method19()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    int x;
    cout << "\nDigite um numero para ser procurado: ";
    cin >> x;
    int resultado = matriz->procurarcolunas(x);
    if (resultado != -1)
    {
        cout << "\nO valor foi encontrado na coluna: " << resultado;
    }
    else
    {
        cout << "\nO valor nao foi encontrado em nenhuma coluna";
    }
    getchar();
    IO_pause("\nAperte Enter para terminar");
}

void method20()
{
    Matrix<int> *matriz = new Matrix<int>();
    matriz->fread("ED12.txt");
    matriz->transpor();
    getchar();
    IO_pause("\nAperte Enter para terminar");
}
/**
 * Funcao principal
 * @return codigo de encerramento
 */
int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do
    {
        // identificar
        IO_println("\nED12 - Programa");

        // ler do teclado
        IO_println("\nOpcoes:");
        IO_println("\n0 - parar");
        IO_println("1 - Exemplo1211");
        IO_println("2 - Exemplo1212");
        IO_println("3 - Exemplo1213");
        IO_println("4 - Exemplo1214");
        IO_println("5 - Exemplo1215");
        IO_println("6 - Exemplo1216");
        IO_println("7 - Exemplo1217");
        IO_println("8 - Exemplo1218");
        IO_println("9 - Exemplo1219");
        IO_println("10 - Exemplo1220\n");

        x = IO_readint("Escolha a opcao que deseja: ");

        // testar valor
        switch (x)
        {
        case 0:
            // method00();
            break;
        case 1:
            method11();
            break;
        case 2:
            method12();
            break;
        case 3:
            method13();
            break;
        case 4:
            method14();
            break;
        case 5:
            method15();
            break;
        case 6:
            method16();
            break;
        case 7:
            method17();
            break;
        case 8:
            method18();
            break;
        case 9:
            method19();
            break;
        case 10:
            method20();
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        } // end switch
    } while (x != 0);

    // encerrar
    IO_pause("Aperte ENTER para terminar");
    return (0);
}