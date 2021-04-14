/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@interface WFAppPickerParameter : WFParameter {

	long long _appSearchType;

}

@property (nonatomic,readonly) long long appSearchType;              //@synthesize appSearchType=_appSearchType - In the implementation block
-(id)localizedPlaceholder;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForState:(id)arg1 ;
-(id)accessoryIconForState:(id)arg1 ;
-(id)stateForApp:(id)arg1 ;
-(long long)appSearchType;
@end
