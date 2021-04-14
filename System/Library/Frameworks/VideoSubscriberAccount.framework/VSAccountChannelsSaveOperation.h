/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation {

	NSError* _error;
	VSAccountChannels* _unsavedAccountChannels;
	VSAccountChannelsCenter* _accountChannelsCenter;

}

@property (nonatomic,retain) VSAccountChannels * unsavedAccountChannels;                   //@synthesize unsavedAccountChannels=_unsavedAccountChannels - In the implementation block
@property (nonatomic,retain) VSAccountChannelsCenter * accountChannelsCenter;              //@synthesize accountChannelsCenter=_accountChannelsCenter - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
-(VSAccountChannels *)unsavedAccountChannels;
-(VSAccountChannelsCenter *)accountChannelsCenter;
-(id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2 ;
-(void)setUnsavedAccountChannels:(VSAccountChannels *)arg1 ;
-(void)setAccountChannelsCenter:(VSAccountChannelsCenter *)arg1 ;
@end

