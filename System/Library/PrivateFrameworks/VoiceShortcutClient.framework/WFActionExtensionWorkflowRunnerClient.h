/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/WFWorkflowRunnerClient.h>

@class NSDictionary;

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient {

	NSDictionary* _javaScriptRunners;

}

@property (nonatomic,copy) NSDictionary * javaScriptRunners;              //@synthesize javaScriptRunners=_javaScriptRunners - In the implementation block
-(id)initWithWorkflowIdentifier:(id)arg1 input:(id)arg2 javaScriptRunners:(id)arg3 ;
-(NSDictionary *)javaScriptRunners;
-(void)setJavaScriptRunners:(NSDictionary *)arg1 ;
@end

