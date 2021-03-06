/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface IMDSpamController : NSObject {

	NSMutableDictionary* _chatGUIDToSpamCheckTimerMap;
	NSMutableDictionary* _chatGUIDToCountMap;
	double _spamExtensionCutoffTime;

}

@property (retain) NSMutableDictionary * chatGUIDToSpamCheckTimerMap;              //@synthesize chatGUIDToSpamCheckTimerMap=_chatGUIDToSpamCheckTimerMap - In the implementation block
@property (retain) NSMutableDictionary * chatGUIDToCountMap;                       //@synthesize chatGUIDToCountMap=_chatGUIDToCountMap - In the implementation block
@property (assign,nonatomic) double spamExtensionCutoffTime;                       //@synthesize spamExtensionCutoffTime=_spamExtensionCutoffTime - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_isDisabled;
-(id)chatRegistry;
-(void)setChatGUIDToSpamCheckTimerMap:(NSMutableDictionary *)arg1 ;
-(void)setChatGUIDToCountMap:(NSMutableDictionary *)arg1 ;
-(void)setSpamExtensionCutoffTime:(double)arg1 ;
-(void)_spamCheckTimerFired:(id)arg1 ;
-(void)detectSpam:(id)arg1 chatGUID:(id)arg2 ;
-(NSMutableDictionary *)chatGUIDToCountMap;
-(void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2 ;
-(void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldCheckForSpamWithExtensionInChat:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
-(void)checkForSpamWithExtensionInChat:(id)arg1 forMessageBody:(id)arg2 sender:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)chatGUIDToSpamCheckTimerMap;
-(double)spamExtensionCutoffTime;
@end

