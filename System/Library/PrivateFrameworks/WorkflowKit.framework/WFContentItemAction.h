/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction {

	WFContentProperty* _defaultProperty;

}

@property (nonatomic,readonly) Class contentItemClass; 
@property (nonatomic,readonly) WFContentProperty * defaultProperty;              //@synthesize defaultProperty=_defaultProperty - In the implementation block
-(id)description;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)inputContentClasses;
-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(Class)contentItemClass;
-(WFContentProperty *)defaultProperty;
@end

