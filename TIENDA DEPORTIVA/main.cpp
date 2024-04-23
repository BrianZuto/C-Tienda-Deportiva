#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

bool validar(string clave){
	int longitud,i;
	bool t=true;
	longitud=clave.size();
	for(i=0; i<longitud; i++){
		if(clave[i]<48 || clave[i]>57){
			t=false;break;
		}
	}
return t;
}

//capturar clave de acceso
bool recibirclave(){
	int cantletras;
	bool comprob=true,respuesta;
	char a;
	string clave;
	
	cout<<"POR FAVOR DIGITE SU CLAVE DE ACCESO: "<<endl;
	cantletras=1;
do{
	a=getch();
	cout<<"*";
	clave+=a;
	cantletras++;
	
	if(cantletras==5){
		comprob=validar(clave);
		if(comprob==false){
			cantletras=1;
			system("cls");
			cout<<"DIGITE NUEVAMENTE LA CLAVE: "<<endl;
			clave="";
		}
	}
}while(cantletras<=4 || comprob==false);


//comprobar que la contraseñasea correcta
if(clave=="1234"){
respuesta=true;
}else respuesta=false;

return respuesta;
}

struct inventario{
	
	string nombre;
	int cantidad;
	double precio;
	int codigo;
	
};

const int MAX = 60;
int contador = 0;
inventario producto[MAX];

void crear (inventario producto[], int &contador){
	system("cls");
	if (contador<MAX) {
		
		inventario nuevoProducto;
		
		fflush(stdin);
		cout << "ingrese el nombre del nuevo producto: ";
		getline(cin, nuevoProducto.nombre);
		cout << "ingrese la cantidad en stock del nuevo producto: ";
		cin >> nuevoProducto.cantidad;
		cout << "ingrese el precio del nuevo producto: ";
		cin >> nuevoProducto.precio;
		cout << "ingrese el codigo del nuevo producto: ";
		cin >> nuevoProducto.codigo; 
		
		producto[contador]=nuevoProducto;
		contador++;
		
	} else {
		cout << "el limite de productos en el sistema ha sido alcanzado."<<endl;
	}
	
	
}

void editar (inventario producto[], int contador){
	
	system("cls");
	int codigo2;
    cout << "Ingrese el codigo del producto que desea editar: "<<endl;
    cin >> codigo2;

    for (int i = 0; i < contador; ++i) {
    	
        if (producto[i].codigo==codigo2) {
            cout << "Ingrese el nuevo nombre del implemento: " << endl;
            cin >> producto[i].nombre;

            cout << "Ingrese el nuevo precio del implemento: " << endl;
            cin >> producto[i].precio;

            cout << "Ingrese la nueva cantidad del implemento: " << endl;
            cin >> producto[i].cantidad;

            cout << "Implemento editado correctamente. " << endl;
            return;
        }else{
        	cout << "Implemento no encontrado, verifique el codigo del implemento." << endl;
		}
    }
	
	system("pause");
	
}

void lista (inventario producto[], int contador){
	
	system("cls");
	cout << "Lista de productos: \n"<<endl;
    for (int i = 0; i < contador; ++i) {
    	cout << (i+1)<<": \n" << endl;
        cout << "Nombre: "<< producto[i].nombre << endl;
        cout << "Precio: "<< producto[i].precio << endl;
        cout << "Cantidad: "<< producto[i].cantidad << endl;
        cout << "Codigo: " << producto[i].codigo << endl << endl;
		}
			system("pause");
}

void productosIniciales (inventario productoInicial[], int &contador){
	
	inventario nuevoProducto;
	//1
    nuevoProducto.nombre = "Gorra";
    nuevoProducto.precio = 30000;   
    nuevoProducto.cantidad = 3;   
    nuevoProducto.codigo = 1;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //2
    nuevoProducto.nombre = "Red de tenis portátil";
    nuevoProducto.precio = 205000;   
    nuevoProducto.cantidad = 5;   
    nuevoProducto.codigo = 2;      

    productoInicial[contador] = nuevoProducto;

    contador++;
    //3
    nuevoProducto.nombre = "Balón medicinal";
    nuevoProducto.precio = 130000;   
    nuevoProducto.cantidad = 20;   
    nuevoProducto.codigo = 3;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //4
    nuevoProducto.nombre = "Reloj deportivo";
    nuevoProducto.precio = 500000;   
    nuevoProducto.cantidad = 7;   
    nuevoProducto.codigo = 4;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //5
    nuevoProducto.nombre = "Pantalones cortos de baloncesto";
    nuevoProducto.precio = 70000;   
    nuevoProducto.cantidad = 30;   
    nuevoProducto.codigo = 5;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //6
    nuevoProducto.nombre = "Guantes de portero ";
    nuevoProducto.precio = 400000;   
    nuevoProducto.cantidad = 10;   
    nuevoProducto.codigo = 6;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //7
    nuevoProducto.nombre = "Step aeróbico ajustable";
    nuevoProducto.precio = 150000;   
    nuevoProducto.cantidad = 4;   
    nuevoProducto.codigo = 7;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //8
    nuevoProducto.nombre = "Bicicleta estática";
    nuevoProducto.precio = 900000;   
    nuevoProducto.cantidad = 5;   
    nuevoProducto.codigo = 8;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
    //9
    nuevoProducto.nombre = "Calcetines de compresión para correr";
    nuevoProducto.precio = 30000;   
    nuevoProducto.cantidad = 20;   
    nuevoProducto.codigo = 9;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
	//10
	nuevoProducto.nombre = "Cuerda de resistencia para entrenamiento";
    nuevoProducto.precio = 210000;   
    nuevoProducto.cantidad = 17;   
    nuevoProducto.codigo = 10;      

    productoInicial[contador] = nuevoProducto;
    
    contador++;
}




void buscarPorNombre(inventario producto[], int contador, string nombreProducto) {
    bool encontrado = false;
    
    

    for (int i = 0; i < contador; ++i) {
    	
        if (producto[i].nombre == nombreProducto) {
        	
        	int cantidadALlevar;
		    cout << "\n";
		   	cout << "CUANTOS IMPLEMENTOS DESEA LLEVAR: " << endl;
		   	cin >> cantidadALlevar;
        	
        	if(cantidadALlevar <= producto[i].cantidad ){
   				cout << "HAS COMPRADO: " << cantidadALlevar << producto[i].nombre << endl;
   				producto[i].cantidad = producto[i].cantidad - cantidadALlevar;
   				cout << "CANTIDAD ACTUAL DE "<< producto[i].nombre << " ES: " << producto[i].cantidad << endl;
	   		}else{
	   			cout << "CANTIDAD INVALIDA!" << endl;
	   			encontrado = true;
	   			break;
			}
	   		
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "IMPLEMENTO DEPORTIVO NO ENCONTRADO EN EL INVENTARIO.\n";
    }
}

void buscarPorCodigo(inventario producto[], int contador, int codigoProducto) {
    bool encontrado = false;
    
    

    for (int i = 0; i < contador; ++i) {
    	
        if (producto[i].codigo == codigoProducto) {
        	
        	int cantidadALlevar;
		    cout << "\n";
		   	cout << "CUANTOS IMPLEMENTOS DESEA LLEVAR: " << endl;
		   	cin >> cantidadALlevar;
        	
        	if(cantidadALlevar <= producto[i].cantidad ){
   				cout << "HAS COMPRADO: " << cantidadALlevar << producto[i].nombre << endl;
   				producto[i].cantidad = producto[i].cantidad - cantidadALlevar;
   				cout << "CANTIDAD ACTUAL DE " << producto[i].nombre << " ES DE: "<< producto[i].cantidad << endl;
	   		}else{
	   			cout << "CANTIDAD INVALIDA!" << endl;
	   			encontrado = true;
	   			break;
			}
	   		
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "IMPLEMENTO DEPORTIVO NO ENCONTRADO EN EL INVENTARIO.\n";
    }
}


void compraBuscarPorNombre(inventario producto[], int contador, string nombreProducto) {
    bool encontrado = false;
    
    

    for (int i = 0; i < contador; ++i) {
    	
        if (producto[i].nombre == nombreProducto) {
        	
        	int cantidadALlevar;
		    cout << "\n";
		   	cout << "CUANTOS IMPLEMENTOS DESEA AGREGAR: " << endl;
		   	cin >> cantidadALlevar;
        	
			cout << "HAS AGREGADO: " << cantidadALlevar << producto[i].nombre << endl;
			producto[i].cantidad = producto[i].cantidad + cantidadALlevar;
			cout << "CANTIDAD ACTUAL DE " << producto[i].nombre << " ES DE: " << producto[i].cantidad << endl;
	   		
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "IMPLEMENTO DEPORTIVO NO ENCONTRADO EN EL INVENTARIO.\n";
    }
}



void compraBuscarPorCodigo(inventario producto[], int contador, int codigoProducto) {
    bool encontrado = false;
    
    

    for (int i = 0; i < contador; ++i) {
    	
        if (producto[i].codigo == codigoProducto) {
        	
        	int cantidadALlevar;
		    cout << "\n";
		   	cout << "CUANTOS IMPLEMENTOS DESEA AGREGAR: " << endl;
		   	cin >> cantidadALlevar;
        	
			cout << "HAS AGREGADO: " << cantidadALlevar << producto[i].nombre << endl;
			producto[i].cantidad = producto[i].cantidad + cantidadALlevar;
			cout << "CANTIDAD ACTUAL DE " << producto[i].nombre << " ES DE: " << producto[i].cantidad << endl;
	   		
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "IMPLEMENTO DEPORTIVO NO ENCONTRADO EN EL INVENTARIO.\n";
    }
}


double sumaTotalPrecios(inventario producto[], int contador) {
    double suma = 0.0;
    for (int i = 0; i < contador; ++i) {
        suma += producto[i].precio * producto[i].cantidad;
    }
    return suma;
}

inventario encontrarImplementoMasEconomico(inventario producto[], int contador) {
    inventario masEconomico = producto[0];  // Suponemos que el primer producto es el más económico

    for (int i = 1; i < contador; ++i) {
        if (producto[i].precio < masEconomico.precio) {
            masEconomico = producto[i];  // Si encontramos un producto más económico, lo actualizamos
        }
    }

    return masEconomico;
}

inventario encontrarImplementoMasCostoso(inventario producto[], int contador) {
    inventario masCostoso = producto[0];  // Suponemos que el primer producto es el más costoso

    for (int i = 1; i < contador; ++i) {
        if (producto[i].precio > masCostoso.precio) {
            masCostoso = producto[i];  // Si encontramos un producto más costoso, lo actualizamos
        }
    }

    return masCostoso;
}

void listarImplementosCantidadMenorADiez(inventario producto[], int contador) {
    cout << "IMPLEMENTOS CON CANTIDAD MENOR A 10:" << endl;
    for (int i = 0; i < contador; ++i) {
        if (producto[i].cantidad < 10) {
            cout << "CODIGO: " << producto[i].codigo << endl;
            cout << "NOMBRE: " << producto[i].nombre << endl;
            cout << "PRECIO: " << producto[i].precio << endl;
            cout << "CANTIDAD: " << producto[i].cantidad << endl;
            cout << "------------------------" << endl;
        }
    }
}



int main()
{
	int opc,salir;
	bool respuesta;
	for(int i=1; i<5; i++){
	respuesta=recibirclave();
	
	if(respuesta){
		cout<<"CLAVE CORRECTA"<<endl;
		break;
	}else
		cout<<"CLAVE INCORRECTA"<<endl;
	}
	
	system("cls");
	productosIniciales(producto,contador);
	do
	{
		system("cls");
		system("color 3E");
		
		cout<<"======================================================================================================================="<<endl;
		cout<<"\n"<<endl;
		cout<<"\n\n                                         BIENVENIDO A LA TIENDA ONLINE SPORTS\n\n ";
		cout<<"\n"<<endl;
		cout<<"======================================================================================================================="<<endl;
		cout<<"\nDIGITE EL NUMERO DE LA OPCION A LA CUAL DESEA INGRESAR: "<<endl;
		cout<<"1. GESTION DE IMPLEMENTOS DEPORTIVOS. "<<endl;
		cout<<"2. TIENDA ONLINE"<<endl;
		cout<<"3. SALIR"<<endl;
		cout<<"======================================================================================================================="<<endl;
		cout<<"INGRESE UNA OPCION: ";
		
		cin>>opc;
		
		switch(opc)
		{
			case 1:
				{
					int opc2;
					int menPrincipal;
					do
					{
						system("cls");
						
						cout<<"========================================================================================================="<<endl;
						cout<<"\n"<<endl;
						cout<<"                                 GESTION DE IMPLEMENTOS DEPORTIVOS\n";
						cout<<"\n"<<endl;
						cout<<"========================================================================================================="<<endl;
						cout<<"1. CREAR IMPLEMENTO DEPORTIVO. "<<endl;
						cout<<"2. MODIFICAR IMPLEMENTO DEPORTIVO. "<<endl;
						cout<<"3. LISTAR TODOS LOS IMPLEMENTOS DEPORTIVOS EXISTENTES. "<<endl;
						cout<<"4. VOLVER AL MENU PRINCIPAL. "<<endl;
						cout<<"========================================================================================================="<<endl;
						cout<<"INGRESE UNA OPCION: ";
						cin>>opc2;
						
						switch(opc2)
						{
							case 1:
								{
									crear(producto, contador);
									system("pause");
									break;
								}
							case 2:
								{
									editar(producto, contador);
									
									break;
								}
							case 3:
								{
									lista(producto, contador);
								
									break;
								}
							case 4:
								{
									cout<<"======================================================================================================================="<<endl;
									cout<<"\n\nESTA SEGUR@ QUE DESEA VOLVER AL MENU PRINCIAL?\n\n ";
									cout<<"1. SI\n";
									cout<<"2. NO\n";
									cout<<"======================================================================================================================="<<endl;
									cin>>menPrincipal;
									
									if(menPrincipal==1)
									{
										return main();
									}
									
									
									system("pause");
									break;
								}
								
						}//switch sub menu 1
						
					}while(opc2!= 4);
					
					
					system("pause");
					break;
				}
				
			case 2:
				{
					int opc3;
					int menPrincipal2;
					do{
					
					
					system("cls");
					cout<<"==========================================================================================================="<<endl;
					cout<<"\n"<<endl;
					cout<<"                                 TIENDA ONLINE"<<endl;
					cout<<"\n"<<endl;
					cout<<"==========================================================================================================="<<endl;
					cout<<"1. VENTA DE IMPLEMENTOS DEPORTIVOS A CLIENTES. "<<endl;
					cout<<"2. COMPRA DE IMPLEMENTOS DEPORTIVOS A PROVEEDORES"<<endl;
					cout<<"3. VALOR TOTAL DE LOS IMPLEMENTOS DEPORTIVOS DE LA TIENDA. "<<endl;
					cout<<"4. IMPLEMENTO DEPORTIVO MAS COSTOSO DE LA TIENDA. "<<endl;
					cout<<"5. IMPLEMENTO DEPORTIVO MAS ECONOMICO DE LA TIENDA. "<<endl;
					cout<<"6. LISTADO DE IMPLEMENTOS DEPORTIVOS CON BAJO INVENTARIO. "<<endl;
					cout<<"7. VOLVER AL MENU PRINCIPAL"<<endl;
					cout<<"==========================================================================================================="<<endl;
					cout<<"INGRESE UNA OPCION: ";
					cin>>opc3;
					
					switch(opc3)
					{
						case 1:
						{
							// Código para la venta de implementos deportivos
						    string nombreProducto;
						    int codigoProducto; 
						    int opcionVentaImplementos;
						    bool encontrado = false;
						    
						    do{
							
							    
							    system("cls");
								cout<<"==========================================================================================================="<<endl;
								cout<<"\n"<<endl;
								cout<<"                                 VENTA DE IMPLEMENTOS DEPORTIVOS"<<endl;
								cout<<"\n"<<endl;
								cout<<"==========================================================================================================="<<endl;
								cout<<"1. BUSCAR POR NOMBRE. "<<endl;
								cout<<"2. BUSCAR POR CODIGO."<<endl;
								cout<<"3. SALIR. "<<endl;
								cout<<"==========================================================================================================="<<endl;
								cout<<"INGRESE UNA OPCION: ";
								cin>>opcionVentaImplementos;
								
								
								switch(opcionVentaImplementos){
									
									case 1: 
									{
										cin.ignore();
						                string nombreProducto;
						                cout << "INGRESA EL NOMBRE: ";
						                getline(cin, nombreProducto);
						                buscarPorNombre(producto, contador, nombreProducto);
						                system("pause");
						                break;
									}
									case 2: 
									{
										cout<<"INGRESA EL CODIGO: ";
										cin>>codigoProducto;
										
										cout<< "EL PRODUCTO ES: " << codigoProducto << endl;
										buscarPorCodigo(producto, contador, codigoProducto);
										
										system("pause");
						   				break;
									}
									case 3: 
									{
										cout<<"SALIENDO" << endl;
										system("pause");
						   				break;
									}
									default: 
									{
										cout<<"OPCION INCORRECTA" << endl;
										system("pause");
										break;
									}
									
								}
							
							}while(opcionVentaImplementos!=3);
						
						    
						
						    system("pause");
						    break;
				        } 	
						
						case 2:{
							
							
						    string nombreProducto;
						    int codigoProducto; 
						    int opcionCompraImplementos;
						    bool encontrado = false;
						    
						    do{
							
							    
							    system("cls");
								cout<<"==========================================================================================================="<<endl;
								cout<<"\n"<<endl;
								cout<<"                                 COMPRA DE IMPLEMENTOS DEPORTIVOS"<<endl;
								cout<<"\n"<<endl;
								cout<<"==========================================================================================================="<<endl;
								cout<<"1. BUSCAR POR NOMBRE. "<<endl;
								cout<<"2. BUSCAR POR CODIGO."<<endl;
								cout<<"3. SALIR. "<<endl;
								cout<<"==========================================================================================================="<<endl;
								cout<<"INGRESE UNA OPCION: ";
								cin>>opcionCompraImplementos;
								
								
								switch(opcionCompraImplementos){
									
									case 1: 
									{
										cin.ignore();
						                string nombreProducto;
						                cout << "INGRESA EL NOMBRE: ";
						                getline(cin, nombreProducto);
						                compraBuscarPorNombre(producto, contador, nombreProducto);
						                system("pause");
						                break;
									}
									case 2: 
									{
										cout<<"INGRESA EL CODIGO: ";
										cin>>codigoProducto;
										
										cout<< "EL PRODUCTO ES: " << codigoProducto << endl;
										compraBuscarPorCodigo(producto, contador, codigoProducto);
										
										system("pause");
						   				break;
									}
									case 3: 
									{
										cout<<"SALIENDO" << endl;
										system("pause");
						   				break;
									}
									default: 
									{
										cout<<"OPCION INCORRECTA" << endl;
										system("pause");
										break;
									}
									
								}
							
							}while(opcionCompraImplementos!=3);
						
						    
						
						    system("pause");
						    break;
							
						}
						
						case 3:{
							
							double total = sumaTotalPrecios(producto, contador);
							
							cout << "LA SUMA TOTAL DE TODOS LOS IMPLEMENNTOS DEPORTIVOS DE LA TIENDA ES DE: $" << fixed << setprecision(2) << total << endl;
							
							system("pause");
							break;
						}
						
						case 4:{
							
							// Llamada a la función para encontrar el implemento más costoso
							inventario implementoMasCostoso = encontrarImplementoMasCostoso(producto, contador);
							
							// Imprimir los detalles del implemento más costoso
							cout << "IMPLEMENTOS MAS COSTOSOS:" << endl;
							cout << "CODIGO: " << implementoMasCostoso.codigo << endl;
							cout << "NOMBRE: " << implementoMasCostoso.nombre << endl;
							cout << "PRECIO: " << implementoMasCostoso.precio << endl;
							cout << "CANTIDAD: " << implementoMasCostoso.cantidad << endl;
							
							system("pause");
							break;
						}
						
						case 5:{
							
							
							// Llamada a la función para encontrar el implemento más economico
							inventario implementoMasEconomico = encontrarImplementoMasEconomico(producto, contador);
							
							// Imprimir los detalles del implemento más costoso
							cout << "IMPLEMENTO MAS ECONOMICO:" << endl;
							cout << "CODIGO: " << implementoMasEconomico.codigo << endl;
							cout << "NOMBRE: " << implementoMasEconomico.nombre << endl;
							cout << "PRECIO: " << implementoMasEconomico.precio << endl;
							cout << "CANTIDAD: " << implementoMasEconomico.cantidad << endl;
							
							system("pause");
							break;
						}
						
						case 6:{
							
							listarImplementosCantidadMenorADiez(producto, contador);
							
							system("pause");
							break;
						}
						
						case 7:{
							
									cout<<"======================================================================================================================="<<endl;
									cout<<"\n\nESTA SEGUR@ QUE DESEA VOLVER AL MENU PRINCIAL?\n\n ";
									cout<<"1. SI\n";
									cout<<"2. NO\n";
									cout<<"======================================================================================================================="<<endl;
					
									cin>>menPrincipal2;
									
									if(menPrincipal2==1)
									{
										return main();
									}
							
							system("pause");
							break;
						}
					}//switch sub menu 2
					
					default:
						{
							cout << "OPCION INCORRECTA! " << endl; 
						}
					
				}while(opc3!=7);
				
				system("pause");
				break;
				}
				
			case 3:
				{
					cout<<"======================================================================================================================="<<endl;
					cout<<"\n\nESTA SEGUR@ QUE DESEA VOLVER AL MENU PRINCIAL?\n\n";
					cout<<"1. SI\n";
					cout<<"2. NO\n";
					cout<<"======================================================================================================================="<<endl;
					cin>>salir;
					
					if(salir==1)
					{
						return 0;
					}
					else
					{
						return main();
					}
					
					system("pause");
					break;
				}
		}//switch menu principal
	}while(opc!=3);
}
