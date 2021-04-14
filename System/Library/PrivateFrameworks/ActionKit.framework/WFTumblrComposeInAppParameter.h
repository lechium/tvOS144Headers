/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFSwitchParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
-(BOOL)isHidden;
-(id)defaultSerializedRepresentation;
-(void)wasAddedToWorkflow;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(void)wasRemovedFromWorkflow;
-(BOOL)parameterStateIsValid:(id)arg1 ;
@end
