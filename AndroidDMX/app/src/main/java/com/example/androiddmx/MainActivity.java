package com.example.androiddmx;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.example.androiddmx.databinding.ActivityMainBinding;


public class MainActivity extends AppCompatActivity {
    /**
     * A native method that is implemented by the 'androiddmx' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    // Used to load the 'androiddmx' library on application startup.
    static {
        System.loadLibrary("androiddmx");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView text = findViewById((R.id.text_android));
        text.setText("Clicker");
        Button button1=(Button) findViewById(R.id.button1);
        button1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view){
                text.setText("Bravo");
                text.setText(stringFromJNI());
            }
        });
        //tv.setText(stringFromJNI());
    }
}