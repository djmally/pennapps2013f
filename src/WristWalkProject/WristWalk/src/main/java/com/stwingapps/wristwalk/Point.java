package com.stwingapps.wristwalk;

/**
 * Created by ricro on 9/7/13.
 */
public class Point {

    private double xPos;
    private double yPos;


    public Point(double x, double y){
        xPos = x;
        yPos = y;
    }

    public double getxPos() {
        return xPos;
    }

    public void setxPos(double xPos) {
        this.xPos = xPos;
    }

    public double getyPos() {
        return yPos;
    }

    public void setyPos(double yPos) {
        this.yPos = yPos;
    }
}
