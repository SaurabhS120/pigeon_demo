package com.example.pigeon_demo1

import com.example.pigeon_demo1.pigeon.Pigeon
import io.flutter.embedding.android.FlutterActivity
import io.flutter.embedding.engine.FlutterEngine

class MainActivity: FlutterActivity() {
    override fun configureFlutterEngine(flutterEngine: FlutterEngine) {
        super.configureFlutterEngine(flutterEngine)
        Pigeon.MessagesApi.setup(flutterEngine.dartExecutor.binaryMessenger, MyMessageApi());
    }
}
