package com.example.myapp;

import android.app.Activity;
import android.os.Bundle;

public class MyAptivity extends Activity
{
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
    }
    // @Override
    // public void onResume() {
    //   if (GooglePlayServicesUtil.isGooglePlayServicesAvailable(getApplicationContext()) == ConnectionResult.SUCCESS) {

    //   } else {

    //   }
    // }   
}
