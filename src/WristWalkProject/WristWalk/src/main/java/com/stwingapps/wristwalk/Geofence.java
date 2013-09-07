package com.stwingapps.wristwalk;

/**
 * Created by ricro on 9/7/13.
 */
public class Geofence {
    private static final double DELTA_X = 0;
    private static final double DELTA_Y = 0;

    private Point curPoint;
    private Point[] vertices;

    public Geofence(){

    }

    public Geofence(double x, double y){
        curPoint = new Point(x, y);
        calculateBounds();
    }

    private void calculateBounds(){
        vertices[0] = new Point(curPoint.getxPos() - DELTA_X, curPoint.getyPos() + DELTA_Y);
        vertices[1] = new Point(curPoint.getxPos() + DELTA_X, curPoint.getyPos() + DELTA_Y);
        vertices[2] = new Point(curPoint.getxPos() + DELTA_X, curPoint.getyPos() - DELTA_Y);
        vertices[3] = new Point(curPoint.getxPos() - DELTA_X, curPoint.getyPos() - DELTA_Y);
    }

}
