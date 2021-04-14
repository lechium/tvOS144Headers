/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;
@class NSObject, NSMutableArray, NSArray, NSDate, NSURL, CPLEngineLibrary;

@interface CPLEngineFeedbackManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportSendFeedbackTask> _sendTask;
	NSMutableArray* _messagesToSend;
	NSArray* _messagesSending;
	NSDate* _lastAttemptDate;
	NSURL* _feedbackMessagesURL;
	BOOL _opened;
	BOOL _closed;
	BOOL _deactivated;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
-(void)_load;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2 ;
-(void)reportMiscInformation:(id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)_save;
-(void)_appendMessage:(id)arg1 ;
-(void)_appendMessages:(id)arg1 ;
-(void)_reallySendFeedbackToServer;
-(void)_sendFeedbackToServerIfNecessary;
-(void)sendFeedbackToServerIfNecessary;
-(void)reportMessage:(id)arg1 ;
-(void)reportMessages:(id)arg1 ;
-(void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2 ;
-(void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1 ;
@end

