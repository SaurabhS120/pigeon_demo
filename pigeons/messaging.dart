import 'package:pigeon/pigeon.dart';
class MyMessages{
  final String title;
  final String body;
  final String email;

  MyMessages(this.title, this.body, this.email);
}
@HostApi()
abstract class MessagesApi{
  List<MyMessages> getMessages(String fromEmail);
}