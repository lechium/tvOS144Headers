/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFActionEnvironment : NSObject

@property (nonatomic,readonly) BOOL isWatchOS; 
@property (nonatomic,readonly) BOOL isAppExtension; 
+(id)currentEnvironment;
+(id)environmentForWorkflowType:(id)arg1 ;
-(BOOL)isAppExtension;
-(BOOL)isWatchOS;
@end

