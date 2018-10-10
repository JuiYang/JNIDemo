package com.example.tclxa.ndkdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
//    static {
//        System.loadLibrary("hello_jni");
//    }

    // 此处设置了一个按钮用于触发JNI方法
    private Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // 通过Button调用JNI中的方法
        button = (Button) findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                button.setText(JNIUtils.getStringFromJNI());
            }
        });
    }

    // 步骤2:定义在JNI中实现的方法
//    public static native String getStringFromJNI();
}
