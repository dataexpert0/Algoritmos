#include <iostream> 

using namespace std;

// Criação de objeto (o plano cartesiano R2) com um de seus atributos (um ponto flutuante x, y) definido como um vetor

class PlanoCartesiano {
private:
    float Ponto[2];

public:
    PlanoCartesiano() {
        Ponto[0] = 0.0f;
        Ponto[1] = 0.0f;
    }

    // Passa a escolha do usuário de ponto cartesiano como referência 

    void CriarPonto(float x, float y)
    {
        Ponto[0] = x;
        Ponto[1] = y;
    }

    // Método que verifica qual quadrante do Plano Cartesiano o ponto se encontra, se está na Origem, ou em algum dos eixos XY

    void CoordenadasQuadrante()
    {
                if((Ponto[0] > 0) && (Ponto[1] > 0))
                {
                    cout << "Q1" << endl;
                }
                else if((Ponto[0] < 0) && (Ponto[1] > 0))
                {
                    cout << "Q2" << endl;
                }
                else if((Ponto[0] < 0) && (Ponto[1] < 0))
                {
                    cout << "Q3" << endl;
                }
                else if((Ponto[0] > 0) && (Ponto[1] < 0))
                {
                    cout << "Q4" << endl;
                }
                else if((Ponto[0] == 0) && (Ponto[1] == 0))
                {
                    cout << "Origem" << endl;
                }
                else if((Ponto[1] == 0))
                {
                    cout << "Eixo X" << endl;
                }
                else if((Ponto[0] == 0))
                {
                    cout << "Eixo Y" << endl;
            }
        }
    };

int main()
{

    // Instanciação de um primeiro plano (plane1)
    PlanoCartesiano plane1;
    // Coordenadas do ponto
    float a, b; 

    cin >> a >> b;

    // Utilização dos métodos para validação pelo URI
    plane1.CriarPonto(a, b);
    plane1.CoordenadasQuadrante();

    return 0;
}