package com.stwingApps.WristWalk;

import android.app.Activity;
import android.os.Bundle;
import android.bluetooth.*;
import android.view.View;

public class WristWalkActivity extends Activity {
    /**
     * Called when the activity is first created.
     */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
    }

    @Override
    public void onPause() {

    }
     /*
     Called when the user clicks the Get Directions button
      */
    public void getDirections(View view) {
        //This will call Google Maps for the direction data

    }
}
