/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextInputPayloadDelegate;
@class NSArray;

@interface UITextInputPayloadController : NSObject {

	NSArray* _supportedPayloadIds;
	id<UITextInputPayloadDelegate> _payloadDelegate;

}

@property (nonatomic,copy) NSArray * supportedPayloadIds;                                 //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (assign,nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;              //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(NSArray *)supportedPayloadIds;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(void)setPayloadDelegate:(id<UITextInputPayloadDelegate>)arg1 ;
-(id<UITextInputPayloadDelegate>)payloadDelegate;
@end

