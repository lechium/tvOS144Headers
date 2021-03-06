/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFUUIDProvider.h>

@class WFAction, NSString;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider> {

	WFAction* _action;
	unsigned long long _position;

}

@property (nonatomic,readonly) WFAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)position;
-(WFAction *)action;
-(id)generateOutputUUIDForAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2 ;
@end

