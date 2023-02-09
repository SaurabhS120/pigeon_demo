package com.example.pigeon_demo1

import com.example.pigeon_demo1.pigeon.Pigeon

class MyMessageApi:Pigeon.MessagesApi {
    private val messages = listOf(
        Pigeon.MyMessages.Builder()
            .setTitle("Hello 1")
            .setBody("Hello Tony")
            .setEmail("tony@none.com")
            .build(),
        Pigeon.MyMessages.Builder()
            .setTitle("Hello 2")
            .setBody("Hello Eric")
            .setEmail("eric@none.com")
            .build(),
        Pigeon.MyMessages.Builder()
            .setTitle("Hello 3")
            .setBody("Hello Susan")
            .setEmail("susan@none.com")
            .build(),
    )
    override fun getMessages(fromEmail: String): MutableList<Pigeon.MyMessages> {
        return messages.toMutableList();
    }
}