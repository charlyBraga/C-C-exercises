# C-C-exercises
Here are many exercises in C / C ++ languages. The description of each exercise is in each file.

test:

```
class Produto{
    private int codigo;
    String nome, marca;
    float valorCompra, valorVenda;

    public Produto(int codigo, String nome, float valorCompra){
        this.codigo = codigo;
        this.nome = nome;
        this.valorCompra = valorCompra;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setValorCompra(float valorCompra) {
        this.valorCompra = valorCompra;
    }

    public void setValorVenda() {
        this.valorVenda = this.valorCompra + (float)(this.valorCompra * 0.2);
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public int getCodigo() {
        return codigo;
    }

    public String getNome() {
        return nome;
    }

    public float getValorCompra() {
        return valorCompra;
    }

    public float getValorVenda() {
        return valorVenda;
    }

    public String getMarca() {
        return marca;
    }



}
```
