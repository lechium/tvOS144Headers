/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _stoppedResponding;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	BOOL _hasRespondedAtLeastOnce;
	AVAssetWriterInputPassDescription* _mostRecentPassDescription;
	/*^block*/id _callbackBlock;

}
-(id)init;
-(void)dealloc;
-(id)initWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)respondToNewPassDescription:(id)arg1 ;
-(void)stopRespondingToPassDescriptions;
-(BOOL)_hasStoppedResponding;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
@end
