/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;
@class _TVRCMRTelevisionWrapper, NSString, NSMutableArray, NSTimer;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	id<_TVRCMediaRemoteKeyboardAdapterDelegate> _delegate;
	NSString* _text;
	NSMutableArray* _typedStringsAwaitingAcknowledgement;
	NSTimer* _acknowledgementTimer;

}

@property (nonatomic,copy) NSString * text;                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSMutableArray * typedStringsAwaitingAcknowledgement;                     //@synthesize typedStringsAwaitingAcknowledgement=_typedStringsAwaitingAcknowledgement - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * acknowledgementTimer;                                    //@synthesize acknowledgementTimer=_acknowledgementTimer - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                                    //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteKeyboardAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)userEnteredText:(id)arg1 ;
-(void)sessionBeganWithInitialText:(id)arg1 ;
-(void)sessionEnded;
-(void)receivedRemotelyUpdatedText:(id)arg1 ;
-(void)_acknowledgementTimerExpired:(id)arg1 ;
-(void)_resetTextValueToSessionValue;
-(NSMutableArray *)typedStringsAwaitingAcknowledgement;
-(void)setTypedStringsAwaitingAcknowledgement:(NSMutableArray *)arg1 ;
-(NSTimer *)acknowledgementTimer;
-(void)setAcknowledgementTimer:(NSTimer *)arg1 ;
@end

