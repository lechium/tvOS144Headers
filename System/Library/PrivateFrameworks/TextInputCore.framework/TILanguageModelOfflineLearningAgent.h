/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningAgent : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TILanguageModelOfflineLearningTask* _currentLearningTask;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                          //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) TILanguageModelOfflineLearningTask * currentLearningTask;              //@synthesize currentLearningTask=_currentLearningTask - In the implementation block
+(void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2 ;
+(id)contactRecordsForRecipients:(id)arg1 ;
+(id)sharedLearningAgent;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)continueLearningTaskWithStrategy:(id)arg1 ;
-(void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2 ;
-(void)performTaskInBackground:(/*^block*/id)arg1 ;
-(void)handleRemovalOfLearnedModels;
-(TILanguageModelOfflineLearningTask *)currentLearningTask;
-(void)setCurrentLearningTask:(TILanguageModelOfflineLearningTask *)arg1 ;
@end

