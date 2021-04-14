/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class NSMutableDictionary;

@interface WFAutomationSuggestionFeedbackManager : NSObject <WFApplicationStateObserver> {

	NSMutableDictionary* _feedbackMapping;
	NSMutableDictionary* _identifierMapping;

}

@property (nonatomic,retain) NSMutableDictionary * feedbackMapping;                //@synthesize feedbackMapping=_feedbackMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierMapping;              //@synthesize identifierMapping=_identifierMapping - In the implementation block
+(id)sharedManager;
+(id)trialIDWithSerializedSuggestion:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(BOOL)isMockDataEnabled;
-(void)addFeedbackWithType:(unsigned long long)arg1 serializedSuggestion:(id)arg2 automationIdentifier:(id)arg3 ;
-(void)reportFeedback;
-(void)trackSuggestion:(id)arg1 source:(unsigned long long)arg2 completed:(BOOL)arg3 visible:(BOOL)arg4 interacted:(BOOL)arg5 ;
-(void)trackRoutineWithIdentifier:(id)arg1 source:(unsigned long long)arg2 completed:(BOOL)arg3 interacted:(BOOL)arg4 ;
-(NSMutableDictionary *)feedbackMapping;
-(void)setFeedbackMapping:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierMapping;
-(void)setIdentifierMapping:(NSMutableDictionary *)arg1 ;
@end

