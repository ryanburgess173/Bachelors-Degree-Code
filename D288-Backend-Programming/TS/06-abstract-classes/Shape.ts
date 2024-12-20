export abstract class Shape{

    constructor(private _x: number, private _y: number){}

    public get x(): number{
        return this.x;
    }
    public set x(value: number){
        this._x = value;
    }

    public get y(): number{
        return this.y;
    }
    public set y(value: number){
        this._y = value;
    }

    // in TS everything is public by default
    getInfo(): string {
        return `x=${this._x}, y=${this._y}`;
    }

    abstract calculateArea(): number;
}