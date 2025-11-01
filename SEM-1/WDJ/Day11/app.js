class student{
    //when object create then constructor called

    constructor(id, name, city){
        var id
        var name
        var city
        // this.id = id;
        // this.name = name;
        // this.city = city;
        this.id = 2;
        this.name = 'hello';
        this.city = "ordinory";
        console.log(id+ " " + name+ " "+ city);
    }
 
}
// new keyword is for memory allowcation 
let obj = new student(1, 'ram', 'rajkot',20);