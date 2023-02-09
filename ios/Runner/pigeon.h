// Autogenerated from Pigeon (v7.2.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class MyMessages;

@interface MyMessages : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTitle:(NSString *)title
    body:(NSString *)body
    email:(NSString *)email;
@property(nonatomic, copy) NSString * title;
@property(nonatomic, copy) NSString * body;
@property(nonatomic, copy) NSString * email;
@end

/// The codec used by MessagesApi.
NSObject<FlutterMessageCodec> *MessagesApiGetCodec(void);

@protocol MessagesApi
/// @return `nil` only when `error != nil`.
- (nullable NSArray<MyMessages *> *)getMessagesFromEmail:(NSString *)fromEmail error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void MessagesApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<MessagesApi> *_Nullable api);

NS_ASSUME_NONNULL_END
