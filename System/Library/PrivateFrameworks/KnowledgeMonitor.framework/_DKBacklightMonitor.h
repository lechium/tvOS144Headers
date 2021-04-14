/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
+(void)setIsBacklit:(BOOL)arg1 ;
+(id)_eventWithState:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)obtainCurrentValue;
@end

