#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <sstream>
using std::stringstream;

#include <string>
using std::string;

int main(){
    int opcion = 0;
    while (opcion != 3){
        //menu
        cout << "****MENU****" << endl;
        cout << "1) Crear una Clase" << endl
             << "2) Crear un makefile" << endl
             << "3) Salir" << endl
             << "Ingrese la opcion: ";
        cin >> opcion;
        switch (opcion){
        case 1:{
            string salida, nombre_clase, salida_cpp;
            stringstream stream, stream_cpp;
            int numero_clases, numero_variables;
            cout << "Ingrese el nombre de la clase: ";
            cin >> nombre_clase;
            stream << "#ifndef " << nombre_clase << "_H\n#define " << nombre_clase << "_H\n";
            stream_cpp << "#include '" << nombre_clase << ".h'\n"
                       << "\n"
                       << nombre_clase << "::" << nombre_clase << "(){\n}\n";
            //creacion de clases dentro de la clase
            cout << "Cuantas clases contiene?: ";
            cin >> numero_clases;
            if (numero_clases > 0){
                stringstream stream2;
                for (int i = 1; i <= numero_clases; i++){
                    string otra_clase;
                    cout << "Ingrese nombre de la clase " << i << ": ";
                    cin >> otra_clase;
                    stream2 << "\n#include "
                            << "'" << otra_clase << ".h'";
                }
                string salida2 = stream2.str();
                stream << salida2 << "\n";
            }
            //fin creacion de clases dentro de la clase
            stream << "\nclass " << nombre_clase << "{\n"
                   << "private:\n";
            //stream_cpp<<"\n"<<nombre_clase<<"::"<<nombre_clase<<"(";
            //creacion de variables
            cout << "Cuantas variables tiene la clase?: ";
            cin >> numero_variables;
            stringstream stream3, stream4, stream5, stream2cpp, stream3cpp, stream4cpp;
            stream2cpp << nombre_clase << "::" << nombre_clase << "(";
            stream4 << nombre_clase << "();\n"
                    << nombre_clase << "(";
            for (int i = 0; i < numero_variables; i++){
                string nombre_variable;
                string tipo_variable;
                cout << "Ingrese el tipo de la variable: ";
                cin >> tipo_variable;
                cout << "Ingrese el nombre de la variable: ";
                cin >> nombre_variable;
                //constructor sobre cargado
                if (i == numero_variables - 1){
                    stream4 << tipo_variable << ");\n";
                    stream2cpp << tipo_variable << " " << nombre_variable << "){\n";
                    stream3cpp << "this->" << nombre_variable << "=" << nombre_variable << "\n}";
                }
                else{
                    stream4 << tipo_variable << ", ";
                    stream2cpp << tipo_variable << " " << nombre_variable << " ,";
                    stream3cpp << "this->" << nombre_variable << "=" << nombre_variable << "\n";
                }
                //fin constructor sobrecargado
                //metodos
                stream5 << "\n"
                        << tipo_variable << " get" << nombre_variable << "();\n"
                        << "void set" << nombre_variable << "(" << tipo_variable << ");\n";
                //fin metodos
                //constructos sobrecargado cpp

                //fin constructor sobrecargado
                //metodos cpp
                stream4cpp << "\n"
                           << tipo_variable << " " << nombre_clase << "::"
                           << "get" << nombre_variable << "(){\n"
                           << "return " << nombre_variable << ";\n"
                           << "}\n"
                           << "void " << nombre_clase << "::"
                           << "set" << nombre_variable << "(" << tipo_variable << " " << nombre_variable << "){\n"
                           << "this->" << nombre_variable << "=" << nombre_variable << ";\n"
                           << "}\n";
                //fin metodos cpp
                stream3 << tipo_variable << " " << nombre_variable << ";\n";
            }
            string salida3 = stream3.str();
            string salida4 = stream4.str();
            string salida5 = stream5.str();
            string salida2cpp = stream2cpp.str();
            string salida3cpp = stream3cpp.str();
            string salida4cpp = stream4cpp.str();
            stream_cpp << salida2cpp << "\n"
                       << salida3cpp << salida4cpp << "string " << nombre_clase << "::toString(){\nstring " << nombre_clase << "Str;\n"
                       << nombre_clase << "Str=;\nreturn " << nombre_clase << "Str;\n}";
            stream << salida3 << "\npublic:"
                   << "\n"
                   << salida4 << salida5 << "\nstring toString();\n};\n#endif";
            //fin de creacion de variables
            salida = stream.str();
            salida_cpp = stream_cpp.str();
            cout << endl
                 << "**********CLASE.H***********" << endl;
            cout << endl
                 << endl
                 << salida << endl
                 << endl;
            cout << "**********CLASE.CPP***********" << endl
                 << endl;
            cout << endl
                 << endl
                 << salida_cpp << endl
                 << endl;
        }
        break;
        case 2:{
            int numClases;
            cout<<"Cuantas clases hay?: ";
            cin>>numClases;
            stringstream stream,stream2,stream3,stream4;
            stream<<"run: Main.o ";
            stream2<<"g++ Main.o ";
            stream3<<"Main.o: Main.cpp ";
            for (int i = 0; i < numClases; i++){
                string clase;
                cout<<"Ingrese nombre de la clase: ";
                cin>>clase;
                stream<<clase<<".o ";
                stream2<<clase<<".o ";
                stream3<<clase<<".h ";
                stream4<<clase<<".o: "<<clase<<".h "<<clase<<".cpp\n"
                <<"g++ -c "<<clase<<".cpp\n";
            }
            string salida;
            string salida2=stream2.str();
            string salida3=stream3.str();
            string salida4=stream4.str();
            stream<<"\n"<<salida2<<"-o run\n"<<salida3<<"\n"<<"g++ -c Main.cpp\n"<<salida4<<"\n";
            salida=stream.str();
            cout<<endl<<salida<<endl;
        }
        break;
        }
    }
    return 0;
}