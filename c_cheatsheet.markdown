The Cheat Sheet for C Programming
=======

### Arithmetic operations.
```{}
+, -, *, /, % 

5 * 3 = 15
5 * 3.0 = 15.0

5 / 3 = 1
5 / 3.0 = 1.666
5.0 / 3.0 = 1.666

5 % 3 = 2
5.0 % 3.0 illegal
5.0 % 3 inllegal

casting:
(double)1 = 1.0

``` 

### Number in
```{}
int a,b;
scanf("%d%d",&a, &b)

%d for int
%lf for double
%f for float
%c for char
```

### Number out
```{}
int a;
printf("10%d",a)
%10d at least 10 character position
%8.2f 8 positions ub total decimal point in third position
%5f
%20s right align
%-20s left align

%d for int
%f for double and float
%c for char
%s for string
%p for pointer e.g. b0x7fff6636a870
```

### Logical expression
```{}
>, >=, <, <=, ==, != ,&&, ||, !
```

### Selection
```{}
if (a==1){
    xxx;
}else{
    yyy;
}

#switch-case
switch(month){
    case 1:
        b=xxx;
        break;
    case 2:
        b=xxx;
        break;
    default:
        b=xxx;
        break;
}
```
### Loop
```{}
int i;
for(i = 0; i<10; i++){
    xxx;
}

while(i<10){
    xxx;
    i++;
}
```
The `break;` statement allows loos to be abnormally terminated.


### Scope
C has side effect, functional languages don't have side effect.

1. local variable: inside funcion, other function cannot access
2. global variable: golobally available to all functions in the same source code
 file, loal variable declaratives in a function shadow global variables and 
 functions of the same name
3. static variable: retain between calls to that function. Static variables 
allow functions to maintain state from one call to the next without that 
information being accessible outside the function.

```{}
//z is global variable
int z = 2;
int main(int argc, char *argv[]){

}
void
func(int x){ 
    //static variable 
    static int x = 7;  
}
``` 

### Pointer
A pointer variable store the memory address of another variable, pointer 
provide a mechanism for aliasing- referring to the same variable by two 
different names.

`&` "the address of"

`*` "dereference operator"
```{}
int i = 5;
//declare a pointer to int
int *pi;

//pi is the address of i
pi = &i;

//now value of pi become 5 + 1 = 6, and i also become 6
*pi = *pi + 1
```

pointer as argument
```{}
void 
main(){
    int x=2, y=3;
    int_swap(&x, &3);
}
void
int_swap(int *p1, int *p2){
    int tmp;
    tmp = * p1;
    *p1 = *p2;
    *p2 = tmp;
}
```